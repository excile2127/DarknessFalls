using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// Script to handle platformer player control
// Includes walking, jumping, dashing, and (soon) attacking
[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(Rigidbody2D))]
public class PlatformerPlayer : MonoBehaviour
{
    // Speed at which the player walks
    public float walkSpeed = 7.2f;
    // Factor by which the walk speed is multiplied when dashing
    public float dashMultiplier = 1.5f;
    // Duration in seconds dashing lasts
    public float dashDuration = 0.25f;
    // Cooldown in seconds between dashes
    public float dashCooldown = 0.5f;
    // Force applied vertically when jumping
    public float jumpForce = 13.5f;

    // Rigidbody component of the player
    private Rigidbody2D body;
    // Box collider component of the player
    private BoxCollider2D box;
    // Current state of the player's dashes
    private DashState dashState;
    // Timer used to measure dash duration and cooldown
    private float dashTimer;
    // Whether the player has a double jump available
    private bool doubleJumpAvailable;
    // Whether the player is currently dash-jumping
    private bool dashJumping;

    // Temporary sprite renderer component of the player
    // Used for displaying dash state for debugging
    private SpriteRenderer sprite;

    private enum DashState
    {
        Ready,
        Dashing,
        DoubleDashing,
        DashCooldown,
        DoubleDashCooldown
    }

    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        box = GetComponent<BoxCollider2D>();
        dashState = DashState.Ready;
        dashTimer = 0.0f;
        doubleJumpAvailable = true;
        dashJumping = false;

        // Temporary, remove when animations are set up
        sprite = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        // Check if the player is dash-jumping and whether they are pressing in the opposite direction they are moving
        if (dashJumping && Input.GetAxis("Horizontal") * body.velocity.x <= 0)
        {
            // If they are, they are no longer dash-jumping
            dashJumping = false;
        }

        // Check if the player is doing any kind of dashing
        if (!(dashState == DashState.Dashing || dashState == DashState.DoubleDashing || dashJumping))
        {
            // If they are not, use horizontal axis input to set velocity via walk speed
            float deltaX = Input.GetAxis("Horizontal") * walkSpeed;
            Vector2 movement = new Vector2(deltaX, body.velocity.y);
            body.velocity = movement;
        }

        // By default, the player is not grounded
        bool grounded = false;

        // Check if either of two points below the player's bottom left and bottom right corner collide with something
        Vector3 max = box.bounds.max;
        Vector3 min = box.bounds.min;
        Vector2 corner1 = new Vector2(max.x - .1f, min.y - .1f);
        Vector2 corner2 = new Vector2(min.x + .1f, min.y - .1f);
        Collider2D hit = Physics2D.OverlapArea(corner1, corner2);

        // Check if there is a collision and the y velocity is 0
        if (hit != null && body.velocity.y == 0)
        {
            // If so, the player is grounded
            grounded = true;
            // Also, check if the player had a double jump available
            if (!doubleJumpAvailable)
            {
                // If they did not, the player now has a double jump available
                doubleJumpAvailable = true;
            }
            // Check if the player was dash jumping
            if (dashJumping)
            {
                // If they were, they are no longer dash-jumping
                dashJumping = false;
            }
        }

        // Store whether the player is both grounded and they are attempting to move
        bool canDash = grounded && Input.GetAxis("Horizontal") != 0;

