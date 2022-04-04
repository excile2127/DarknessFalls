using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Enemy movement derived class for slimes
public class SlimeMovement : EnemyMovement
{
    // Boolean for whether the enemy is facing right
    public bool facingRight;
    // Maximum distance the enemy can see
    public float visionDistance;
    // How fast the enemy moves per second
    public float moveSpeed;

    // What layers the raycast should hit
    // Internally set to the pushbox and default layers
    private LayerMask _layerMask;

    // Initialize editor variables
    void Reset()
    {
        facingRight = false;
        visionDistance = 9.6f;
        moveSpeed = 3.6f;
    }

    // Initialize editor variables
    protected override void EnemyMovementStart()
    {
        _layerMask = LayerMask.GetMask("Pushbox") | LayerMask.GetMask("Default");
    }

    // Function called when the enemy should move
    public override void Move()
    {
        // Look to the left and right of the enemy
        RaycastHit2D leftHit = Physics2D.Raycast(new Vector2(transform.position.x - _box.size.x/2 - 0.1f, transform.position.y), Vector2.left, visionDistance, _layerMask);
        RaycastHit2D rightHit = Physics2D.Raycast(new Vector2(transform.position.x + _box.size.x/2 + 0.1f, transform.position.y), Vector2.right, visionDistance, _layerMask);
        // Check if the enemy can see the player to the left
        if (leftHit.collider != null && leftHit.collider.gameObject.tag == "Player")
        {
            // Face the left
            facingRight = false;
        }
        // Otherwise, check if the enemy can see the player to the right
        else if (rightHit.collider != null && rightHit.collider.gameObject.tag == "Player")
        {
            // Face the right
            facingRight = true;
        }
        // Move in the direction the enemy is facing
        _body.velocity = new Vector2((facingRight ? 1 : -1) * moveSpeed, _body.velocity.y);
    }

    // Function called when the enemy should stop moving
    public override void Stop()
    {
        // Cancel all horizontal momentum
        _body.velocity = new Vector2(0, _body.velocity.y);
    }
}
