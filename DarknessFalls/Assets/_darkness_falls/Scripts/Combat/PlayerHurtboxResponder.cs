using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHurtboxResponder : HurtboxResponder
{
    protected override void OnHurt(string torchlightDamage)
    {
        Messenger.Broadcast(GameEvent.PLAYER_HIT);
    }
}