        // Handle different cases of dash state
        switch (dashState)
        {
            // If the player is ready to dash
            case DashState.Ready:
                // Temporary, used to see dash state for debugging
                sprite.color = new Color(0, 1, 0, 1);
                // Check if the player is attemping to dash and can dash
                if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
                {
                    // If so, set the player's velocity to dash speed in the direction of their choice
                    body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
                    // Mark the player as dashing
                    dashState = DashState.Dashing;
                }
                break;
            // If the player is dashing
            case DashState.Dashing:
                // Temporary, used to see dash state for debugging
                sprite.color = new Color(0, 1, 1, 1);
                // Update dash timer
                dashTimer += Time.deltaTime;
                // Maintain the player's velocity at dash speed 
                body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed * dashMultiplier, body.velocity.y);
                // Check if the player's dash has exceeded the duration or if they are no longer grounded
                if (dashTimer >= dashDuration || !grounded)
                {
                    // If so, set dash timer to dash cooldown
                    dashTimer = dashCooldown;
                    // Check if the player is no longer grounded
                    if (!grounded)
                    {
                        // If so, the player is now dash-jumping
                        dashJumping = true;
                    }
                    else
                    {
                        // If not, set the player's velocity to walk speed
                        body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed, body.velocity.y);
                    }
                    // Mark player as in dash cooldown
                    dashState = DashState.DashCooldown;
                }
                // Otherwise, check if the player attempting to dash and can dash
                else if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
                {
                    // If so, reset dash timer
                    dashTimer = 0;
                    // Set the player's velocity to dash speed in the direction of their choice
                    body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
                    // Mark the player as double dashing
                    dashState = DashState.DoubleDashing;
                }
                break;
            // If the player is on dash cooldown
            case DashState.DashCooldown:
                // Temporary, used to see dash state for debugging
                sprite.color = new Color(0, 0, 1, 1);
                // Reduce dash timer for cooldown
                dashTimer -= Time.deltaTime;
                // Check if dash cooldown is over
                if (dashTimer <= 0)
                {
                    // If so, reset dash timer
                    dashTimer = 0;
                    // Mark the player as ready to dash
                    dashState = DashState.Ready;
                }
                // Otherwise, check if the player is attempting to dash and can dash
                else if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
                {
                    // If so, reset dash timer
                    dashTimer = 0;
                    // Set the player's velocity to dash speed in the direction of their choice
                    body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
                    // Mark the player as double dashing
                    dashState = DashState.DoubleDashing;
                }
                break;
            // If the player is double dashing
            case DashState.DoubleDashing:
                // Temporary, used to see dash state for debugging
                sprite.color = new Color(1, 0, 0, 1);
                // Update dash timer
                dashTimer += Time.deltaTime;
                // Maintain the player's velocity at dash speed
                body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed * dashMultiplier, body.velocity.y);
                // Check if either the dash timer has exceeded the dash duration or if the player is not grounded
                if (dashTimer >= dashDuration || !grounded)
                {
                    // If so, set the dash timer to the dash cooldown
                    dashTimer = dashCooldown;
                    // Check if the player is grounded
                    if (!grounded)
                    {
                        // If not, the player is dash-jumping
                        dashJumping = true;
                    }
                    else
                    {
                        // Otherwise, set the player's velocity to walk speed
                        body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed, body.velocity.y);
                    }
                    // Mark the player as in double dash cooldown
                    dashState = DashState.DoubleDashCooldown;
                }
                break;
            // If the player is in double dash cooldown
            case DashState.DoubleDashCooldown:
                // Temporary, used to see dash state for debugging
                sprite.color = new Color(1, 0, 1, 1);
                // Reduce dash timer for cooldown
                dashTimer -= Time.deltaTime;
                // Check if the player is no longer on dash cooldown
                if (dashTimer <= 0)
                {
                    // If so, reset dash timer
                    dashTimer = 0;
                    // Mark player as ready to dash
                    dashState = DashState.Ready;
                }
                break;
        }

        // Check if the player is attempting to jump and is either grounded or has a double jump available
        if (Input.GetKeyDown(KeyCode.Space) && (grounded || doubleJumpAvailable))
        {
            // If so, set the player's y velocity to 0
            body.velocity = new Vector2(body.velocity.x, 0);
            // Add jump force to the player's y velocity
            body.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
            // Check if the player was grounded
            if (!grounded)
            {
                // If not, take away the player's double jump
                doubleJumpAvailable = false;
            }
        }
    }
}