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

    // Reference to the rigidbody component of the player
    private Rigidbody2D _body;
    // Reference to the action controller of the player
    private PlayerActionController _actionController;
    // Boolean for whether the player is at 0 torchlight
    private bool _deathsDoor;

    // Initialize editor variables
    protected override void HurtboxResponderReset()
    {
        knockbackForce = 10.0f;
        stunDuration =  0.5f;
    }

    // Add listeners for torchlight updates on enable
    void OnEnable()
    {
        Messenger<float>.AddListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
    }

    // Remove listeners for torchlight updates on disable
    void OnDisable()
    {
        Messenger<float>.RemoveListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
    }

    // Initialize runtime variables
    protected override void HurtboxResponderStart()
    {
        _body = GetComponentInParent<Rigidbody2D>();
        _actionController = GetComponentInParent<PlayerActionController>();
    }

    // When the torchlight is changed, set the value of _deathsDoor
    void OnTorchlightChanged(float value)
    {
        _deathsDoor = value == 0;
    }

    // Function called when the player is hurt
    protected override void OnHurt(HitboxResponder hitboxResponder)
    {
        // Check if the player is at 0 torchlight
        if (_deathsDoor)
        {
            // Broadcast that the player has died
            Messenger.Broadcast(GameEvent.PLAYER_DIED);
        }
        else
        {
            // Start the stun coroutine
            StartCoroutine(Stun(hitboxResponder));
        }
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
