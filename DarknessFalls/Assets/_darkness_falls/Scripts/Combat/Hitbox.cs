using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hitbox : MonoBehaviour
{
    public bool active;
    public Color closedColor;
    public Color openColor;
    public Color collidingColor;
    public float transparency;

    private ColliderState _colliderState;
    private LayerMask _layerMask;
    private HitboxResponder _hitboxResponder;

    void Reset()
    {
        active = false;
        closedColor = Color.gray;
        openColor = Color.green;
        collidingColor = Color.cyan;
        transparency = 0.5f;
    }

    void Start()
    {
        _colliderState = active ? ColliderState.Open : ColliderState.Closed;
        _layerMask = 1 << 7;
    }

    void Update()
    {
        if (!active)
        {
            _colliderState = ColliderState.Closed;
        }
        else
        {
            Vector2 halfExtents = new Vector2(transform.localScale.x/2, transform.localScale.y/2);
            Collider2D[] colliders = Physics2D.OverlapBoxAll(transform.position, halfExtents, transform.eulerAngles.z, _layerMask);

            for (int i = 0; i < colliders.Length; i++)
            {
                Collider2D collider = colliders[i];
                _hitboxResponder?.CollisionedWith(collider);
            }

            _colliderState = colliders.Length > 0 ? ColliderState.Colliding : ColliderState.Open;
        }
    }

    public void SetResponder(HitboxResponder hitboxResponder)
    {
        _hitboxResponder = hitboxResponder;
    }

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
        Gizmos.DrawCube(Vector3.zero, new Vector3(transform.localScale.x, transform.localScale.y, 0));
    }
}
