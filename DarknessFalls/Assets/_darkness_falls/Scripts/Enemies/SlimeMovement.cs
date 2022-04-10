using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Enemy movement derived class for slimes
public class SlimeMovement : EnemyMovement
{
    // Maximum distance the enemy can see
    public float visionDistance;
    // Maximum distance the enemy should turn around when approaching an obstacle
    public float turnAroundDistance;
    // How fast the enemy moves per second
    public float moveSpeed;

    // What layers the raycast should hit
    // Internally set to the pushbox and default layers
    private LayerMask _layerMask;

    // Initialize editor variables
    void Reset()
    {
        visionDistance = 7.1f;
        turnAroundDistance = 0.75f;
        moveSpeed = 2.7f;
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
        RaycastHit2D leftHit = Physics2D.Raycast(new Vector2(transform.position.x + (_box.offset.x * (transform.localScale.x < 0 ? 1 : -1)) - _box.size.x/2 - 0.1f, transform.position.y + _box.offset.y), Vector2.left, visionDistance, _layerMask);
        RaycastHit2D rightHit = Physics2D.Raycast(new Vector2(transform.position.x + (_box.offset.x * (transform.localScale.x < 0 ? 1 : -1)) + _box.size.x/2 + 0.1f, transform.position.y + _box.offset.y), Vector2.right, visionDistance, _layerMask);
        // Check if the slime can see the player on one side but is facing the other direction, or if the slime is running into an obstacle
        if ((leftHit.collider != null && leftHit.collider.gameObject.tag == "Player" && transform.localScale.x > 0)
          ||(rightHit.collider != null && rightHit.collider.gameObject.tag == "Player" && transform.localScale.x < 0)
          ||(leftHit.collider != null && leftHit.distance <= turnAroundDistance && transform.localScale.x < 0)
          ||(rightHit.collider != null && rightHit.distance <= turnAroundDistance && transform.localScale.x > 0))
        {
            // Face the opposite direction
            transform.localScale = new Vector3(transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
        }
        // Move in the direction the enemy is facing
        _body.velocity = new Vector2(moveSpeed * (transform.localScale.x > 0 ? 1 : -1), _body.velocity.y);
    }

    // Function called when the enemy should stop moving
    public override void Stop()
    {
        // Cancel all horizontal momentum
        _body.velocity = new Vector2(0, _body.velocity.y);
    }
}
