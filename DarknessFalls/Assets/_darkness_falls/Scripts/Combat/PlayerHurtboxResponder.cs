using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hurtbox responder for the player
public class PlayerHurtboxResponder : HurtboxResponder
{
    // Amount of knockback force applied when hurt
    public float knockbackForce;
    // Time in seconds the player is unable take actions after being hit
    public float stunDuration;

    // Reference to the Rigidbody2D component of the player
    private Rigidbody2D _body;
    // Reference to the action controller of the player
    private PlayerActionController _actionController;

    // Initialize editor variables
    protected override void HurtboxResponderReset()
    {
        knockbackForce = 10.0f;
        stunDuration =  0.5f;
    }

    // Initialize runtime variables
    protected override void HurtboxResponderStart()
    {
        _body = GetComponentInParent<Rigidbody2D>();
        _actionController = GetComponentInParent<PlayerActionController>();
    }

    // Function called when the player is hurt
    protected override void OnHurt(HitboxResponder hitboxResponder)
    {
        // In the future, implement a check for player death when at low torch

        // Start the stun coroutine
        StartCoroutine(Stun(hitboxResponder));
    }

    // Stun coroutine called when the player is hurt
    private IEnumerator Stun(HitboxResponder hitboxResponder)
    {
        // Disallow all actions
        _actionController.SetAll(false);
        // Find the direction to knockback the player
        Vector2 knockbackDirection = (transform.position.x - hitboxResponder.transform.position.x) < 0 ? Vector2.left : Vector2.right;
        // Knockback the player in the opposite direction of the attack
        _body.velocity = knockbackForce * knockbackDirection;
        // Wait the stun duration
        yield return new WaitForSeconds(stunDuration);
        // Allow all actions
        _actionController.SetAll(true);
    }
}
