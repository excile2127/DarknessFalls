using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for torch attacks
public class TorchHitboxResponder : HitboxResponder
{
    // Time in seconds enemies are stunned when hit
    public float stunDuration;
    // Amount of knockback enemies take on hit
    public float knockbackForce;

    // Initialize editor variables
    protected override void HitboxResponderStart()
    {
        stunDuration = 2.0f;
        knockbackForce = 20.0f;
    }

    protected override void OnHit(Hurtbox hurtbox)
    {
        // Get enemy controller from hurtbox
        EnemyController controller = hurtbox.gameObject.GetComponentInParent<EnemyController>();
        // Check for enemy controller from hurtbox
        if (controller != null)
        {
            // Check if enemy is not stunned
            if (!controller.Stunned)
            {
                // Stun and knockback the enemy
                controller.Stun(stunDuration);
                controller.Knockback(transform.position, knockbackForce);
            }
            else
            {
                // Otherwise, kill the enemy
                controller.Die();
            }
        }
    }
}
