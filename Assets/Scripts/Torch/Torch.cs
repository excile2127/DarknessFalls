using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Torch : MonoBehaviour
{
    private float _torchlightMax = 100.0f;

    private float _torchlight;

    public float TorchlightMax
    {
        get { return _torchlightMax; }
    }

    public float Torchlight
    {
        get { return _torchlight; }
        set
        {
            _torchlight = value;

            if (_torchlight > _torchlightMax)
            {
                _torchlight = _torchlightMax;
            }
            else if (_torchlight < 0)
            {
                _torchlight = 0;
            }
        }
    }

    void Start()
    {
        _torchlight = _torchlightMax;
    }
}
