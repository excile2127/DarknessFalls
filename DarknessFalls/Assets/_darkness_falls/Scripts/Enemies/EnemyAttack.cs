using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Abstract base class for enemy attack scripts
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(BoxCollider2D))]
public abstract class EnemyAttack : MonoBehaviour
{
    // Reference to the rigidbody component of the enemy
    protected Rigidbody2D _body;
    // Reference to the box collider component of the enemy
    protected BoxCollider2D _box;
    // Reference to the hitbox responder component of the enemy
    protected HitboxResponder _hitboxResponder;

    // Accessor for whether the enemy is attacking
    public bool Active
    {
        get { return _hitboxResponder.Active; }
    }

    // Initialize runtime variables
    void Start()
    {
        _body = GetComponent<Rigidbody2D>();
        _box = GetComponent<BoxCollider2D>();
        _hitboxResponder = GetComponentInChildren<HitboxResponder>();

        EnemyAttackStart();
    }

    protected virtual void EnemyAttackStart(){}

    // Function called to see if the enemy is in range to attack
    public abstract bool InRange();

    // Function called to cause the enemy to attack
    public virtual void Attack()
    {
        // Check if the attack is not already active
        if (!_hitboxResponder.Active)
        {
            // Call attack
            _hitboxResponder.Attack();
        }
    }

    // Function called to stop the enemy's attack, if any
    public virtual void Stop()
    {
        _hitboxResponder.StopAttack();
    }
}
