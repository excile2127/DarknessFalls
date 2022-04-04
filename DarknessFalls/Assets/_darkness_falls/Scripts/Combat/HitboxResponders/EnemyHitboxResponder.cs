using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for enemies
public class EnemyHitboxResponder : HitboxResponder
{
    // Amount of torchlight the player loses upon being hit by this attack
    public float torchlightDamage;

    // Initialize editor variables
    protected override void HitboxResponderReset()
    {
        torchlightDamage = 60.0f;
    }

    protected override void OnHit(Hurtbox hurtbox)
    {
        // Broadcast the player taking torchlight damage
        Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, -torchlightDamage);
    }
}
