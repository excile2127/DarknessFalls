using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Controller for pausing the game and the pause menu
public class PauseMenuController : MonoBehaviour
{
    // Static boolean for whether the game is currently paused
    public static bool gamePaused = false;
    // Static boolean for whether the game should be pausable
    public static bool pausable = true;

    // Reference to the pause menu game object
    private GameObject _pauseMenu;

    // Initialize static variables
    void Awake()
    {
        gamePaused = false;
        pausable = true;
    }

    // Initialize runtime variables and set the pause menu to inactive
    void Start()
    {
        _pauseMenu = GameObject.FindWithTag("Pause Menu");
        if (_pauseMenu != null)
        {
            _pauseMenu.SetActive(gamePaused);
        }
    }

    void Update()
    {
        // Check to see if escape has been pressed
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            // Pause game
            PauseGame();
        }

        // Check to see if there is a pause menu
        if (_pauseMenu != null)
        {
            // Set whether the pause menu is active to if the game is paused
            _pauseMenu.SetActive(gamePaused);
        }
        // Check if the game is paused
        if (gamePaused)
        {
            // Set the time scale to 0
            Time.timeScale = 0.0f;
        }
        else
        {
            // Otherwise, set the time scale to 1
            Time.timeScale = 1.0f;
        }
    }

    public static void PauseGame()
    {
        // Check if the game is pausable
        if (pausable)
        {
            // Flip whether the game is paused
            gamePaused = !gamePaused;
        }
    }
}
