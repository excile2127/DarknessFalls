using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script to visually simulate distance in background sprites
[RequireComponent(typeof(SpriteRenderer))]
public class DistantBackground : MonoBehaviour
{
    // Distance factor of the object
    // Capped between 0 and 1, with higher number corresponding to higher distance
    // A value of 0 creates a static image, a value of 1 has the background follow the camera
    public float distanceMultiplier;

    // Transform component of the main camera
    private Transform _cameraTransform;
    // Last recorded X position of the main camera
    private float _cameraLastX;

    // Initialize editor variables
    void Reset()
    {
        distanceMultiplier = 0.5f;
    }

    void Start()
    {
        // Cap distance multiplier
        if (distanceMultiplier > 1)
        {
            distanceMultiplier = 1;
        }
        else if (distanceMultiplier < 0)
        {
            distanceMultiplier = 0;
        }

        // Intialize runtime variables
        _cameraTransform = Camera.main.transform;
        _cameraLastX = _cameraTransform.position.x;
    }

    void Update()
    {
        // Check if camera has moved since last update
        if (_cameraLastX != _cameraTransform.position.x)
        {
            // Offset the background sprite by the camera's movement multiplied by the distance multiplier
            float cameraMovement = _cameraTransform.position.x - _cameraLastX;
            transform.position = new Vector3(transform.position.x + cameraMovement*distanceMultiplier,
                                                        transform.position.y,
                                                        transform.position.z);
            // Record the change in camera position
            _cameraLastX = _cameraTransform.position.x;
        }
    }
}
