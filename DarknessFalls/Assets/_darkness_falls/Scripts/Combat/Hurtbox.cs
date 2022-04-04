using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Hurtbox class for collisions
[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(HurtboxResponder))]
public class Hurtbox : MonoBehaviour
{
    // Boolean for whether the hurtbox is active
    [HideInInspector] public bool active;
    // Color of the hurtbox gizmo when the hurtbox is inactive
    public Color activeColor;
    // Color of the hurtbox gizmo when the hurtbox is inactive
    public Color inactiveColor;
    // Transparency of the hurtbox gizmo
    public float transparency;
    // Reference to this hurtbox's responder
    public HurtboxResponder hurtboxResponder;

    // Reference to the box collider associated with the hurtbox
    [SerializeField] private BoxCollider2D _boxCollider;

    // Initialize editor variables
    void Reset()
    {
        active = true;
        activeColor = Color.blue;
        inactiveColor = Color.red;
        transparency = 0.5f;
    }

    // Initialize runtime variables
    void Start()
    {
        // Note: _boxCollider has to be set in the editor, since it's size is used by OnDrawGizmos
        // In the future, I could set the collider size in this script and get the box collider's reference during runtime
        hurtboxResponder = GetComponent<HurtboxResponder>();
    }

    // Draw the hurtbox gizmo with the correct color and specified transparency
    private void OnDrawGizmos()
    {
        Color tempColor = active ? activeColor : inactiveColor;
        tempColor.a = transparency;
        Gizmos.color = tempColor;
        Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
        Gizmos.DrawCube(Vector3.zero, new Vector3(1, 1, 0));
    }
}
