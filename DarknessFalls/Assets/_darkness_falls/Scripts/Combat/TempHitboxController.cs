using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Temporary classed used for debug purposes on enemy hitboxes
public class TempHitboxController : MonoBehaviour
{
    void Start()
    {
        Hitbox hitbox = GetComponent<Hitbox>();
        HitboxResponder hitboxResponder = GetComponent<HitboxResponder>();
        hitbox.SetResponder(hitboxResponder);
    }
}
