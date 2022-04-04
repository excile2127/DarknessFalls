using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// ADD DEATH TRANSITION

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

    // Reference to the transform component of the player
    private Transform _playerTransform;

    // Initialize editor variables
    void Reset()
    {
        xHasMinBoundary = true;
        xMinBoundary = -10.0f;
        xHasMaxBoundary = false;
        xMaxBoundary = 0.0f;
        yHasMinBoundary = true;
        yMinBoundary = -10.0f;
        yHasMaxBoundary = true;
        yMaxBoundary = 20.0f;
    }

    // Initialize runtime variables
    void Start()
    {
        _playerTransform = GameObject.FindWithTag("Player").transform;
    }

    // Add listeners for player death on enable
    void OnEnable()
    {
        Messenger.AddListener(GameEvent.PLAYER_DIED, OnPlayerDeath);
    }

    // Remove listeners for player death on disable
    void OnDisable()
    {
        Messenger.RemoveListener(GameEvent.PLAYER_DIED, OnPlayerDeath);
    }

    void Update()
    {
        // Check if the player has gone out of bounds
        if ((xHasMinBoundary && _playerTransform.position.x < xMinBoundary)
         || (xHasMaxBoundary && _playerTransform.position.x > xMaxBoundary)
         || (yHasMinBoundary && _playerTransform.position.y < yMinBoundary)
         || (yHasMaxBoundary && _playerTransform.position.y > yMaxBoundary))
        {
            // Kill the player
            OnPlayerDeath();
        }
    }

    // Function called when the player has died
    private void OnPlayerDeath()
    {
        // ADD DEATH TRANSITION
        // Load the first level
        SceneManager.LoadScene("Level1");
    }
}
