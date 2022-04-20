using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Not commented

public class AudioManager : MonoBehaviour, IGameManager
{
    public ManagerStatus status { get; private set; }

    [SerializeField] public AudioSource music1Source;
    [SerializeField] public AudioSource music2Source;

    [SerializeField] public string mainMenuMusic;
    [SerializeField] public string levelMusic;
    [SerializeField] public string gameWonMusic;
    [SerializeField] public string gameOverMusic;

    private AudioSource activeMusic;
    private AudioSource inactiveMusic;

    public float crossFadeRate = 1.5f;
    private bool crossFading;

    public float soundVolume
    {
        get { return AudioListener.volume; }
        set { AudioListener.volume = value; }
    }

    private float _musicVolume;
    public float musicVolume
    {
        get
        {
            return _musicVolume;
        }
        set
        {
            _musicVolume = value;

            if (music1Source != null && !crossFading)
            {
                music1Source.volume = _musicVolume;
                music2Source.volume = _musicVolume;
            }
        }
    }

    public bool soundMute
    {
        get { return AudioListener.pause; }
        set { AudioListener.pause = value; }
    }

    public bool musicMute
    {
        get
        {
            if (music1Source != null)
            {
                return music1Source.mute;
            }
            return false;
        }
        set
        {
            if (music1Source != null)
            {
                music1Source.mute = value;
                music2Source.mute = value;
            }
        }
    }

    public void Reset()
    {
        mainMenuMusic = "mainMenuMusic";
        levelMusic = "levelMusic";
        gameOverMusic = "gameOverMusic";
        gameWonMusic = "gameWonMusic";
    }

    public void Startup()
    {
        DontDestroyOnLoad(music1Source.transform.parent.gameObject);

        music1Source.ignoreListenerVolume = true;
        music2Source.ignoreListenerVolume = true;
        music1Source.ignoreListenerPause = true;
        music2Source.ignoreListenerPause = true;

        musicVolume = 0.1f;

        activeMusic = music1Source;
        inactiveMusic = music2Source;

        status = ManagerStatus.Started;
    }

    public void PlayMainMenuMusic()
    {
        PlayMusic(Resources.Load($"Music/{mainMenuMusic}") as AudioClip);
    }

    public void PlayLevelMusic()
    {
        PlayMusic(Resources.Load($"Music/{levelMusic}") as AudioClip);
    }

    public void PlayGameOverMusic()
    {
        PlayMusic(Resources.Load($"Music/{gameOverMusic}") as AudioClip);
    }

    public void PlayGameWonMusic()
    {
        PlayMusic(Resources.Load($"Music/{gameWonMusic}") as AudioClip);
    }

    private void PlayMusic(AudioClip clip)
    {
        if (crossFading) { return; }
        StartCoroutine(CrossFadeMusic(clip));
    }

    private IEnumerator CrossFadeMusic(AudioClip clip)
    {
        crossFading = true;

        inactiveMusic.clip = clip;
        inactiveMusic.volume = 0;
        inactiveMusic.Play();

        float scaledRate = crossFadeRate * musicVolume;
        while (activeMusic.volume > 0)
        {
            activeMusic.volume -= scaledRate * Time.deltaTime;
            inactiveMusic.volume += scaledRate * Time.deltaTime;

            yield return null;
        }

        AudioSource temp = activeMusic;

        activeMusic = inactiveMusic;
        activeMusic.volume = musicVolume;

        inactiveMusic = temp;
        inactiveMusic.Stop();

        crossFading = false;
    }

    public void StopMusic()
    {
        activeMusic.Stop();
        inactiveMusic.Stop();
    }
}
