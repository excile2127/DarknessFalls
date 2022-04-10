using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// TO DO: ADD ATTACK IN FRONT OF PLAYER

// Player action for dashing
public class PlayerDashing : PlayerAction
{
    // Speed at which the player dashes
    public float dashSpeed;
    // Duration in seconds that dashing lasts
    public float dashDuration;
    // Cooldown in seconds between dashes
    public float dashCooldown;
    // Amount of torchlight lost when double dashing
    public float torchlightOnDoubleDash;

    // The hurtbox component of the player
    private Hurtbox _hurtbox;
    // The player's current dash state
    private DashState _dashState;
    // Timer used to measure dash duration and cooldown
    private float _dashTimer;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "dashing";
    }

    // Initialize editor variables
    protected override void ActionReset()
    {
        dashSpeed = 10.8f;
        dashDuration = 0.25f;
        dashCooldown = 0.75f;
        torchlightOnDoubleDash = -30.0f;
    }

    // Initialize runtime variables
    protected override void ActionStart()
    {
        _hurtbox = GetComponentInChildren<Hurtbox>();

        _dashState = DashState.Ready;
        _dashTimer = 0.0f;
    }

    public override void ActionUpdate()
    {
        // Check if the player pressed the dash key, is grounded, and is inputting horizontal movement
        if (Input.GetKeyDown(KeyCode.LeftShift) && _actionController.Grounded && Input.GetAxis("Horizontal") != 0)
        {
            // Handle different cases of dash state
            switch (_dashState)
            {
                case DashState.Ready:
                    // Set the hurtbox to inactive
                    _hurtbox.active = false;
                    // Check if the player is inputting in the opposite direction they are facing
                    if ((Input.GetAxis("Horizontal") < 0 && transform.localScale.x > 0) || (Input.GetAxis("Horizontal") > 0 && transform.localScale.x < 0))
                    {
                        // Flip the player's local scale in the x direction
                        transform.localScale = new Vector3(transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
                    }
                    // Set the player's velocity to dash speed in the direction of their choice
                    _body.velocity = new Vector2(dashSpeed * Mathf.Sign(transform.localScale.x), _body.velocity.y);
                    // Mark the player as dashing
                    _dashState = DashState.Dashing;
                    break;
                case DashState.Dashing: case DashState.DashCooldown:
                    if (!_actionController.DeathsDoor)
                    {
                        // Reset dash timer
                        _dashTimer = 0;
                        // Check if the player is inputting in the opposite direction they are facing
                        if ((Input.GetAxis("Horizontal") < 0 && transform.localScale.x > 0) || (Input.GetAxis("Horizontal") > 0 && transform.localScale.x < 0))
                        {
                            // Flip the player's local scale in the x direction
                            transform.localScale = new Vector3(transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
                        }
                        // Set the player's velocity to dash speed in the direction of their choice
                        _body.velocity = new Vector2(dashSpeed * Mathf.Sign(transform.localScale.x), _body.velocity.y);
                        // Broadcast to reduce the player's torchlight
                        Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, torchlightOnDoubleDash);
                        // Set the hurtbox to inactive
                        _hurtbox.active = false;
                        // Mark the player as double dashing
                        _dashState = DashState.DoubleDashing;
                    }
                    break;
            }
        }
    }

    public override void AfterActionUpdate()
    {
        // Handle different cases of dash state
        switch (_dashState)
        {
            case DashState.Dashing:
                // Update dash timer
                _dashTimer += Time.deltaTime;
                // Maintain the player's velocity at dash speed 
                _body.velocity = new Vector2(dashSpeed * Mathf.Sign(transform.localScale.x), _body.velocity.y);
                // Check if the player's dash has exceeded the duration or if they are no longer grounded
                if (_dashTimer >= dashDuration || !_actionController.Grounded)
                {
                    // If so, set dash timer to dash cooldown
                    _dashTimer = dashCooldown;
                    // Set the hurtbox to active
                    _hurtbox.active = true;
                    // Mark player as in dash cooldown
                    _dashState = DashState.DashCooldown;
                }
                break;
            case DashState.DoubleDashing:
                // Update dash timer
                _dashTimer += Time.deltaTime;
                // Maintain the player's velocity at dash speed
                _body.velocity = new Vector2(dashSpeed * Mathf.Sign(transform.localScale.x), _body.velocity.y);
                // Check if either the dash timer has exceeded the dash duration or if the player is not grounded
                if (_dashTimer >= dashDuration || !_actionController.Grounded)
                {
                    // If so, set the dash timer to the dash cooldown
                    _dashTimer = dashCooldown;
                    // Set the hurtbox to active
                    _hurtbox.active = true;
                    // Mark the player as in double dash cooldown
                    _dashState = DashState.DoubleDashCooldown;
                }
                break;
            case DashState.DashCooldown: case DashState.DoubleDashCooldown:
                // Reduce dash timer for cooldown
                _dashTimer -= Time.deltaTime;
                // Check if the player is no longer on dash cooldown
                if (_dashTimer <= 0)
                {
                    // If so, reset dash timer
                    _dashTimer = 0;
                    // Set the hurtbox to active
                    _hurtbox.active = true;
                    // Mark player as ready to dash
                    _dashState = DashState.Ready;
                }
                break;
        }
        // Mark whether the player is dashing
        _active = (_dashState == DashState.Dashing || _dashState == DashState.DoubleDashing);
    }

    public override void StopAction()
    {
        // Handle different cases of dash state
        switch (_dashState)
        {
            case DashState.Dashing:
                // Set the dash timer to the dash cooldown
                _dashTimer = dashCooldown;
                // Set the hurtbox to active
                _hurtbox.active = true;
                // Mark the player as in dash cooldown
                _dashState = DashState.DashCooldown;
                break;
            case DashState.DoubleDashing:
                // Set the dash timer to the dash cooldown
                _dashTimer = dashCooldown;
                // Set the hurtbox to active
                _hurtbox.active = true;
                // Mark the player as in double dash cooldown
                _dashState = DashState.DoubleDashCooldown;
                break;
        }
        _active = false;
    }
}