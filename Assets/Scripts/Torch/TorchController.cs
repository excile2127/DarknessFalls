using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Torch))]
public class TorchController : MonoBehaviour
{
    public float timeToExtinguish;
    public float doubleActionTime;
    public bool losingTorch;

    private Torch _torch;

    private bool _losingTorch;
    private float _passiveTorchLoss;
    private float _doubleActionTorchLoss;

    void Reset()
    {
        timeToExtinguish = 180.0f;
        doubleActionTime = 30.0f;
        losingTorch = true;
    }

    void OnEnable()
    {
        Messenger.AddListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
    }

    void OnDisable()
    {
        Messenger.AddListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
    }

    void Start()
    {
        _torch = GetComponent<Torch>();

        _losingTorch = false;
        _passiveTorchLoss = _torch.TorchlightMax / timeToExtinguish;
        _doubleActionTorchLoss = _torch.TorchlightMax * doubleActionTime / timeToExtinguish;

        StartCoroutine(LoseTorch());
    }

    void Update()
    {
        if (losingTorch && !_losingTorch)
        {
            StartCoroutine(LoseTorch());
        }
    }

    private IEnumerator LoseTorch()
    {
        _losingTorch = true;
        while (losingTorch)
        {
            _torch.Torchlight -= _passiveTorchLoss;
            yield return new WaitForSeconds(1.0f);
        }
        _losingTorch = false;
    }

    void OnDoubleAction()
    {
        _torch.Torchlight -= _doubleActionTorchLoss;
    }
}
