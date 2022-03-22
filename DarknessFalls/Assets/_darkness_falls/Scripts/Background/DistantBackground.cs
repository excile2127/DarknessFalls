using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Simple script to create the effect that a sprite in the background is distant
// Only works with horizontal movement, as it is designed for a sidescroller
[RequireComponent(typeof(SpriteRenderer))]
public class DistantBackground : MonoBehaviour
{
    // Factor of the distance of the object
    // Capped between 0 and 1, with higher number corresponding to higher distance
    // A value of 0 creates a static image, a value of 1 has the background follow the camera
    public float distanceMultiplier;

    // Transform component of the background sprite that this script is attached to
    private Transform backgroundTransform;
    // Transform component of the main camera
    private Transform cameraTransform;
    // X position of the camera in the last update
    private float cameraLastX;

    // Initialize editor variables
    void Reset()
    {
        distanceMultiplier = 0.5f;
    }

    // Intialize runtime variables
    void Start()
    {
        backgroundTransform = gameObject.transform;
        cameraTransform = Camera.main.transform;
        cameraLastX = cameraTransform.position.x;
    }

    void Update()
    {
        // Check if camera has moved since last update
        if (cameraLastX != cameraTransform.position.x)
        {
            // If it has, offset the background sprite by the camera's movement multiplier by the distance multiplier
            float cameraMovement = cameraTransform.position.x - cameraLastX;
            backgroundTransform.position = new Vector3(backgroundTransform.position.x + cameraMovement*distanceMultiplier,
                                                        backgroundTransform.position.y,
                                                        backgroundTransform.position.z);
            cameraLastX = cameraTransform.position.x;
        }
    }
}
