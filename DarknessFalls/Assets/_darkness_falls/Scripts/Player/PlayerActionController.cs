using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// Controller script for all player actions
// Also controls player's animations
[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(Animator))]
public class PlayerActionController : MonoBehaviour
{
    // Rigidbody component of the player
    private Rigidbody2D _body;
    // Box collider component of the player
    private BoxCollider2D _box;
    // Animator component of the plater
    private Animator _animator;
    // All player actions attached to this object
    private Dictionary<string, PlayerAction> _playerActions;
    // Storage of all action's allowances
    private Dictionary<string, bool> _storedAllowances;
    // Boolean for whether the player is grounded
    private bool _grounded;
    // Boolean for whether the player is at 0 torchlight
    private bool _deathsDoor;
    // Boolean for whether the player can take any actions
    private bool _stunned;

    // Accessor for _grounded
    public bool Grounded
    {
        get { return _grounded; }
    }

    public bool DeathsDoor
    {
        get { return _deathsDoor; }
    }

    // Add listeners for torchlight updates on enable
    void OnEnable()
    {
        Messenger<float>.AddListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
    }

    // Remove listeners for torchlight updates on disable
    void OnDisable()
    {
        Messenger<float>.RemoveListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
    }

    void Start()
    {
        // Initialize runtime variables
        _body = GetComponent<Rigidbody2D>();
        _box = GetComponent<BoxCollider2D>();
        _animator = GetComponent<Animator>();
        _playerActions = new Dictionary<string, PlayerAction>();
        _storedAllowances = new Dictionary<string, bool>();
        _grounded = false;
        _deathsDoor = false;
        _stunned = false;

        // Populate _playerActions
        PlayerAction[] tempPlayerActions = GetComponents<PlayerAction>();
        foreach (PlayerAction playerAction in tempPlayerActions)
        {
            _playerActions.Add(playerAction.ActionName, playerAction);
        }

        // Populate _storedAllowances
        foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
        {
            _storedAllowances.Add(kvp.Key, kvp.Value.allowed);
        }
    }

    void Update()
    {
        // Check that the game isn't paused
        if (!PauseMenuController.gamePaused)
        {
            // Check for collisions with terrain below the player
            Vector3 max = _box.bounds.max;
            Vector3 min = _box.bounds.min;
            Vector2 corner1 = new Vector2(max.x - 0.01f, min.y - 0.1f);
            Vector2 corner2 = new Vector2(min.x + 0.01f, min.y - 0.2f);
            Collider2D hit = Physics2D.OverlapArea(corner1, corner2, (LayerMask.GetMask("Pushbox") | LayerMask.GetMask("Default")));

            // Check if there is a collision and the y velocity is 0, and mark the player as grounded accordingly
            _grounded = (hit != null && _body.velocity.y == 0) ? true : false;

            // Store all action's allowances
            StoreAll();

            // Check if the player is dashing
            if (_playerActions["dashing"].Active)
            {
                // Check if the player is attacking
                if (_playerActions["attacking"].Active)
                {
                    // Stop the attack
                    _playerActions["attacking"].StopAction();
                }
                // Disallow walking and attacking
                _playerActions["walking"].allowed = false;
                _playerActions["attacking"].allowed = false;
            }
            // Otherwise, check if the player is attacking
            else if (_playerActions["attacking"].Active)
            {
                // Disallow walking
                _playerActions["walking"].allowed = false;
            }

            // Loop over each action in _playerActions
            foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
            {
                PlayerAction playerAction = kvp.Value;
                // Call before action update
                playerAction.BeforeActionUpdate();
                // Check if this action is allowed
                if (playerAction.allowed)
                {
                    // Call allowed update
                    playerAction.ActionUpdate();
                }
                // Call after action update
                playerAction.AfterActionUpdate();
            }

            // Check if the player is allowed to walk and if they are now walking in the opposite direction that they were facing
            if (_playerActions["walking"].allowed
            && ((Input.GetAxis("Horizontal") < 0 && transform.localScale.x > 0) || (Input.GetAxis("Horizontal") > 0 && transform.localScale.x < 0)))
            {
                // Flip the player's local scale in the x direction
                transform.localScale = new Vector3(transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
            }

            // Set all animator parameters to false
            foreach (AnimatorControllerParameter parameter in _animator.parameters)
            {
                _animator.SetBool(parameter.name, false);
            }
            // Set the parameter of the correct animation to true
            if (_stunned)
            {
                _animator.SetBool("stunned", true);
            }
            else if (_playerActions["attacking"].Active)
            {
                // Get reference to player attacking script
                PlayerAttacking attack = GetComponent<PlayerAttacking>();
                // Check for different attacks and play the correct animation
                // Note: this code and system is highly coupled between individual actions and the controller
                // In the future, add a way for a generic player action to pass what animation to play to the controller
                if (attack.DeathsDoorActive)
                {
                    _animator.SetBool("deaths_door_attacking", true);
                }
                else if (attack.TorchActive)
                {
                    _animator.SetBool("torch_attacking", true);
                }
                else
                {
                    _animator.SetBool("sword_attacking", true);
                }
            }
            else if (_playerActions["dashing"].Active)
            {
                // Check if the player is not double dashing and play the correct animation
                if (!GetComponent<PlayerDashing>().DoubleDashing)
                {
                    _animator.SetBool("dashing", true);
                }
                else
                {
                    _animator.SetBool("double_dashing", true);
                }
            }
            else if (!_grounded)
            {
                if (_body.velocity.y > 0)
                {
                    _animator.SetBool("rising", true);
                }
                else
                {
                    _animator.SetBool("falling", true);
                }
            }
            else if (_playerActions["walking"].Active)
            {
                _animator.SetBool("walking", true);
            }
            else
            {
                _animator.SetBool("idle", true);
            }

            // Reset all actions allowed status to their former state
            ResetAll();
        }
    }

    // When the torchlight is changed, set the value of _deathsDoor
    void OnTorchlightChanged(float value)
    {
        _deathsDoor = value == 0;
    }

    // Store all action's allowances
    private void StoreAll()
    {
        foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
        {
            _storedAllowances[kvp.Key] = kvp.Value.allowed;
        }
    }

    // Reset all action's allowances to their previous state
    private void ResetAll()
    {
        foreach (KeyValuePair<string, bool> kvp in _storedAllowances)
        {
            _playerActions[kvp.Key].allowed = kvp.Value;
        }
    }

    // Set all action's allowances to the input value
    public void SetAll(bool value)
    {
        _stunned = !value;
        foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
        {
            _playerActions[kvp.Key].allowed = value;
        }
    }

    // Function called when the player dies
    public void Die()
    {
        // Set all animator parameters to false
        foreach (AnimatorControllerParameter parameter in _animator.parameters)
        {
            _animator.SetBool(parameter.name, false);
        }
        // Pass the player's death to the animator
        _animator.SetBool("dying", true);
        // Disable this script
        this.enabled = false;
    }
}