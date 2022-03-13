using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHitboxResponder : HitboxResponder
{
    protected override void OnHit(Hurtbox hurtbox)
    {
        hurtbox.hurtboxResponder.Hurt("");
    }
}
