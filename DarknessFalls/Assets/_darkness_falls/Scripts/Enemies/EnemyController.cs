using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Generic script to control enemies
// Also controls enemy animations
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(EnemyMovement))]
[RequireComponent(typeof(EnemyAttack))]
public class EnemyController : MonoBehaviour
{
    // How much torchlight the player gains for slaying this enemy
    public float torchlightOnSlay;
    // Number of enemies currently in the scene
    public static int numEnemies = 0;
    // Duration of death animation
    public float deathDuration;

    // Reference to the Rigidbody2D component of this enemy
    private Rigidbody2D _body;
    // Animator component of the plater
    private Animator _animator;
    // Reference to the Enemy Movement component of this enemy
    private EnemyMovement _movement;
    // Reference to the Enemy Attack component of this enemy
    private EnemyAttack _attack;
    // Time in seconds the enemy is stunned until, if at all
    private float _stunTimer;
    // Boolean for whether the enemy is dead
    private bool _dead;

    // Accessor for whether the enemy is stunned
    public bool Stunned
    {
        get { return _stunTimer > 0; }
    }

    // Initialize runtime variables
    void Reset()
    {
        deathDuration = 0.9f;
        torchlightOnSlay = 60.0f;
    }

    // Initialize editor variables
    void Start()
    {
        numEnemies++;

        _stunTimer = 0.0f;
        _dead = false;

        _body = GetComponent<Rigidbody2D>();
        _animator = GetComponent<Animator>();
        _movement = GetComponent<EnemyMovement>();
        _attack = GetComponent<EnemyAttack>();
    }

    void Update()
    {
        // Check to see that the game isn't paused
        if (!PauseMenuController.gamePaused && !_dead)
        {
            // Set all animator bool parameters to false
            foreach (AnimatorControllerParameter parameter in _animator.parameters)
            {            
                _animator.SetBool(parameter.name, false);            
            }
            // Check if the enemy is not stunned and not attacking
            if (_stunTimer == 0 && !_attack.Active)
            {
                // Check if the enemy is in range for an attack
                if (_attack.InRange())
                {
                    // Make the enemy attack
                    _attack.Attack();
                    // Display the attack animation
                    _animator.SetBool("attack", true);
                }
                else
                {
                    // Make the enemy move
                    _movement.Move();
                    // Display the move animation
                    _animator.SetBool("move", true);
                }
            }
            else if (_stunTimer != 0)
            {   
                // Reduce the stun timer to a minimum of 0
                _stunTimer -= Time.deltaTime;
                if (_stunTimer <= 0)
                {
                    _stunTimer = 0;
                }
                // Display the stunned animation
                _animator.SetBool("stunned", true);
            }
            else
            {
                // Display the attack animation
                _animator.SetBool("attack", true);
            }
        }
    }

    // Function called by attacks to stun the enemy
    public void Stun(float duration)
    {
        // Set the stun timer to the duration of the stun
        _stunTimer = duration;
        // Cancel any movement or attacks
        _movement.Stop();
        _attack.Stop();
    }

    // Function called by attacks to knockback the enemy    
    public void Knockback(float knockbackDirection, float knockbackForce)
    {
        // Knockback the enemy in the opposite direction of the attack
        _body.velocity = new Vector2(knockbackForce * knockbackDirection, _body.velocity.y);
    }

    // Function called by attacks to kill the enemy
    public void Die()
    {
        // Broadcast the player gaining torchlight for slaying the enemy
        Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_UPDATE, torchlightOnSlay);
        // Display death animation
        _animator.SetBool("death", true);
        // Mark the enemy as dead
        _dead = true;
        // Stop any active attacks
        _attack.Stop();
        // Stop any active movement
        _movement.Stop();
        // Start the death coroutine
        StartCoroutine(DeathCoroutine());
    }

    private IEnumerator DeathCoroutine()
    {
        // Wait the death duration
        yield return new WaitForSeconds(deathDuration);
        // Decrement the number of enemies
        numEnemies--;
        // Check if no enemies are remaining
        if (numEnemies == 0)
        {
            // Broadcast that all enemies have been slayed
            Messenger.Broadcast(GameEvent.ALL_ENEMIES_SLAYED);
        }
        // Destroy this game object
        Destroy(gameObject);
    }
}
