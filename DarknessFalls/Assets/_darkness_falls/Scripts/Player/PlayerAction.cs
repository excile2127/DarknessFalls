using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Base class for player action scripts
[RequireComponent(typeof(PlayerActionController))]
public abstract class PlayerAction : MonoBehaviour
{
    // Boolean for whether the player can take this action
    [HideInInspector] public bool allowed;

    // Reference to player's action controller
    protected PlayerActionController _actionController;
    // Reference to the Rigidbody component of the player
    protected Rigidbody2D _body;
    // Reference to the Box collider component of the player
    protected BoxCollider2D _box;

    // Name of this action
    protected string _actionName = "default";
    // Boolean for whether the player is taking this action
    protected bool _active = false;

    // Accessor for _actionName
    public string ActionName
    {
        get { return _actionName; }
    }
    // Accessor for _active
    public bool Active
    {
        get { return _active; }
    }

    // Initialize editor variables
    void Reset()
    {
        allowed = true;

        ActionReset();
    }

    protected virtual void ActionStart(){}

    // Initialize runtime variables
    void Start()
    {
        _actionController = GetComponent<PlayerActionController>();
        _body = GetComponent<Rigidbody2D>();
        _box = GetComponent<BoxCollider2D>();

        ActionStart();
    }
    protected virtual void ActionReset(){}

    // Update() before an action can be taken, if allowed
    public virtual void BeforeActionUpdate(){}

    // Specialized update called only when the action is allowed
    public abstract void ActionUpdate();

    // Update() after an action can be taken, if allowed
    public virtual void AfterActionUpdate(){}

    // Function called to stop the action, if it can be stopped
    public virtual void StopAction(){}
}
