using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(HurtboxResponder))]
public class Hurtbox : MonoBehaviour
{
    public bool active;
    public Color activeColor;
    public Color inactiveColor;
    public float transparency;

    public HurtboxResponder hurtboxResponder;

    [SerializeField]
    private BoxCollider2D _boxCollider;

    void Reset()
    {
        active = true;
        activeColor = Color.blue;
        inactiveColor = Color.red;
        transparency = 0.5f;

        _boxCollider = GetComponent<BoxCollider2D>();
    }

    void Start()
    {
        hurtboxResponder = GetComponent<HurtboxResponder>();
    }

    private void OnDrawGizmos()
    {
        Color tempColor = active ? activeColor : inactiveColor;
        tempColor.a = transparency;
        Gizmos.color = tempColor;
        Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
        Gizmos.DrawCube(Vector3.zero, new Vector3(_boxCollider.size.x * transform.lossyScale.x, _boxCollider.size.y * transform.lossyScale.y, 1));
    }
}
