using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Player action for attacking
public class PlayerAttacking : PlayerAction
{
    // Amount of torchlight lost when double attacking
    public float torchlightOnTorchAttack;

    // Reference to the sword attack hitbox responder
    [SerializeField] public HitboxResponder swordAttack;
    // Reference to the torch attack hitbox responder
    [SerializeField] public HitboxResponder torchAttack;
    // Reference to the deaths door attack hitbox responder
    [SerializeField] public HitboxResponder deathsDoorAttack;

    public bool SwordActive
    {
        get { return swordAttack.Active; }
    }

    public bool TorchActive
    {
        get { return torchAttack.Active; }
    }

    public bool DeathsDoorActive
    {
        get { return deathsDoorAttack.Active; }
    }

    // Reference to the player's hitbox
    private Hitbox _hitbox;
    // Boolean for whether the player has buffered a torch attack
    private bool _bufferedAttack;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "attacking";
    }

    // Initialize editor variables
    protected override void ActionReset()
    {
        torchlightOnTorchAttack = -30.0f;
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
            // Check if the player is attempting to attack
            if (Input.GetKeyDown(KeyCode.J))
            {
                // Check if the player is not already attacking
                if (!swordAttack.Active && !torchAttack.Active && !deathsDoorAttack.Active)
                {
                    // Check if the player is on death's door
                    if (_actionController.DeathsDoor)
                    {
                        // Call death's door attack
                        deathsDoorAttack.Attack();
                    }
                    else
                    {
                        // Call sword attack
                        swordAttack.Attack();
                    }
                }
                // Otherwise, check if the player is attacking with their sword and is not on death's door
                else if (swordAttack.Active && !_actionController.DeathsDoor)
                {
                    // Buffer a torch attack
                    _bufferedAttack = true;
                }
            }
            // Check if the player has buffered an attack and is not already attacking
            if (_bufferedAttack && !swordAttack.Active && !torchAttack.Active)
            {
                // Check if the player is inputting in the opposite direction they are facing
                if ((Input.GetAxis("Horizontal") < 0 && transform.localScale.x > 0) || (Input.GetAxis("Horizontal") > 0 && transform.localScale.x < 0))
                {
                    // Flip the player's local scale in the x direction
                    transform.localScale = new Vector3(transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
                }
                // Call torch attack
                torchAttack.Attack();
                // Remove the buffered torch attack
                _bufferedAttack = false;
                // Broadcast to reduce the player's torchlight
                Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, torchlightOnTorchAttack);
            }
        }
    }

    public override void AfterActionUpdate()
    {
        // Mark whether the player is attacking
        _active = swordAttack.Active || torchAttack.Active || deathsDoorAttack.Active;
        // If the player is attacking and is not grounded, stop attacking
        if (_active && !_actionController.Grounded)
        {
            StopAction();
        }
    }

    // Stop the current attack, if any
    public override void StopAction()
    {
        // Stop any active attacks
        if (swordAttack.Active)
        {
            swordAttack.StopAttack();
        }
        else if (torchAttack.Active)
        {
            torchAttack.StopAttack();
        }
        else if (deathsDoorAttack.Active)
        {
            deathsDoorAttack.StopAttack();
        }
        // Remove any buffered attack
        _bufferedAttack = false;
        // Mark this action as inactive
        _active = false;
    }
}
