using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder for enemies
public class EnemyHitboxResponder : HitboxResponder
{
    // Function called when enemy hitbox hits the player's hurtbox successfully
    protected override void OnHit(Hurtbox hurtbox)
    {
        // Broadcast the torch reduction from being hurt
        Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, TorchlightUpdateValues.PLAYER_HIT);
    }
}
