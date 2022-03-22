using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Class modeling a hitbox
public class Hitbox : MonoBehaviour
{
    // Boolean for whether the hitbox is active
    public bool active;
    // Color of the hitbox gizmo when the hitbox is closed
    public Color closedColor;
    // Color of the hitbox gizmo when the hitbox is open
    public Color openColor;
    // Color of the hitbox gizmo when the hitbox is colliding
    public Color collidingColor;
    // Transparency of the hitbox gizmo
    public float transparency;

    // State of the hitbox collider
    private ColliderState _colliderState;
    // What layers the hitbox should collide with
    // Internally set to the hurtbox layer
    private LayerMask _layerMask;
    // Responder called when the hitbox collides with something
    private HitboxResponder _hitboxResponder;

    // Initialize editor variables
    void Reset()
    {
        active = false;
        closedColor = Color.gray;
        openColor = Color.green;
        collidingColor = Color.cyan;
        transparency = 0.5f;
    }

    // Initialize runtime variables
    void Start()
    {
        _colliderState = active ? ColliderState.Open : ColliderState.Closed;
        _layerMask = 1 << 7;
    }

    void Update()
    {
        // Check if the hitbox is not active
        if (!active)
        {
            // If so, set the collider state to closed
            _colliderState = ColliderState.Closed;
        }
        else
        {
            // Otherwise, find all collisions with hurtboxes
            Collider2D[] colliders = Physics2D.OverlapBoxAll(transform.position, new Vector2(transform.localScale.x, transform.localScale.y), transform.eulerAngles.z, _layerMask);

            // Loop over all collisions
            for (int i = 0; i < colliders.Length; i++)
            {
                // For each collision, call the hitbox responder
                _hitboxResponder?.CollisionedWith(colliders[i]);
            }

            // If there is more than one collision, set the collider state to colliding
            // Otherwise, set the collider state to open
            _colliderState = colliders.Length > 0 ? ColliderState.Colliding : ColliderState.Open;
        }
    }

    // Setter method for _hitboxResponder
    public void SetResponder(HitboxResponder hitboxResponder)
    {
        _hitboxResponder = hitboxResponder;
    }

    // Draw the hitbox gizmo with the correct color and specified transparency
    private void OnDrawGizmos()
    {
        Color tempColor;
        switch (_colliderState)
        {
            case ColliderState.Closed:
                tempColor = closedColor;
                break;
            case ColliderState.Open:
                tempColor = openColor;
                break;
            case ColliderState.Colliding:
                tempColor = collidingColor;
                break;
            default:
                tempColor = openColor;
                break;
        }
        tempColor.a = transparency;
        Gizmos.color = tempColor;
        Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
        Gizmos.DrawCube(Vector3.zero, new Vector3(1, 1, 0));
    }
}
