using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Script to control the player's torchlight
[RequireComponent(typeof(Torch))]
public class TorchController : MonoBehaviour
{
    // Time in seconds that it will take the torch to go from max to min torchlight from passive torchlight loss
    public float torchDuration;
    // Time in seconds that will be lost from the torch duration upon the player double jumping, double dashing, or double attacking
    public float doubleActionTimeLoss;
    // Time in seconds that will be lost from the torch duration upon the player being hit
    public float playerHitTimeLoss;
    // Time in seconds that will be lost from the torch duration upon falling through/off the map
    public float playerFellTimeLoss;
    // Time in seconds that will be gain from the torch duration upon slaying an enemy
    public float enemySlayedTimeGain;
    // Boolean to control if the torch can change torchlight
    public bool staticTorch;

    // Reference to the torch
    private Torch _torch;

    // Actual value of torchlight lost per second from passive torch loss
    private float _baseTorchLoss;
    // Actual value of torchlight lost when the player double jumps, double dashes, or double attacks
    private float _doubleActionTorchLoss;
    // Actual value of torchlight lost when the player takes a hit
    private float _playerHitTorchLoss;
    // Actual value of torchlight lost when the player falls through/off the map
    private float _playerFellTorchLoss;
    // Actual value of torchlight gained when an enemy is slain
    private float _enemySlayedTorchGain;
    // Boolean of whether the player is passively losing torchlight
    private bool _losingTorchlight;

    // Initialize public variables
    void Reset()
    {
        torchDuration = 180.0f;
        doubleActionTimeLoss = 15.0f;
        playerHitTimeLoss = 30.0f;
        playerFellTimeLoss = 60.0f;
        enemySlayedTimeGain = 30.0f;
        staticTorch = false;
    }

    // Add listeners for game events via the Messenger system on enable
    void OnEnable()
    {
        Messenger.AddListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
        Messenger.AddListener(GameEvent.PLAYER_HIT, OnPlayerHit);
        Messenger.AddListener(GameEvent.PLAYER_FELL, OnPlayerFell);
        Messenger.AddListener(GameEvent.ENEMY_SLAYED, OnEnemySlayed);
    }

    // Remove game event listeners on disable
    void OnDisable()
    {
        Messenger.RemoveListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
        Messenger.RemoveListener(GameEvent.PLAYER_HIT, OnPlayerHit);
        Messenger.RemoveListener(GameEvent.PLAYER_FELL, OnPlayerFell);
        Messenger.RemoveListener(GameEvent.ENEMY_SLAYED, OnEnemySlayed);
    }

    // Initialize private variables and start passive torchlight loss if the torch is not static
    void Start()
    {
        _torch = GetComponent<Torch>();

        _baseTorchLoss = _torch.TorchlightMax / torchDuration;
        _doubleActionTorchLoss = _baseTorchLoss * doubleActionTimeLoss;
        _playerHitTorchLoss = _baseTorchLoss * playerHitTimeLoss;
        _playerFellTorchLoss = _baseTorchLoss * playerFellTimeLoss;
        _enemySlayedTorchGain = _baseTorchLoss * enemySlayedTimeGain;
        _losingTorchlight = false;

        if (!staticTorch)
        {
            StartCoroutine(PassiveLoseTorchlight());
        }
    }

    // Check if torch is not static and the player is currently not losing torchlight
    // If so, start passive torchlight loss coroutine
    void Update()
    {
        if (!staticTorch && !_losingTorchlight)
        {
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

    // When the player taking a double action has been broadcasted, lose the corresponding amount of torchlight if the torch is not static
    void OnDoubleAction()
    {
        if (!staticTorch)
        {
            _torch.Torchlight -= _doubleActionTorchLoss;
        }
    }

    // When the player being hit has been broadcasted, lose the corresponding amount of torchlight if the torch is not static
    void OnPlayerHit()
    {
        if (!staticTorch)
        {
            _torch.Torchlight -= _playerHitTorchLoss;
        }
    }

    // When the player falling has been broadcasted, lose the corresponding amount of torchlight if the torch is not static
    void OnPlayerFell()
    {
        if (!staticTorch)
        {
            _torch.Torchlight -= _playerFellTorchLoss;
        }
    }

    // When an enemy being slayed has been broadcasted, lose the corresponding amount of torchlight if the torch is not static
    void OnEnemySlayed()
    {
        if (!staticTorch)
        {
            _torch.Torchlight += _enemySlayedTorchGain;
        }
    }
}
