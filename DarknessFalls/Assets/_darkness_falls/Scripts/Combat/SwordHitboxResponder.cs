using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// TO DO: ONCE ENEMIES ARE COMPLETED, MAKE THIS ATTACK STUN THEM IF NOT STUNNED, KNOCKBACK IF STUNNED

// Hitbox Responder derived class used for sword attacks
public class SwordHitboxResponder : HitboxResponder
{
    // Function called when the sword attack hits an enemy
    protected override void OnHit(Hurtbox hurtbox)
    {
        // For debug purposes, change the color of the enemy to gray
        SpriteRenderer spriteRenderer = hurtbox.GetComponentInParent<SpriteRenderer>();
        spriteRenderer.color = Color.gray;
    }
}
