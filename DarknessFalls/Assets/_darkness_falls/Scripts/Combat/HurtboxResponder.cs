using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hurtbox responder base class
[RequireComponent(typeof(Hurtbox))]
public class HurtboxResponder : MonoBehaviour
{
    // How long the hurtbox should be inactive after being hurt
    public float immunityDuration;

    // Reference to the hurtbox this responder belongs to
    private Hurtbox _hurtbox;

    // Initialize editor variables
    void Reset()
    {
        immunityDuration = 1.0f;
        HurtboxResponderReset();
    }

    // Method called from the derived class in Reset()
    protected virtual void HurtboxResponderReset(){}

    // Initialize runtime variables
    void Start()
    {
        _hurtbox = GetComponent<Hurtbox>();
        HurtboxResponderStart();
    }

    // Method called from the derived class in Start()
    protected virtual void HurtboxResponderStart(){}

    // Function called when a hitbox successfully hits the hurtbox
    public void Hurt(HitboxResponder hitboxResponder)
    {
        // Double check the hurtbox is active
        if(_hurtbox.active)
        {
            // If so, call the hurt coroutine
            StartCoroutine(HurtCoroutine(hitboxResponder));
        }
    }

    // Hurt coroutine called when a hitbox successfully hits the hurtbox
    private IEnumerator HurtCoroutine(HitboxResponder hitboxResponder)
    {
        // Set the hurtbox to inactive
        _hurtbox.active = false;
        // Call OnHurt from the derived class
        OnHurt(hitboxResponder);
        // Wait until the immunity duration has ended
        yield return new WaitForSeconds(immunityDuration);
        // Set the hurtbox to active
        _hurtbox.active = true;
    }

    // Method called from the derived class upon being hurt
    protected virtual void OnHurt(HitboxResponder hitboxResponder){}
}
