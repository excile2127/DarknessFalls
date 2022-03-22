using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// Controller script for all player actions
[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(Rigidbody2D))]
public class PlayerActionController : MonoBehaviour
{
    // Rigidbody component of the player
    private Rigidbody2D _body;
    // Box collider component of the player
    private BoxCollider2D _box;
    // All player actions attached to this object
    private Dictionary<string, PlayerAction> _playerActions;
    // Storage of all action's allowances
    private Dictionary<string, bool> _storedAllowances;

    // Boolean for whether the player is grounded
    private bool _grounded;

    // Accessor for _grounded
    public bool Grounded
    {
        get { return _grounded; }
    }

    // Initialize runtime variables
    void Start()
    {
        _body = GetComponent<Rigidbody2D>();
        _box = GetComponent<BoxCollider2D>();
        _playerActions = new Dictionary<string, PlayerAction>();
        _storedAllowances = new Dictionary<string, bool>();

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

        _grounded = false;
    }

    void Update()
    {
        // Check for collisions with terrain below the player
        Vector3 max = _box.bounds.max;
        Vector3 min = _box.bounds.min;
        Vector2 corner1 = new Vector2(max.x - .1f, min.y - .1f);
        Vector2 corner2 = new Vector2(min.x + .1f, min.y - .2f);
        Collider2D hit = Physics2D.OverlapArea(corner1, corner2);

        // Check if there is a collision and the y velocity is 0, and mark the player as grounded accordingly
        _grounded = (hit != null && _body.velocity.y == 0) ? true : false;

        // Store all action's allowances
        StoreAll();

        // Check if the player is dashing
        if (_playerActions["dashing"].Active)
        {
            // If so, check if the player is attacking
            if (_playerActions["attacking"].Active)
            {
                // If so, stop the attack
                _playerActions["attacking"].StopAction();
            }
            // Disallow walking and attacking
            _playerActions["walking"].allowed = false;
            _playerActions["attacking"].allowed = false;
        }
        // Otherwise, check if the player is attacking
        else if (_playerActions["attacking"].Active)
        {
            // If so, disallow walking
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
                // If so, call allowed update
                playerAction.ActionUpdate();
            }
            // Call after action update
            playerAction.AfterActionUpdate();
        }

        // Reset all actions allowed status to their former state
        ResetAll();
    }

    // Store all action's allowances
    public void StoreAll()
    {
        foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
        {
            _storedAllowances[kvp.Key] = kvp.Value.allowed;
        }
    }

    // Set all action's allowances to the input value
    public void SetAll(bool value)
    {
        foreach (KeyValuePair<string, PlayerAction> kvp in _playerActions)
        {
            _playerActions[kvp.Key].allowed = value;
        }
    }

    // Reset all action's allowances to their previous state
    public void ResetAll()
    {
        foreach (KeyValuePair<string, bool> kvp in _storedAllowances)
        {
            _playerActions[kvp.Key].allowed = kvp.Value;
        }
    }
}