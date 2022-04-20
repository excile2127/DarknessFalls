using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

// Not commented

public class TransitionController : MonoBehaviour
{
    [SerializeField] public Button restartButton;
    [SerializeField] public Button mainMenuButton;
    [SerializeField] public Button exitButton;

    void Start()
    {
        if (restartButton != null)
        {
            restartButton.onClick.AddListener(Managers.Level.LoadFirstLevel);
        }
        if (mainMenuButton != null)
        {
            mainMenuButton.onClick.AddListener(() => Managers.Level.LoadMenu("MainMenu"));
        }
        if (exitButton != null)
        {
            exitButton.onClick.AddListener(Managers.Level.ExitGame);
        }

        string sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "MainMenu")
        {
            Managers.Audio.PlayMainMenuMusic();
        }
        else if(sceneName == "GameOver")
        {
            Managers.Audio.PlayGameOverMusic();
        }
        else if(sceneName == "GameWon")
        {
            Managers.Audio.PlayGameWonMusic();
        }
        else
        {
            Managers.Audio.PlayLevelMusic();
        }
    }
}
