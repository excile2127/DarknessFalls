using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Player action for attacking
public class PlayerAttacking : PlayerAction
{
    // Reference to the sword attack hitbox responder
    [SerializeField] public HitboxResponder swordAttack;
    // Reference to the sword attack hurtbox responder
    [SerializeField] public HitboxResponder torchAttack;

    // Reference to the player's hitbox
    private Hitbox _hitbox;
    // Boolean for whether the player has buffered a torch attack
    private bool _bufferedAttack;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "attacking";
    }

    // Initialize runtime variables
    protected override void ActionStart()
    {
        _hitbox = GetComponentInChildren<Hitbox>();
        _bufferedAttack = false;
    }

    public override void ActionUpdate()
    {
        // Check that the player is grounded
        if (_actionController.Grounded)
        {
            // If so, check if the player is attempting to attack
            if (Input.GetKeyDown(KeyCode.J))
            {
                // If so, check if the player is not already attacking
                if (!swordAttack.Active && !torchAttack.Active)
                {
                    // If so, call sword attack
                    swordAttack.Attack();
                }
                // Otherwise, check if the player is attacking with their sword
                else if (swordAttack.Active)
                {
                    // If so, buffer a torch attack
                    _bufferedAttack = true;
                }
            }
            // Check if the player has buffered an attack and is not already attacking
            if (_bufferedAttack && !swordAttack.Active && !torchAttack.Active)
            {
                // If so, call torch attack
                torchAttack.Attack();
                // Remove the buffered torch attack
                _bufferedAttack = false;
            }
        }
    }

    public override void AfterActionUpdate()
    {
        // Mark whether the player is attacking
        _active = swordAttack.Active || torchAttack.Active;
        // If the player is attacking and is not grounded, stop attacking
        if (_active && !_actionController.Grounded)
        {
            StopAction();
        }
    }

    // Stop the current attack, if any
    public override void StopAction()
    {
        if (swordAttack.Active)
        {
            swordAttack.StopAttack();
        }
        else if (torchAttack.Active)
        {
            torchAttack.StopAttack();
        }
        // Remove any buffered attack
        _bufferedAttack = false;
        // Mark this action as inactive
        _active = false;
    }
}
