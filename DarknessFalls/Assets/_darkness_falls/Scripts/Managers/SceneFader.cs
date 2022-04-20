using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

// Not commented

public class SceneFader : MonoBehaviour
{
    public float fadeDuration;

    public enum FadeDirection
	{
		In,
		Out
	}

    private RawImage _fadeImage;

    void Reset()
    {
        fadeDuration = 1.0f;
    }

    void Start()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        GameObject fadeObject = GameObject.FindGameObjectWithTag("Fade Image");
        if (fadeObject != null)
        {
            _fadeImage = fadeObject.GetComponent<RawImage>();
        }
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        GameObject fadeObject = GameObject.FindGameObjectWithTag("Fade Image");
        if (fadeObject != null)
        {
            _fadeImage = fadeObject.GetComponent<RawImage>();
            StartCoroutine(Fade(FadeDirection.In));
        }
    }

    public IEnumerator FadeAndLoadScene(string scene)
    {
        // Check if the current scene is the main menu
        if (SceneManager.GetActiveScene().name == "MainMenu")
        {
            // Broadcast that a scene transition is comming
            Messenger.Broadcast(GameEvent.SCENE_TRANSITION);
        }
        // Start the fade coroutine and wait until its finished
        yield return Fade(FadeDirection.Out);
        // Load the specified scene
        SceneManager.LoadScene(scene);
    }

    private IEnumerator Fade(FadeDirection fadeDirection)
    {
        // Make the game not pausable
        PauseMenuController.pausable = false;

        float startingAlpha = (fadeDirection == FadeDirection.Out) ? 0.0f : 1.0f;
        float targetAlpha = (fadeDirection == FadeDirection.Out) ? 1.0f : 0.0f;
        float interpolator = 0.0f;

        _fadeImage.enabled = true;
        Color32 tempColor = _fadeImage.color;
        tempColor.a = (byte) (startingAlpha * 255);
        _fadeImage.color = tempColor;

        while (interpolator < 1.0f)
        {
            yield return null;

            interpolator += Time.deltaTime / fadeDuration;
            if (interpolator > 1.0f)
            {
                interpolator = 1.0f;
            }

            tempColor.a = (byte) (Mathf.Lerp(startingAlpha, targetAlpha, interpolator) * 255);
            _fadeImage.color = tempColor;
        }

        yield return null;

        if (fadeDirection == FadeDirection.In)
        {
            _fadeImage.enabled = false;
        }

        // Make the game pausable
        PauseMenuController.pausable = true;
    }
}