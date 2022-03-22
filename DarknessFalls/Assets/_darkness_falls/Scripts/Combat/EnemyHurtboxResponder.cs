using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hurtbox responder for the player
public class EnemyHurtboxResponder : HurtboxResponder
{
    // Function called when the enemy is hurt
    protected override void OnHurt(HitboxResponder hitboxResponder)
    {
        // For debug purposes
        // Debug.Log("Hit by " + hitboxResponder);
    }
}
