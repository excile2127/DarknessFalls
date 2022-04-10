using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hurtbox responder base class
[RequireComponent(typeof(Hurtbox))]
public class HurtboxResponder : MonoBehaviour
{
    // How long the hurtbox should be inactive after being hurt
    public float immunityDuration;

    // Reference to the this responder's hurtbox
    private Hurtbox _hurtbox;

    // Initialize editor variables
    void Reset()
    {
        immunityDuration = 1.0f;

        HurtboxResponderReset();
    }

    protected virtual void HurtboxResponderReset(){}

    // Initialize runtime variables
    void Start()
    {
        _hurtbox = GetComponent<Hurtbox>();

        HurtboxResponderStart();
    }

    protected virtual void HurtboxResponderStart(){}

    // Function called when a hitbox successfully hits the hurtbox
    public void Hurt(HitboxResponder hitboxResponder)
    {
        // Double check the hurtbox is active
        if(_hurtbox.active)
        {
            // Call the hurt coroutine
            StartCoroutine(HurtCoroutine(hitboxResponder));
        }
    }

    private IEnumerator HurtCoroutine(HitboxResponder hitboxResponder)
    {
        // Set the hurtbox to inactive
        _hurtbox.active = false;
        // Call OnHurt from the derived class, if any
        OnHurt(hitboxResponder);
        // Wait until the immunity duration has ended
        yield return new WaitForSeconds(immunityDuration);
        // Set the hurtbox to active
        _hurtbox.active = true;
    }

    protected virtual void OnHurt(HitboxResponder hitboxResponder){}
}
