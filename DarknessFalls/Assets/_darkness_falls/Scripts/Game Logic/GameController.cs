using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// ADD DEATH TRANSITION

// Script that controls high level gameplay mechanics
public class GameController : MonoBehaviour
{
    // Target frame rate for the game
    public int targetFrameRate;
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
    // Duration between the player dying and the game over screen
    public float deathDuration;

    // Reference to the player's game object
    private GameObject _player;

    // Initialize editor variables
    void Reset()
    {
        targetFrameRate = 61;
        xHasMinBoundary = true;
        xMinBoundary = -10.0f;
        xHasMaxBoundary = false;
        xMaxBoundary = 0.0f;
        yHasMinBoundary = true;
        yMinBoundary = -30.0f;
        yHasMaxBoundary = true;
        yMaxBoundary = 10.0f;
        dyingDuration = 3.0f;
        deathDuration = 3.0f;
    }

    // Initialize runtime variables
    void Start()
    {
        Application.targetFrameRate = targetFrameRate;
        _player = GameObject.FindWithTag("Player");
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
        if ((xHasMinBoundary && _player.transform.position.x < xMinBoundary)
         || (xHasMaxBoundary && _player.transform.position.x > xMaxBoundary)
         || (yHasMinBoundary && _player.transform.position.y < yMinBoundary)
         || (yHasMaxBoundary && _player.transform.position.y > yMaxBoundary))
        {
            // Load the first level
            SceneManager.LoadScene("Level1");
        }
    }

    // Function called when the player has died
    private void OnPlayerDeath()
    {
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

    private  IEnumerator DeathCoroutine()
    {
        // Wait until the dying duration is over
        yield return new WaitForSeconds(dyingDuration);

        // Disable the torch radius component, reducing the light of the torch to 0
        _player.GetComponentInChildren<TorchRadius>().enabled = false;

        // Wait until the death duration is over
        yield return new WaitForSeconds(deathDuration);

        // Load the first level
        SceneManager.LoadScene("Level1");
    }
}
