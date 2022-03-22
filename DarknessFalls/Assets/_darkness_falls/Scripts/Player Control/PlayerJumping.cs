using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Player action for jumping
public class PlayerJumping : PlayerAction
{
    // Upwards velocity when the player jumps
    public float jumpVelocity;

    // Boolean for whether the player can double jump
    private bool _canDoubleJump;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "jumping";
    }

    // Initialize editor variables
    protected override void ActionReset()
    {
        jumpVelocity = 13.5f;
    }

    // Initialize runtime variables
    protected override void ActionStart()
    {
        _canDoubleJump = false;
    }

    public override void BeforeActionUpdate()
    {
        // Check if the player is grounded
        if (_actionController.Grounded)
        {
            // If so, allow the player to double jump
            _canDoubleJump = true;
            // Mark the player as not jumping
            _active = false;
        }
    }

    public override void ActionUpdate()
    {
        // Check if the player is attempting to jump, and is either grounded or has a double jump available
        if (Input.GetKeyDown(KeyCode.Space) && (_actionController.Grounded || _canDoubleJump))
        {
            // If so, set the player's y velocity to jump velocity
            _body.velocity = new Vector2(_body.velocity.x, jumpVelocity);
            // Mark the player as jumping
            _active = true;
            // Check if the player is not grounded, which is whether they have double jumped
            if (!_actionController.Grounded)
            {
                // If so, take away the player's double jump
                _canDoubleJump = false;
                // Broadcast to reduce the player's torch
                Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, TorchlightUpdateValues.DOUBLE_JUMP);
            }
        }
    }
}
