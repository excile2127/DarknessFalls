using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Simple script to create the effect that a sprite in the background is distant
// Only works with horizontal movement, as it is designed for a sidescroller
[RequireComponent(typeof(SpriteRenderer))]
public class DistantBackground : MonoBehaviour
{
    // Factor by how much to offset the camera's movement
    // A value of 1 follows the camera, values near one appear distant, and higher numbers have little effect
    public float distanceDivisor = 1.25f;

    // Transform component of the background sprite that this script is attached to
    private Transform backgroundTransform;
    // Transform component of the main camera
    private Transform cameraTransform;
    // X position of the camera in the last update
    private float cameraLastX;

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
            // If it has, offset the background sprite by the camera's movement divided by the distance divisor
            float cameraMovement = cameraTransform.position.x - cameraLastX;
            backgroundTransform.position = new Vector3(backgroundTransform.position.x + cameraMovement/distanceDivisor,
                                                        backgroundTransform.position.y,
                                                        backgroundTransform.position.z);
            cameraLastX = cameraTransform.position.x;
        }
    }
}
