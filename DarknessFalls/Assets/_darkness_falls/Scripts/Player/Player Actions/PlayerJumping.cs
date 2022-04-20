using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Player action for jumping
public class PlayerJumping : PlayerAction
{
    // Upwards velocity when the player jumps
    public float jumpVelocity;
    // Offset in the x and y direction for where the smoke puff should occur
    public Vector2 smokePuffOffset;

    // Boolean for whether the player can double jump
    private bool _canDoubleJump;
    // Reference to the smoke puff animator component
    private Animator _smokePuffAnimator;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "jumping";
    }

    // Initialize editor variables
    protected override void ActionReset()
    {
        jumpVelocity = 13.5f;
        smokePuffOffset = new Vector2(0.0f, -1.28f);
    }

    // Initialize runtime variables
    protected override void ActionStart()
    {
        _canDoubleJump = false;
        _smokePuffAnimator = GameObject.Find("Smoke Puff").GetComponent<Animator>();
    }

    public override void BeforeActionUpdate()
    {
        // Mark the player as not jumping
        _active = false;
        // Check if the player is grounded
        if (_actionController.Grounded)
        {
            // Allow the player to double jump
            _canDoubleJump = true;
        }
    }

    public override void ActionUpdate()
    {
        // Check if the player is attempting to jump, and is either grounded or has a double jump available
        if (Input.GetKeyDown(KeyCode.Space) && (_actionController.Grounded || _canDoubleJump))
        {
            // Set the player's y velocity to jump velocity
            _body.velocity = new Vector2(_body.velocity.x, jumpVelocity);
            // Mark the player as jumping
            _active = true;
            // Check if the player is not grounded, which is whether they have double jumped
            if (!_actionController.Grounded)
            {
                // Take away the player's double jump
                _canDoubleJump = false;
                // Set the smoke puff's position to the offsetted position of the player
                _smokePuffAnimator.transform.position = new Vector3(transform.position.x + smokePuffOffset.x, transform.position.y + smokePuffOffset.y, transform.position.z);
                // Set the smoke puff's direction to the direction the player is not facing
                _smokePuffAnimator.transform.localScale = new Vector3(Mathf.Abs(_smokePuffAnimator.transform.localScale.x) * transform.localScale.x * -1, _smokePuffAnimator.transform.localScale.y, _smokePuffAnimator.transform.localScale.z);
                // Play the smoke puff animation
                _smokePuffAnimator.SetTrigger("play");
            }
        }
    }
}
