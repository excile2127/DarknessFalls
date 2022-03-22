using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Data structure for how much torchlight the player has remaining
// Very similar to a health point system
public class Torch : MonoBehaviour
{
    // Internal maximum of torchlight
    private float _torchlightMax = 100.0f;

    // Interal current amount of torchlight
    private float _torchlight;

    // Accessor for the maximum amount of torchlight
    public float TorchlightMax
    {
        get { return _torchlightMax; }
    }

    // Torchlight getter and setter
    public float Torchlight
    {
        get { return _torchlight; }
        set
        {   
            // Store previous amount of torchlight
            float previousTorchlight = _torchlight;
            // Set torchlight to new value
            _torchlight = value;

            // Check if new value is greater than the maximum
            if (_torchlight > _torchlightMax)
            {
                // If so, reduce torchlight to the maximum
                _torchlight = _torchlightMax;
            }
            // Otherwise, check if new value is less than zero
            else if (_torchlight < 0)
            {
                // If so, set torchlight to zero
                _torchlight = 0;
            }

            // Check if torchlight changed
            if (_torchlight != previousTorchlight)
            {
                // If so, broadcast that the torchlight has changed
                Messenger<float>.Broadcast(GameEvent.TORCHLIGHT_CHANGED, _torchlight);
            }
        }
    }

    // Before start, initialize torchlight to maximum
    void Awake()
    {
        _torchlight = _torchlightMax;
    }
}
