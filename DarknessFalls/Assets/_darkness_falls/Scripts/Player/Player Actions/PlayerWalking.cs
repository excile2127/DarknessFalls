using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// Player action for walking
public class PlayerWalking : PlayerAction
{
    // Speed at which the player walks
    public float walkSpeed;

    // Set the action name on awake
    void Awake()
    {
        _actionName = "walking";
    }

    // Initialize editor variables
    protected override void ActionReset()
    {
        walkSpeed = 5.4f;
    }

    public override void ActionUpdate()
    {
        // Set the x velocity of the player in the direction they are inputting
        float xVelocity = Input.GetAxis("Horizontal") * walkSpeed;
        _body.velocity = new Vector2(xVelocity, _body.velocity.y);
        _active = Input.GetAxis("Horizontal") != 0;
    }
}
