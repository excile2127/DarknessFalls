using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Generic script to control enemies
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(EnemyMovement))]
[RequireComponent(typeof(EnemyAttack))]
public class EnemyController : MonoBehaviour
{
    // How much torchlight the player gains for slaying this enemy
    public float torchlightOnSlay;

    // Reference to the Enemy Movement component of this enemy
    private EnemyMovement _movement;
    // Reference to the Enemy Attack component of this enemy
    private EnemyAttack _attack;
    // Reference to the Rigidbody2D component of this enemy
    private Rigidbody2D _body;
    // TEMPORARY SPRITE RENDERER COMPONENT
    private SpriteRenderer _spriteRenderer;
    // Time in seconds the enemy is stunned until, if at all
    private float _stunTimer;

    // Accessor for whether the enemy is stunned
    public bool Stunned
    {
        get { return _stunTimer > 0; }
    }

    // Initialize runtime variables
    void Reset()
    {
        torchlightOnSlay = 60.0f;
    }

    // Initialize editor variables
    void Start()
    {
        _stunTimer = 0.0f;

        _movement = GetComponent<EnemyMovement>();
        _attack = GetComponent<EnemyAttack>();
        _body = GetComponent<Rigidbody2D>();
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        // Check if the enemy is not stunned and not attacking
        if (_stunTimer == 0 && !_attack.Active)
        {
            // Check if the enemy is in range for an attack
            if (_attack.InRange())
            {
                _spriteRenderer.color = Color.red;
                // Make the enemy attack
                _attack.Attack();
            }
            else
            {
                _spriteRenderer.color = Color.black;
                // Make the enemy move
                _movement.Move();
            }
        }
        else
        {   
            // Reduce the stun timer to a minimum of 0
            _stunTimer -= Time.deltaTime;
            if (_stunTimer <= 0)
            {
                _stunTimer = 0;
            }
        }
    }

    // Function called by attacks to stun the enemy
    public void Stun(float duration)
    {
        _spriteRenderer.color = Color.gray;
        // Set the stun timer to the duration of the stun
        _stunTimer = duration;
        // Cancel any movement or attacks
        _movement.Stop();
        _attack.Stop();
    }

    // Function called by attacks to knockback the enemy    
    public void Knockback(Vector3 origin, float knockbackForce)
    {
        // Find the direction to knockback the enemy
        Vector2 knockbackDirection = (transform.position.x - origin.x) < 0 ? Vector2.left : Vector2.right;
        // Knockback the enemy in the opposite direction of the attack
        _body.velocity = knockbackForce * knockbackDirection;
    }

    // Function called by attacks to kill the enemy
    public void Die()
    {
        // Broadcast the player gaining torchlight for slaying the enemy
        Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, torchlightOnSlay);
        // Destroy this game object
        Destroy(gameObject);
    }
}
