using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script that repeats a background image when the camera pans to the left or right via duplication and sprite movement
// Only works when the camera does not move vertically, as it is designed for a sidescoller
[RequireComponent(typeof(SpriteRenderer))]
public class RepeatedBackground : MonoBehaviour
{
    // SpriteRenderer component of the background sprite
    private SpriteRenderer bgSprite;
    // Transform component of the center background sprite
    private Transform cBgTrans;
    // Transform component of the left background sprite
    private Transform lBgTrans;
    // Transform component of the right background sprite
    private Transform rBgTrans;

    void Start()
    {
        // Initialize runtime variables
        bgSprite = GetComponent<SpriteRenderer>();
        cBgTrans = gameObject.transform;

        // Create a new copy of the background game object for the left background sprite
        GameObject tempObject = GameObject.Instantiate(gameObject);
        // Set the parent of the clone to the parent of the original
        tempObject.transform.SetParent(gameObject.transform.parent.transform);
        // Disable this script to prevent infinite recursion
        tempObject.GetComponent<RepeatedBackground>().enabled = false;
        lBgTrans = tempObject.transform;
        // Shift the position of the copy to the very left of the original background sprite
        lBgTrans.position = new Vector3(cBgTrans.position.x - bgSprite.size.x + 0.1f,
                                        cBgTrans.position.y,
                                        cBgTrans.position.z);
        // Create a new copy of the background game object for the left background sprite
        tempObject = GameObject.Instantiate(gameObject);
        // Set the parent of the clone to the parent of the original
        tempObject.transform.SetParent(gameObject.transform.parent.transform);
        // Disable this script to prevent infinite recursion
        tempObject.GetComponent<RepeatedBackground>().enabled = false;
        rBgTrans = tempObject.transform;
        // Shift the position of the copy to the very right of the original background sprite
        rBgTrans.position = new Vector3(cBgTrans.position.x + bgSprite.size.x - 0.1f,
                                        cBgTrans.position.y,
                                        cBgTrans.position.z);
    }

    void LateUpdate()
    {
        // Check if camera has moved past the boundary to the left background sprite
        if (Camera.main.transform.position.x < (cBgTrans.position.x - bgSprite.size.x/2))
        {
            // If it has, move the right background sprite to become the left sprite
            // and shift the names of each background sprite accordingly
            Transform tempBgTrans = rBgTrans;
            rBgTrans = cBgTrans;
            cBgTrans = lBgTrans;
            lBgTrans = tempBgTrans;
            lBgTrans.position = new Vector3(cBgTrans.position.x - bgSprite.size.x + 0.1f,
                                            cBgTrans.position.y,
                                            cBgTrans.position.z);

        }
        // Check if camera has moved past the boundary to the right background sprite
        if (Camera.main.transform.position.x > (cBgTrans.position.x + bgSprite.size.x/2))
        {
            // If it has, move the left background sprite to become the right sprite
            // and shift the names of each background sprite accordingly
            Transform tempBgTrans = lBgTrans;
            lBgTrans = cBgTrans;
            cBgTrans = rBgTrans;
            rBgTrans = tempBgTrans;
            rBgTrans.position = new Vector3(cBgTrans.position.x + bgSprite.size.x - 0.1f,
                                            cBgTrans.position.y,
                                            cBgTrans.position.z);
        }
    }
}
