using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

[RequireComponent(typeof(Light2D))]
[RequireComponent(typeof(Torch))]
public class TorchRadius : MonoBehaviour
{
    public float innerMinRadius;
    public float innerMaxRadius;
    public float outerMinRadius;
    public float outerMaxRadius;
    public float torchLossDuration;

    private Light2D _pointLight;
    private Torch _torch;

    private float _curTorchlight;
    private float _previousInnerRadius;
    private float _nextInnerRadius;
    private float _previousOuterRadius;
    private float _nextOuterRadius;
    private float _interpolator;

    void Reset()
    {
        innerMinRadius = 0.0f;
        innerMaxRadius = 10.0f;
        outerMinRadius = 2.5f;
        outerMaxRadius = 12.5f;
        torchLossDuration = 0.5f;
    }

    void Start()
    {
        _pointLight = GetComponent<Light2D>();
        _torch = GetComponent<Torch>();

        _curTorchlight = _torch.Torchlight;
        _previousInnerRadius = _pointLight.pointLightInnerRadius;
        _nextInnerRadius = _pointLight.pointLightInnerRadius;
        _previousOuterRadius = _pointLight.pointLightOuterRadius;
        _nextOuterRadius = _pointLight.pointLightOuterRadius;
        _interpolator = 0.0f;
    }

    void Update()
    {
        if (_interpolator < 1.0f)
        {
            _pointLight.pointLightInnerRadius = Mathf.Lerp(_previousInnerRadius, _nextInnerRadius, _interpolator);
            _pointLight.pointLightOuterRadius = Mathf.Lerp(_previousOuterRadius, _nextOuterRadius, _interpolator);

            _interpolator += Time.deltaTime / torchLossDuration;
        }
        else if (_interpolator > 1.0f)
        {
            _previousInnerRadius = _pointLight.pointLightInnerRadius;
            _previousOuterRadius = _pointLight.pointLightOuterRadius;
            _interpolator = 1.0f;
        }
        else
        {
            _pointLight.pointLightInnerRadius = _nextInnerRadius;
            _pointLight.pointLightOuterRadius = _nextOuterRadius;
        }

        if (_curTorchlight != _torch.Torchlight)
        {
            _curTorchlight = _torch.Torchlight;
            _previousInnerRadius = _pointLight.pointLightInnerRadius;
            _nextInnerRadius = (innerMaxRadius - innerMinRadius) * _curTorchlight / _torch.TorchlightMax + innerMinRadius;
            _previousOuterRadius = _pointLight.pointLightOuterRadius;
            _nextOuterRadius = (outerMaxRadius - outerMinRadius) * _curTorchlight / _torch.TorchlightMax + outerMinRadius;
            _interpolator = 0.0f;
        }
    }
}