using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Manager for all game managers
[RequireComponent(typeof(AudioManager))]
[RequireComponent(typeof(LevelManager))]
public class Managers : MonoBehaviour
{
    // Game manager for all audio elements
    public static AudioManager Audio { get; private set; }
    // Game manager for all menu and level transitions
    public static LevelManager Level { get; private set; }

    // Sequence in which to start the game managers
    private List<IGameManager> _startSequence;

    void Awake()
    {
        // Tell Unity to not destroy this object on load
        DontDestroyOnLoad(gameObject);

        // Get references to all game managers
        Audio = GetComponent<AudioManager>();
        Level = GetComponent<LevelManager>();

        // Game managers to the start sequence
        _startSequence = new List<IGameManager>();
        _startSequence.Add(Audio);
        _startSequence.Add(Level);

        // Start the startup coroutine
        StartCoroutine(StartupManagers());
    }

    private IEnumerator StartupManagers()
    {
        // Start each game manager in the order of the start sequence
        foreach (IGameManager manager in _startSequence)
        {
            manager.Startup();
        }

        // Wait till next frame
        yield return null;

        // Check every frame if all managers are started
        int numReady = 0;
        int numModules = _startSequence.Count;
        while (numReady < numModules)
        {
            numReady = 0;
            foreach (IGameManager manager in _startSequence)
            {
                if (manager.status == ManagerStatus.Started)
                {
                    numReady++;
                }
            }
            yield return null;
        }

        // After all managers are started, load the main menu
        SceneManager.LoadScene("MainMenu");
    }
}