using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for sword attacks
public class SwordHitboxResponder : HitboxResponder
{
    // Time in seconds enemies are stunned on hit
    public float stunDuration;
    // Amount of knockback enemies take on hit when stunned
    public float knockbackForce;

    // Initialize editor variables
    protected override void HitboxResponderStart()
    {
        stunDuration = 1.0f;
        knockbackForce = 10.0f;
    }
    
    protected override void OnHit(Hurtbox hurtbox)
    {
        // Get enemy controller from hurtbox
        EnemyController controller = hurtbox.gameObject.GetComponentInParent<EnemyController>();
        // Check for the enemy controller from hurtbox
        if (controller != null)
        {
            // Store whether the enemy was already stunned
            bool wasStunned = controller.Stunned;
            // Stun the enemy
            controller.Stun(stunDuration);
            // Check if enemy was stunned
            if (wasStunned)
            {
                // Knock the enemy back
                controller.Knockback(transform.position, knockbackForce);
            }
            
        }
    }
}
