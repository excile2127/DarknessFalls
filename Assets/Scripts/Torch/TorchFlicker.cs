using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

[RequireComponent(typeof(Light2D))]
public class TorchFlicker : MonoBehaviour
{
    public float maxIntensityIncrease;
    public float maxIntensityDecrease;
    public float minFlickerDuration;
    public float maxFlickerDuration;
    public float maxGreenDecrease;
    public float maxGreenIncrease;
    public bool flickering;

    private Light2D _light;
    private float _baseIntensity;
    private float _baseGreen;

    private bool _flickering;
    private float _previousIntensity;
    private float _nextIntensity;
    private float _previousGreen;
    private float _nextGreen;
    private float _interpolator;
    private float _flickerDuration;

    public void Reset()
    {
        maxIntensityIncrease = 0.1f;
        maxIntensityDecrease = 0.1f;
        maxGreenDecrease = 0.125f;
        maxGreenIncrease = 0.0f;
        minFlickerDuration = 0.1f;
        maxFlickerDuration = 0.2f;
        flickering = true;
    }

    public void Start()
    {
        _light = GetComponent<Light2D>();
        _baseIntensity = _light.intensity;
        _baseGreen = _light.color.g;

        _flickering = false;

        float rand = Random.Range(0.0f, 1.0f);
        _previousIntensity = _baseIntensity;
        _nextIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
        _previousGreen = _baseGreen;
        _nextGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
        _interpolator = 0.0f;
        _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);

        StartCoroutine(Flicker());
    }

    void Update()
    {
        if (flickering && !_flickering)
        {
            StartCoroutine(Flicker());
        }
    }

    private IEnumerator Flicker()
    {
        _flickering = true;
        while (flickering)
        {
            _light.intensity = Mathf.Lerp(_previousIntensity, _nextIntensity, _interpolator);
            float newGreen = Mathf.Lerp(_previousGreen, _nextGreen, _interpolator);
            _light.color = new Color(_light.color.r, newGreen, _light.color.b);
            
            _interpolator +=  Time.deltaTime / _flickerDuration;
            
            if (_interpolator > 1.0f)
            {
                float rand = Random.Range(0.0f, 1.0f);
                _previousIntensity = _light.intensity;
                _nextIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
                _previousGreen = _light.color.g;
                _nextGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
                
                _interpolator = 0.0f;
                _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
            }
            yield return null;
        }
        _flickering = false;
    }
}