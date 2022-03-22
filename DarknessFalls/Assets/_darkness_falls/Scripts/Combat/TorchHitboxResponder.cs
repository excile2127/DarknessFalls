using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// TO DO: ONCE ENEMIES ARE COMPLETED, MAKE THIS ATTACK KILL THEM IF STUNNED, STUN AND KNOCKBACK IF NOT STUNNED

// Hitbox Responder derived class used for sword attacks
public class TorchHitboxResponder : HitboxResponder
{
    protected override void OnHit(Hurtbox hurtbox)
    {
        SpriteRenderer spriteRenderer = hurtbox.GetComponentInParent<SpriteRenderer>();
        spriteRenderer.color = Color.red;
    }
}
