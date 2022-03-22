using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// TO DO: ADD STARTUP AND RECOVERY TIME

// TO DO: SEPARATE ATTACKS AND HITBOX RESPONDERS

// Hitbox responder base class, used for attacks
[RequireComponent(typeof(Hitbox))]
public class HitboxResponder : MonoBehaviour
{
    // Time in seconds the hitbox should remain active when attacking
    public float attackDuration;

    // Reference to the hitbox this attack belongs to
    private Hitbox _hitbox;
    // Reference to the active attack, if any
    private Coroutine _activeAttack;

    // Accessor for whether this attack is active
    public bool Active
    {
        get { return !(_activeAttack == null); }
    }

    // Initialize editor variables
    void Reset()
    {
        attackDuration = 1.0f;
        _activeAttack = null;
        HitboxResponderReset();
    }

    // Method called from derived class in Reset()
    protected virtual void HitboxResponderReset(){}

    // Initialize runtime variables
    void Start()
    {
        _hitbox = GetComponent<Hitbox>();
        HitboxResponderStart();
    }

    // Method called from derived class in Start()
    protected virtual void HitboxResponderStart(){}

    // Function called when the player action calls attack
    public void Attack()
    {
        // Check if there is not an active attack
        if (_activeAttack != null)
        {
            // If so, stop the attack
            StopAttack();
        }
        // Start the attack coroutine
        _activeAttack = StartCoroutine(AttackCoroutine());
    }

    // Function called to stop an attack preemptively
    public void StopAttack()
    {
        // Check if there is an active attack
        if (_activeAttack != null)
        {
            // If so, stop the attack coroutine
            StopCoroutine(_activeAttack);
            // Set the hitbox to inactive
            _hitbox.active = false;
            // Remove this class as the hitbox's responder
            _hitbox.SetResponder(null);
            // Remove the active attack coroutine reference
            _activeAttack = null;
        }
    }

    // Attack coroutine executed when Attack() is called
    protected IEnumerator AttackCoroutine()
    {
        // Set the hitbox's responder to this class
        _hitbox.SetResponder(this);
        // Set the hitbox to active
        _hitbox.active = true;
        // Wait until the attack duration has been completed
        yield return new WaitForSeconds(attackDuration);
        // If not stopped preemptively, set the hitbox to inactive
        _hitbox.active = false;
        // Remove this class as the hitbox's responder
        _hitbox.SetResponder(null);
        // Remove the active attack coroutine reference
        _activeAttack = null;
    }

    // Function called when the hitbox collides with a hurtbox
    public void CollisionedWith(Collider2D collider)
    {
        // Get the hurtbox associated with the collider
        Hurtbox hurtbox = collider.GetComponent<Hurtbox>();
        // Check if the hurtbox is active and the hitbox and hurtbox have different tags
        if (hurtbox.active && ((gameObject.tag == "Player" && collider.gameObject.tag == "Enemy") || (gameObject.tag == "Enemy" && collider.gameObject.tag == "Player")))
        {
            // If so, call the hurtbox's hurtbox responder's hurt method
            hurtbox.hurtboxResponder.Hurt(this);
            // Call OnHit()
            OnHit(hurtbox);
        }
    }

    // Function called when the hitbox hits a hurtbox successfully
    protected virtual void OnHit(Hurtbox hurtbox){}
}
