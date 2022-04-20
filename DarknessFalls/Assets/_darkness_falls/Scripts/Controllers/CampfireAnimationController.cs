using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Not commented

[RequireComponent(typeof(Animator))]
public class CampfireAnimationController : MonoBehaviour
{
    public float campfireDelay;    
    private Animator _animator;

    void Reset()
    {
        campfireDelay = 0.25f;
    }

    void OnEnable()
    {
        Messenger.AddListener(GameEvent.SCENE_TRANSITION, OnSceneTransition);
    }

    void OnDisable()
    {
        Messenger.RemoveListener(GameEvent.SCENE_TRANSITION, OnSceneTransition);
    }

    void Start()
    {
        _animator = GetComponent<Animator>();
        StartCoroutine(CampfireCoroutine());
    }

    private IEnumerator CampfireCoroutine()
    {
        yield return new WaitForSeconds(campfireDelay);
        _animator.SetTrigger("light");
    }

    private void OnSceneTransition()
    {
        _animator.SetTrigger("die");
    }
}
