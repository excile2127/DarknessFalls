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
    // Maximum positive green-shift in the color of the light
    // More green in an orange light causes it to turn more yellow
    public float maxGreenIncrease;
    // Maximum negative green-shift in the color of the light
    // Less green in an orange light causes it to turn more red
    public float maxGreenDecrease;
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
    // Base green value of the color of the light
    private float _baseGreen;

    // Boolean to mark whether the light is currently flickering
    private bool _flickering;
    // Last recorded intensity of the light
    private float _lastIntensity;
    // Target intensity of the light
    private float _targetIntensity;
    // Last recorded green value of the color of the light
    private float _lastGreen;
    // Target green value of the color of the light
    private float _targetGreen;
    // Duration of the current flicker effect
    private float _flickerDuration;
    // Interpolator for linear interpolation
    private float _interpolator;

    // Initialize editor variables
    public void Reset()
    {
        maxIntensityIncrease = 0.05f;
        maxIntensityDecrease = 0.05f;
        maxGreenDecrease = 0.0625f;
        maxGreenIncrease = 0.0625f;
        minFlickerDuration = 0.1f;
        maxFlickerDuration = 0.2f;
        flickering = true;
    }

    // Initialize runtime variables and the target for the first flicker effect if the light should flicker
    public void Start()
    {
        _light = GetComponent<Light2D>();
        _baseIntensity = _light.intensity;
        _baseGreen = _light.color.g;

        _flickering = false;
        if (flickering)
        {
            // Rand is reused between intensity and green-shift to make lower intensities correspond to red light and higher intensities correspond to yellow light
            float rand = Random.Range(0.0f, 1.0f);
            _lastIntensity = _baseIntensity;
            _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
            _lastGreen = _baseGreen;
            _targetGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
            _interpolator = 0.0f;
            _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
        }

        StartCoroutine(Flicker());
    }

    // Check if the light should be flickering but isn't
    // If so, start the flicker coroutine
    void Update()
    {
        if (flickering && !_flickering)
        {
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
            // Linearly interpolate the intensity of the light and green value of the color of the light
            _light.intensity = Mathf.Lerp(_lastIntensity, _targetIntensity, _interpolator);
            float newGreen = Mathf.Lerp(_lastGreen, _targetGreen, _interpolator);
            _light.color = new Color(_light.color.r, newGreen, _light.color.b);
            
            // Increase interpolater by the time since the last frame over the duration of the current flicker
            _interpolator +=  Time.deltaTime / _flickerDuration;
            
            // Check if the interpolator is greater than 1
            // In other words, check if the current values match the target values
            if (_interpolator > 1.0f)
            {
                // Initialize next flicker
                // Rand is reused between intensity and green-shift to make lower intensities correspond to red light and higher intensities correspond to yellow light
                float rand = Random.Range(0.0f, 1.0f);
                _lastIntensity = _light.intensity;
                _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
                _lastGreen = _light.color.g;
                _targetGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
                
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