using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hitbox responder base class, used for attacks
[RequireComponent(typeof(Hitbox))]
public class HitboxResponder : MonoBehaviour
{
    // Time in seconds before the hitbox should activate after the attack has been called
    public float startupDuration;
    // Time in seconds the hitbox should remain active when attacking
    public float attackDuration;
    // Time in seconds after the hitbox is active that the attack is still active
    public float recoveryDuration;
    // X position of the hitbox of this attack
    public float hitboxX;
    // Y position of the hitbox of this attack
    public float hitboxY;
    // Rotation of the hitbox of this attack
    public float hitboxRotation;
    // Width of the hitbox of this attack
    public float hitboxWidth;
    // Height of the hitbox of this attack
    public float hitboxHeight;

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
        startupDuration = 0.2f;
        attackDuration = 0.1f;
        recoveryDuration = 0.2f;
        hitboxX = transform.localPosition.x;
        hitboxY = transform.localPosition.y;
        hitboxRotation = transform.localRotation.z;
        hitboxWidth = transform.localScale.x;
        hitboxHeight = transform.localScale.y;
        
        HitboxResponderReset();
    }

    protected virtual void HitboxResponderReset(){}

    // Initialize runtime variables
    void Start()
    {
        _activeAttack = null;
        _hitbox = GetComponent<Hitbox>();
        
        HitboxResponderStart();
    }

    protected virtual void HitboxResponderStart(){}

    // Function called when the player action script calls attack
    public void Attack()
    {
        // Check if there is not an active attack
        if (_activeAttack != null)
        {
            // Stop the attack
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
            // Stop the attack coroutine
            StopCoroutine(_activeAttack);
            // Set the hitbox to inactive
            _hitbox.active = false;
            // Remove this class as the hitbox's responder
            _hitbox.SetResponder(null);
            // Remove the active attack coroutine reference
            _activeAttack = null;
        }
    }

    protected IEnumerator AttackCoroutine()
    {
        // Set the hitbox's responder to this class
        _hitbox.SetResponder(this);
        // Wait until the startup duration has been completed
        yield return new WaitForSeconds(startupDuration);
        // Set the hitbox to the correct position, rotation, and scale
        transform.localPosition = new Vector3(hitboxX, hitboxY, transform.localPosition.z);
        transform.localRotation = Quaternion.Euler(transform.rotation.x, transform.rotation.y, hitboxRotation);
        transform.localScale = new Vector3(hitboxWidth, hitboxHeight, transform.localScale.z);
        // Set the hitbox to active
        _hitbox.active = true;
        // Wait until the attack duration has been completed
        yield return new WaitForSeconds(attackDuration);
        // If not stopped preemptively, set the hitbox to inactive
        _hitbox.active = false;
        // Wait until the recovery duration has been completed
        yield return new WaitForSeconds(recoveryDuration);
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
        if (hurtbox.active && ((gameObject.tag == "PlayerCombat" && collider.gameObject.tag == "Enemy") || (gameObject.tag == "Enemy" && collider.gameObject.tag == "PlayerCombat")))
        {
            // Call the hurtbox's hurtbox responder's hurt method
            hurtbox.hurtboxResponder.Hurt(this);
            // Call OnHit() from derived class, if any
            OnHit(hurtbox);
        }
    }

    protected virtual void OnHit(Hurtbox hurtbox){}
}
