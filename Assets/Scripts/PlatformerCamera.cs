using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script for generalized platformer camera control
// Includes linear interpolation, axis locking, min and max camera positions, and offsets from target
[RequireComponent(typeof(Camera))]
public class PlatformerCamera : MonoBehaviour
{
    // Target the camera is following
    [SerializeField] Transform trackingTarget;

    // Speed at which the camera follows the target
    public float followSpeed = 9.6f;
    // Boolean for whether the x-axis is locked
    public bool xAxisLock = false;
    // Boolean for whether the x-axis has a maximum value
    public bool xHasMax = false;
    // Boolean for whether the x-axis has a minimum value
    public bool xHasMin = true;
    // Maximum value for the x position
    public float xMax = 0;
    // Minimum value for the x position
    public float xMin = 0;
    // Offset in the x direction from the target
    public float xOffset = 4.8f;
    // Boolean for whether the y-axis is locked
    public bool yAxisLock = true;
    // Boolean for whether the y-axis has a maximum value
    public bool yHasMax = false;
    // Boolean for whether the x-axis has a minimum value
    public bool yHasMin = false;
    // Maximum value for the y position
    public float yMax = 0;
    // Minimum value for the y position
    public float yMin = 0;
    // Offset in the y direction from the target
    public float yOffset = 3.45f;

    void Update()
    {
        // Find the x and y values for the target position the camera should move to
        float xTarget = trackingTarget.position.x + xOffset;
        float yTarget = trackingTarget.position.y + yOffset;

        // By default, do not change the x position
        float xNew = transform.position.x;
        // Check whether the x-axis is unlocked
        if(!xAxisLock)
        {
            // If it is, linearly interpolate the x position from the follow speed
            xNew = Mathf.Lerp(transform.position.x, xTarget, Time.deltaTime * followSpeed);
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
        if(!yAxisLock)
        {
            // If it is, linearly interpolate the y position from the follow speed
            yNew = Mathf.Lerp(transform.position.y, yTarget, Time.deltaTime * followSpeed);
            // Check if a maximum for the y-axis has been set and if it has been passed
            if (yHasMax && yNew > yMax)
            {
                // If so, set the new y position to the maximum
                yNew = yMax;
            }
            // Check if a minimum for the y-axis has been set and if it has been passed
            if (yHasMin && yNew < yMin)
            {
                // If so, set the new y position to the minimum
                yNew = yMin;
            }
        }
        // Set the camera's positions to the new x and y values
        transform.position = new Vector3(xNew, yNew, transform.position.z);
    }
}
