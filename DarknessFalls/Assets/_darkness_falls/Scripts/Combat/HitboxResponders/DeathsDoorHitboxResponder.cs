using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for death's door attacks
public class DeathsDoorHitboxResponder : HitboxResponder
{
    protected override void OnHit(Hurtbox hurtbox)
    {
        // Get enemy controller from hurtbox
        EnemyController controller = hurtbox.gameObject.GetComponentInParent<EnemyController>();
        // Check for enemy controller from hurtbox
        if (controller != null)
        {
            // Kill the enemy
            controller.Die();
        }
    }
}
