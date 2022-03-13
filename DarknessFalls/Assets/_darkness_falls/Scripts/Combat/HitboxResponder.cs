using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Hitbox))]
public abstract class HitboxResponder : MonoBehaviour
{
    public float attackDuration;

    private Hitbox _hitbox;

    void Reset()
    {
        attackDuration = 1.0f;
    }

    void Start()
    {
        _hitbox = GetComponent<Hitbox>();
    }

    public bool Attack()
    {
        if (!_hitbox.active)
        {
            StartCoroutine(AttackCoroutine());
            return true;
        }
        return false;
    }

    public void CollisionedWith(Collider2D collider)
    {
        Hurtbox hurtbox = collider.GetComponent<Hurtbox>();
        if (hurtbox.active && ((gameObject.tag == "Player" && collider.gameObject.tag == "Enemy") || (gameObject.tag == "Enemy" && collider.gameObject.tag == "Player")))
        {
            OnHit(hurtbox);
        }
    }

    protected virtual IEnumerator AttackCoroutine()
    {
        _hitbox.SetResponder(this);
        _hitbox.active = true;  
        yield return new WaitForSeconds(attackDuration);
        _hitbox.active = false;
        _hitbox.SetResponder(null);
    }

    protected abstract void OnHit(Hurtbox hurtbox);
}
