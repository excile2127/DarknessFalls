using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script for generalized platformer camera control
// Includes linear interpolation, axis locking, min and max camera positions, and offsets from target
[RequireComponent(typeof(Camera))]
public class FollowCamera : MonoBehaviour
{
    // Target the camera is following
    [SerializeField] public Transform trackingTarget;
    // Offset in the x direction from the target
    public float xOffset;
    // Offset in the y direction from the target
    public float yOffset;
    // Boolean for whether the x-axis is locked
    public bool xAxisLock;
    // Boolean for whether the y-axis is locked
    public bool yAxisLock;
    // Boolean for whether the x-axis has a minimum value
    public bool xHasMin;
    // Minimum value for the x position
    public float xMin;
    // Boolean for whether the x-axis has a maximum value
    public bool xHasMax;
    // Maximum value for the x position
    public float xMax;
    // Boolean for whether the x-axis has a minimum value
    public bool yHasMin;
    // Minimum value for the y position
    public float yMin;
    // Boolean for whether the y-axis has a maximum value
    public bool yHasMax;
    // Maximum value for the y position
    public float yMax;
    // Factor of linear interpolation;
    public float interpolationFactor;


    // Initialize editor variables
    void Reset()
    {
        xOffset = 4.8f;
        yOffset = 3.45f;
        xAxisLock = false;
        yAxisLock = true;
        xHasMin = true;
        xMin = 0;
        xHasMax = false;
        xMax = 0;
        yHasMin = false;
        yMin = 0;
        yHasMax = false;
        yMax = 0;
        interpolationFactor = 1.0f;
    }

    void Update()
    {
        // Find the x and y values for the target position the camera should move to
        float xTarget = trackingTarget.position.x + xOffset;
        float yTarget = trackingTarget.position.y + yOffset;

        // By default, do not change the x position
        float xNew = transform.position.x;
        // Check whether the x-axis is unlocked
        if (!xAxisLock)
        {
            // Linearly interpolate the new x value from its current position to the target
            xNew = Mathf.Lerp(xNew, xTarget, interpolationFactor);

            // Check if a maximum for the x-axis has been set and if it has been passed
            if (xHasMax && xNew > xMax)
            {
                // If so, set the new x position to the maximum
                xNew = xMax;
            }
            // Check if a minimum for the x-axis has been set and if it has been passed
            if (xHasMin && xNew < xMin)
            {
                // If so, set the new x position to the minimum
                xNew = xMin;
            }
        }

        // By default, do not change the y position
        float yNew = transform.position.y;
        // Check whether the y-axis is unlocked
        if (!yAxisLock)
        {
            // Linearly interpolate the new y value from its current position to the target
            yNew = Mathf.Lerp(yNew, yTarget, interpolationFactor);

            // Check if a maximum for the y-axis has been set and if it has been passed
            if (yHasMax && yNew > yMax)
            {
                // Set the new y position to the maximum
                yNew = yMax;
            }
            // Check if a minimum for the y-axis has been set and if it has been passed
            if (yHasMin && yNew < yMin)
            {
                // Set the new y position to the minimum
                yNew = yMin;
            }
        }
        // Set the camera's positions to the new x and y values
        transform.position = new Vector3(xNew, yNew, transform.position.z);
    }
}
