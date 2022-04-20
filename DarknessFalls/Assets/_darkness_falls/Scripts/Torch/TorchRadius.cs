using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

// Script to control the inner and outer radius of the in-game torch
[RequireComponent(typeof(Light2D))]
[RequireComponent(typeof(Torch))]
public class TorchRadius : MonoBehaviour
{
    // Minimum of the point light's inner radius
    public float innerMinRadius;
    // Maximum of the point light's inner radius
    public float innerMaxRadius;
    // Minimum of the point light's outer radius
    public float outerMinRadius;
    // Maximum of the point light's outer radius
    public float outerMaxRadius;
    // Time in seconds it takes for the point light to change radius
    public float radiusChangeDuration;

    // Reference to the point light
    private Light2D _pointLight;
    // Reference to the torch
    private Torch _torch;
    // Last recorded inner radius of the point light
    private float _lastInnerRadius;
    // Target inner radius of the point light
    private float _targetInnerRadius;
    // Last recorded outer radius of the point light
    private float _lastOuterRadius;
    // Target outer radius of the point light
    private float _targetOuterRadius;
    // Interpolater for linear interpolation
    private float _interpolator;

    // Initialize editor variables
    void Reset()
    {
        innerMinRadius = 0.0f;
        innerMaxRadius = 10.0f;
        outerMinRadius = 2.5f;
        outerMaxRadius = 12.5f;
        radiusChangeDuration = 1.0f;
    }

    // Add listeners for torchlight updates on enable
    void OnEnable()
    {
        Messenger<float>.AddListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
    }

    // Remove listeners for torchlight updates on disable
    void OnDisable()
    {
        Messenger<float>.RemoveListener(GameEvent.TORCHLIGHT_CHANGED, OnTorchlightChanged);
        _pointLight.pointLightInnerRadius = 0f;
        _pointLight.pointLightOuterRadius = 0f;
    }

    // Initialize runtime variables
    void Start()
    {
        _pointLight = GetComponent<Light2D>();
        _torch = GetComponent<Torch>();
        _lastInnerRadius = _pointLight.pointLightInnerRadius;
        _targetInnerRadius = _pointLight.pointLightInnerRadius;
        _lastOuterRadius = _pointLight.pointLightOuterRadius;
        _targetOuterRadius = _pointLight.pointLightOuterRadius;
        _interpolator = 0.0f;
    }

    // Update point light radius if needed
    void Update()
    {
        // Check if that the game isn't paused
        if (!PauseMenuController.gamePaused)
        {
            // Check if interpolator is less than 1
            // In other words, check if the target radius is not the current radius
            if (_interpolator < 1.0f)
            {
                // Linearly interpolate inner and outer radius
                _pointLight.pointLightInnerRadius = Mathf.Lerp(_lastInnerRadius, _targetInnerRadius, _interpolator);
                _pointLight.pointLightOuterRadius = Mathf.Lerp(_lastOuterRadius, _targetOuterRadius, _interpolator);

                // Update interpolator by time since last frame over the time in seconds it should take the point light to change radius
                _interpolator += Time.deltaTime / radiusChangeDuration;
            }
            // Otherwise, check if interpolator is greater than 1
            // In other words, check if the target radius has been reached
            else if (_interpolator > 1.0f)
            {
                // Set inner and outer radius to target radius
                _pointLight.pointLightInnerRadius = _targetInnerRadius;
                _pointLight.pointLightOuterRadius = _targetOuterRadius;

                // Set last inner and outer radius to current radius
                _lastInnerRadius = _pointLight.pointLightInnerRadius;
                _lastOuterRadius = _pointLight.pointLightOuterRadius;

                // Set interpolator to 1 to mark that no more change in radius is needed
                _interpolator = 1.0f;
            }
        }
    }

    // Function for when a change in torchlight has been broadcasted
    private void OnTorchlightChanged(float value)
    {
        // Set last inner and outer radius to current radius
        _lastInnerRadius = _pointLight.pointLightInnerRadius;
        _lastOuterRadius = _pointLight.pointLightOuterRadius;
        
        // Set target inner and outer radius to a value dictated by current torchlight
        _targetInnerRadius = (innerMaxRadius - innerMinRadius) * _torch.Torchlight / _torch.TorchlightMax + innerMinRadius;
        _targetOuterRadius = (outerMaxRadius - outerMinRadius) * _torch.Torchlight / _torch.TorchlightMax + outerMinRadius;

        // Set interpolator to 0 to mark that change in radius is needed
        _interpolator = 0.0f;
    }
}