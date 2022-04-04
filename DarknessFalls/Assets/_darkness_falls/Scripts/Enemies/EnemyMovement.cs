using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Abstract base class for enemy movement scripts
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(BoxCollider2D))]
public abstract class EnemyMovement : MonoBehaviour
{
    // Reference to the rigidbody component of the enemy
    protected Rigidbody2D _body;
    // Reference to the box collider component of the enemy
    protected BoxCollider2D _box;

    // Intialize runtime variables
    void Start()
    {
        _body = GetComponent<Rigidbody2D>();
        _box = GetComponent<BoxCollider2D>();

        EnemyMovementStart();
    }

    protected virtual void EnemyMovementStart(){}

    // Function called when the enemy should move
    public abstract void Move();

    // Function called when the enemy should stop moving
    public abstract void Stop();
}
