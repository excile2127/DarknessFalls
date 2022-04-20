using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Not commented

[RequireComponent(typeof(SceneFader))]
public class LevelManager : MonoBehaviour, IGameManager
{
    public ManagerStatus status { get; private set; }
    public int curLevel { get; private set; }
    public int maxLevel { get; private set; }

    private SceneFader _sceneFader;

    void Start()
    {
        _sceneFader = GetComponent<SceneFader>();
    }

    public void Startup()
    {
        curLevel = 0;
        maxLevel = 1;
        status = ManagerStatus.Started;
    }

    public void LoadFirstLevel()
    {
        curLevel = 1;
        StartCoroutine(_sceneFader.FadeAndLoadScene("Level1"));
    }

    public void ExitGame()
    {
        Application.Quit();
    }

    public void LoadMenu(string menuName)
    {
        curLevel = 0;
        StartCoroutine(_sceneFader.FadeAndLoadScene(menuName));
    }

    public void RestartCurrentLevel()
    {
        if (curLevel > 0)
        {
            StartCoroutine(_sceneFader.FadeAndLoadScene($"Level{curLevel}"));
        }
        else
        {
            StartCoroutine(_sceneFader.FadeAndLoadScene("MainMenu"));
        }
    }

    public void NextLevel()
    {
        if (curLevel < maxLevel)
        {
            curLevel++;
            StartCoroutine(_sceneFader.FadeAndLoadScene($"Level{curLevel}"));
        }
        else
        {
            LoadMenu("GameWon");
        }
    }
}
