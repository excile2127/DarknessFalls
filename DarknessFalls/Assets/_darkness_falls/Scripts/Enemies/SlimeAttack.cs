using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Enemy Attack derived class for slimes
public class SlimeAttack : EnemyAttack
{
    // How close the player must be to be in range
    public float attackRange;

    // What layers the raycast should hit
    // Internally set to the pushbox and default layers
    private LayerMask _layerMask;

    // Initialize editor variables
    void Reset()
    {
        attackRange = 0.5f;
    }

    // Initialize runtime variables
    protected override void EnemyAttackStart()
    {
        _box = GetComponent<BoxCollider2D>();
        _layerMask = LayerMask.GetMask("Pushbox") | LayerMask.GetMask("Default");
    }

    // Return if the player is within the attack range of the slime
    public override bool InRange()
    {
        // Look to the left, right, and above the enemy
        RaycastHit2D leftHit = Physics2D.Raycast(new Vector2(transform.position.x - _box.size.x/2 - 0.1f, transform.position.y), Vector2.left, attackRange, _layerMask);
        RaycastHit2D rightHit = Physics2D.Raycast(new Vector2(transform.position.x + _box.size.x/2 + 0.1f, transform.position.y), Vector2.right, attackRange, _layerMask);
        RaycastHit2D aboveHIt = Physics2D.Raycast(new Vector2(transform.position.x, transform.position.y + _box.size.y/2 + 0.1f), Vector2.up, attackRange, _layerMask);
        // Return whether the player is in the attack range
        return (leftHit.collider != null && leftHit.collider.gameObject.tag == "Player")
            || (rightHit.collider != null && rightHit.collider.gameObject.tag == "Player")
            || (aboveHIt.collider != null && aboveHIt.collider.gameObject.tag == "Player");
    }
}
