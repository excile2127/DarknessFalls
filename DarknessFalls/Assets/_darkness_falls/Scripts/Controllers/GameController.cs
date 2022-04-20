using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Script that controls high level gameplay mechanics
public class GameController : MonoBehaviour
{
    // Boolean for whether there is a minimum boundary on the x axis
    public bool xHasMinBoundary;
    // Minimum boundary on the x axis
    public float xMinBoundary;
    // Boolean for whether there is a maximum boundary on the x axis
    public bool xHasMaxBoundary;
    // Maximum boundary on the x axis
    public float xMaxBoundary;
    // Boolean for whether there is a minimum boundary on the y axis
    public bool yHasMinBoundary;
    // Minimum boundary on the y axis
    public float yMinBoundary;
    // Boolean for whether there is a maximum boundary on the y axis
    public bool yHasMaxBoundary;
    // Maximum boundary on the y axis
    public float yMaxBoundary;
    // Duration of the dying animation
    public float dyingDuration;

    // Reference to the player's game object
    private GameObject _player;
    // Boolean for whether a scene transition has been triggered
    private bool _transitionTriggered;

    // Initialize editor variables
    void Reset()
    {
        xHasMinBoundary = true;
        xMinBoundary = -10.0f;
        xHasMaxBoundary = false;
        xMaxBoundary = 0.0f;
        yHasMinBoundary = true;
        yMinBoundary = -30.0f;
        yHasMaxBoundary = true;
        yMaxBoundary = 10.0f;
        dyingDuration = 2.0f;
    }

    // Initialize numEnemies in EnemyController
    void Awake()
    {
        EnemyController.numEnemies = 0;
    }

    // Initialize runtime variables
    void Start()
    {
        _player = GameObject.FindWithTag("Player");
        _transitionTriggered = false;
    }

    // Add listeners for player death and all enemies slayed on enable
    void OnEnable()
    {
        Messenger.AddListener(GameEvent.PLAYER_DIED, OnPlayerDeath);
        Messenger.AddListener(GameEvent.ALL_ENEMIES_SLAYED, OnAllEnemiesSlayed);
    }

    // Remove listeners for player death and all enemies slayed on disable
    void OnDisable()
    {
        Messenger.RemoveListener(GameEvent.PLAYER_DIED, OnPlayerDeath);
        Messenger.RemoveListener(GameEvent.ALL_ENEMIES_SLAYED, OnAllEnemiesSlayed);
    }

    void Update()
    {
        // Check if the player has gone out of bounds and that a transition hasn't been triggered
        if (((xHasMinBoundary && _player.transform.position.x < xMinBoundary)
         || (xHasMaxBoundary && _player.transform.position.x > xMaxBoundary)
         || (yHasMinBoundary && _player.transform.position.y < yMinBoundary)
         || (yHasMaxBoundary && _player.transform.position.y > yMaxBoundary))
         && !_transitionTriggered)
        {
            // Mark that a transition has been triggered
            _transitionTriggered = true;
            // Load the game over scene
            Managers.Level.LoadMenu("GameOver");
        }
    }

    // Function called when the player has died
    private void OnPlayerDeath()
    {
        // Check to see that a transition hasn't already been triggered
        if (!_transitionTriggered)
        {
            // Mark that a transition has been triggered
            _transitionTriggered = true;
            // Tell the action controller to die
            _player.GetComponent<PlayerActionController>().Die();

            // Destroy all child game objects of the player except for the torch
            foreach (Transform child in _player.transform)
            {
                if (child.gameObject.name != "Torch")
                {
                    GameObject.Destroy(child.gameObject);
                }
            }

            // Start the death coroutine
            StartCoroutine(DeathCoroutine());
        }
    }

    private IEnumerator DeathCoroutine()
    {
        // Wait until the dying duration is over
        yield return new WaitForSeconds(dyingDuration);

        // Disable the torch radius component, reducing the light of the torch to 0
        _player.GetComponentInChildren<TorchRadius>().enabled = false;

        // Load the game over scene
        Managers.Level.LoadMenu("GameOver");
    }

    private void OnAllEnemiesSlayed()
    {
        // Check to see that a transition hasn't already been triggered
        if (!_transitionTriggered)
        {
            // Mark that a transition has been triggered
            _transitionTriggered = true;
            // Load next level or game won if last level
            Managers.Level.NextLevel();
        }
    }
}
