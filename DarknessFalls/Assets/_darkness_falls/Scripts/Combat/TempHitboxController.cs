using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempHitboxController : MonoBehaviour
{
    void Update()
    {
        Hitbox hitbox = GetComponent<Hitbox>();
        HitboxResponder hitboxResponder = GetComponent<HitboxResponder>();
        hitbox.SetResponder(hitboxResponder);
        hitbox.active = true;
    }
}
