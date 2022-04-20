using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

// Script to create a flickering firelight effect
[RequireComponent(typeof(Light2D))]
public class TorchFlicker : MonoBehaviour
{
    // Maximum that the intensity of the light can increase
    public float maxIntensityIncrease;
    // Maximum that the intensity of the light can decrease
    public float maxIntensityDecrease;
    // Minimum duration of a single flicker
    public float minFlickerDuration;
    // Maximum duration of a single flicker
    public float maxFlickerDuration;
    // Boolean to control whether the light should flicker
    public bool flickering;

    // Reference to the light
    private Light2D _light;
    // Base intensity of the light
    private float _baseIntensity;

    // Boolean to mark whether the light is currently flickering
    private bool _flickering;
    // Last recorded intensity of the light
    private float _lastIntensity;
    // Target intensity of the light
    private float _targetIntensity;
    // Duration of the current flicker effect
    private float _flickerDuration;
    // Interpolator for linear interpolation
    private float _interpolator;

    // Initialize editor variables
    public void Reset()
    {
        maxIntensityIncrease = 0.05f;
        maxIntensityDecrease = 0.05f;
        minFlickerDuration = 0.1f;
        maxFlickerDuration = 0.2f;
        flickering = true;
    }

    // Initialize runtime variables and the target for the first flicker effect if the light should flicker
    public void Start()
    {
        _light = GetComponent<Light2D>();
        _baseIntensity = _light.intensity;

        _flickering = false;
        if (flickering)
        {
            float rand = Random.Range(0.0f, 1.0f);
            _lastIntensity = _baseIntensity;
            _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
            _interpolator = 0.0f;
            _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
        }

        StartCoroutine(Flicker());
    }

    void Update()
    {
        // Check if the light should be flickering but isn't, and that the game isn't paused
        if (flickering && !_flickering && !PauseMenuController.gamePaused)
        {
            // Start the flicker coroutine
            StartCoroutine(Flicker());
        }
    }

    // Coroutine for flicker
    private IEnumerator Flicker()
    {
        // Mark that the light is flickering
        _flickering = true;
        // While the light should be flickering
        while (flickering)
        {
            // Linearly interpolate the intensity of the light
            _light.intensity = Mathf.Lerp(_lastIntensity, _targetIntensity, _interpolator);
            
            // Increase interpolater by the time since the last frame over the duration of the current flicker
            _interpolator +=  Time.deltaTime / _flickerDuration;
            
            // Check if the interpolator is greater than 1
            // In other words, check if the current values match the target values
            if (_interpolator > 1.0f)
            {
                // Initialize next flicker
                float rand = Random.Range(0.0f, 1.0f);
                _lastIntensity = _light.intensity;
                _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
                
                // Reset interpolator to 0
                // In other words, mark that change needs to occur
                _interpolator = 0.0f;

                // Set the duration of the next flicker
                _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
            }
            // Wait until next frame
            yield return null;
        }
        // Mark that the light is no longer flickering
        _flickering = false;
    }
}