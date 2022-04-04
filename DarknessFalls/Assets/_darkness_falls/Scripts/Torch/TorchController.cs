using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script to control the player's torchlight
[RequireComponent(typeof(Torch))]
public class TorchController : MonoBehaviour
{
    // Time in seconds that it will take the torch to go from max to min torchlight from passive torchlight loss
    public float torchDuration;
    // Boolean to control if the torch can change torchlight
    public bool staticTorch;

    // Reference to the torch
    private Torch _torch;
    // Actual value of torchlight lost per second from passive torch loss
    private float _baseTorchLoss;
    // Boolean of whether the player is passively losing torchlight
    private bool _losingTorchlight;

    // Initialize editor variables
    void Reset()
    {
        torchDuration = 180.0f;
        staticTorch = false;
    }

    // Add listeners for torchlight updates on enable
    void OnEnable()
    {
        Messenger<float>.AddListener(GameEvent.TORCHLIGHT_UPDATE, OnTorchlightUpdate);
    }

    // Remove listeners for torchlight updates on disable
    void OnDisable()
    {
        Messenger<float>.RemoveListener(GameEvent.TORCHLIGHT_UPDATE, OnTorchlightUpdate);
    }

    // Initialize runtime variables
    void Start()
    {
        _torch = GetComponent<Torch>();
        _baseTorchLoss = _torch.TorchlightMax / torchDuration;
        _losingTorchlight = false;
    }

    void Update()
    {
        // Check if torch is not static and the player is currently not losing torchlight
        if (!staticTorch && !_losingTorchlight)
        {
            // Start passive torchlight loss coroutine
            StartCoroutine(PassiveLoseTorchlight());
        }
    }

    // Coroutine for passive torchlight loss
    private IEnumerator PassiveLoseTorchlight()
    {
        // Mark the player as losing torchlight
        _losingTorchlight = true;
        // While the torch is not static
        while (!staticTorch)
        {
            // Reduce torchlight by the base torch loss
            _torch.Torchlight -= _baseTorchLoss;
            // Wait one second
            yield return new WaitForSeconds(1.0f);
        }
        // Once the torch has been marked as static, mark the player as not losing torchlight
        _losingTorchlight = false;
    }

    // When the torchlight update has been broadcasted, update the torchlight if the torch is not static
    void OnTorchlightUpdate(float value)
    {
        if (!staticTorch)
        {
            _torch.Torchlight += value * _baseTorchLoss;
        }
    }
}
