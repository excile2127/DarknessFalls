using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script that repeats 1920x1080p sprite when the camera pans to the left or right via duplication and repositioning
// Only works when the camera does not move vertically, as it is designed for a sidescoller
[RequireComponent(typeof(SpriteRenderer))]
public class RepeatedSprites : MonoBehaviour
{
    // SpriteRenderer component of the background sprite
    private SpriteRenderer _spriteRenderer;
    // Transform component of the center background sprite
    private Transform _centerTransform;
    // Transform component of the left background sprite
    private Transform _leftTransform;
    // Transform component of the right background sprite
    private Transform _rightTransform;

    void Start()
    {
        // Initialize runtime variables
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _centerTransform = gameObject.transform;

        // Create a new parent game object to organize all copies of the background sprite
        GameObject parentObject = new GameObject(gameObject.name + " Parent");
        parentObject.transform.localPosition = Vector3.zero;
        parentObject.transform.SetParent(gameObject.transform.parent);
        // Set the parent of this object to the new parent
        transform.SetParent(parentObject.transform);
        // Create a new copy of the background game object for the left background sprite
        GameObject tempObject = GameObject.Instantiate(gameObject);
        // Set the parent of the clone to the new parent
        tempObject.transform.SetParent(parentObject.transform);
        // Disable this script to prevent infinite recursion
        tempObject.GetComponent<RepeatedSprites>().enabled = false;
        _leftTransform = tempObject.transform;
        // Shift the position of the copy to the very left of the original background sprite
        _leftTransform.position = new Vector3(_centerTransform.position.x - _spriteRenderer.size.x + 0.01f,
                                              _centerTransform.position.y,
                                              _centerTransform.position.z);
        // Create a new copy of the background game object for the left background sprite
        tempObject = GameObject.Instantiate(gameObject);
        // Set the parent of the clone to the parent of the original
        tempObject.transform.SetParent(parentObject.transform);
        // Disable this script to prevent infinite recursion
        tempObject.GetComponent<RepeatedSprites>().enabled = false;
        _rightTransform = tempObject.transform;
        // Shift the position of the copy to the very right of the original background sprite
        _rightTransform.position = new Vector3(_centerTransform.position.x + _spriteRenderer.size.x - 0.01f,
                                               _centerTransform.position.y,
                                               _centerTransform.position.z);
    }

    void Update()
    {
        // Check if camera has moved past the boundary to the left background sprite
        if (Camera.main.transform.position.x < (_centerTransform.position.x - _spriteRenderer.size.x/2))
        {
            // Move the right background sprite to become the left sprite and shift the names of each background sprite accordingly
            Transform tempBgTrans = _rightTransform;
            _rightTransform = _centerTransform;
            _centerTransform = _leftTransform;
            _leftTransform = tempBgTrans;
            _leftTransform.position = new Vector3(_centerTransform.position.x - _spriteRenderer.size.x + 0.01f,
                                                 _centerTransform.position.y,
                                                 _centerTransform.position.z);

        }
        // Check if camera has moved past the boundary to the right background sprite
        if (Camera.main.transform.position.x > (_centerTransform.position.x + _spriteRenderer.size.x/2))
        {
            // Move the left background sprite to become the right sprite and shift the names of each background sprite accordingly
            Transform tempBgTrans = _leftTransform;
            _leftTransform = _centerTransform;
            _centerTransform = _rightTransform;
            _rightTransform = tempBgTrans;
            _rightTransform.position = new Vector3(_centerTransform.position.x + _spriteRenderer.size.x - 0.01f,
                                                   _centerTransform.position.y,
                                                   _centerTransform.position.z);
        }
    }
}