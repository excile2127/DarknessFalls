using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Hurtbox))]
public abstract class HurtboxResponder : MonoBehaviour
{
    public float immunityDuration;

    private Hurtbox _hurtbox;

    void Reset()
    {
        immunityDuration = 1.0f;
    }

    void Start()
    {
        _hurtbox = GetComponent<Hurtbox>();
    }

    public void Hurt(string parameter)
    {
        if(_hurtbox.active)
        {
            StartCoroutine(HurtCoroutine(parameter));
        }
    }

    private IEnumerator HurtCoroutine(string parameter)
    {
        _hurtbox.active = false;
        OnHurt(parameter);
        yield return new WaitForSeconds(immunityDuration);
        _hurtbox.active = true;
    }

    protected abstract void OnHurt(string parameter);
}
