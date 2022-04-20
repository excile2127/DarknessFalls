using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for sword attacks
public class SwordHitboxResponder : HitboxResponder
{
    // Time in seconds enemies are stunned on hit
    public float stunDuration;

    // Initialize editor variables
    protected override void HitboxResponderReset()
    {
        stunDuration = 1.0f;
    }
    
    protected override void OnHit(Hurtbox hurtbox)
    {
        // Get enemy controller from hurtbox
        EnemyController controller = hurtbox.gameObject.GetComponentInParent<EnemyController>();
        // Check for the enemy controller from hurtbox
        if (controller != null)
        {
            // Stun the enemy
            controller.Stun(stunDuration);   
        }
    }
}
