### Build Version 0.6

#### Background Sprites

Here's a taste of what Darkness Falls is really going to look like! A layered, parallax-style background gives the world depth, despite only being 2D.

![Background Sprites](READMEGIFs/backgroundSprites.gif)

#### Slime Movement

The enemy slime now has an in-game movement animation!

![Slime Movement](READMEGIFs/slimeMovement.gif)

#### Player Death Animation (In Progress)

When the player dies, they now play their death animation (a red idle animation, for the time being) before their torch goes out.

![Player Death Animation (In Progress)](READMEGIFs/playerDeath.gif)

### Build Version 0.5

#### Idle and Walk Animations

Animations for idle and walking have been added! The rest of the art assets are currently in development, but for now, goodbye Mr. Green Box!

![Idle and Walk Animations](READMEGIFs/idleAndWalkAnimations.gif)

#### Sword Attack

The player's default attack is a swing of their sword this will stun enemie. Unlike last build, there is now an enemy to hit!

![Sword Attack](READMEGIFs/swordAttack.gif)

#### Torch Attack

If the player attacks again after their sword swing, they will lose torchlight but have a much more powerful attack. This attack can kill stunned enemies, giving the player torchlight back in the process. If the enemy is not killed, they will knocked back and stunned for a long duration. However, this can only be done if the player has some torchlight to lose...

![Torch Attack](READMEGIFs/torchAttack.gif)

#### Death's Door Attack

If the player has no torchlight remaining, they are on "death's door". They cannot double dash or double attack. However, their sword attack is replaced by another that instantly kills enemies, whether they were stunned or not.

![Death's Door Attack](READMEGIFs/deathsDoorAttack.gif)

#### Enemy Slime

The first enemy of Darkness Falls is a small slime. This enemy will seek out the player and unleash an attack in every direction. In the future, this enemy will also turn around when facing obstacles.

![Enemy Slime](READMEGIFs/enemySlime.gif)

#### Player Death and Respawn

When the player is hit on death's door or falls off the map, they die and lose the game. For now, this just restarts the level. In the future, there will be a death animation and game over screen. 

![Player Death and Respawn](READMEGIFs/playerDeathAndRespawn.gif)

### Build Version 0.4

#### Player Attacking and Enemy On-Hurt Reaction

With the new Player Action system and Player Attacking action, the player can now press "J" to attack in front of them. This will normally be a sword swing that can only stun normal enemies. However, if they buffer a second attack while they are swinging their sword, they can then swing again with fire to kill the presumably stunned enemy. The second swing will cost them some torchlight, but it should reward them some back if they manage to successfully kill an enemy. Also, the player cannot move while attacking, although it isn't shown here. At this time, enemies haven't been created yet, so the attacks just change the color of the pushbox the player is attacking.

![Player Attacking and Enemy On-Hurt Reaction](READMEGIFs/playerAttackingAndEnemyOnHurtReaction.gif)

#### Player On-Hurt Reaction

Upon being hit, the player loses some of their torchlight, becomes immune to further attacks, is prevented from taking any actions, and is knocked back in the opposite direction of the attack. There is a short duration between the player being able to move again and losing their invincibility for them to get out of any sticky situations.

![Player On-Hurt Reaction](READMEGIFs/playerOnHurtReaction.gif)

### Build Version 0.3

#### Jumping

The player can jump once off the ground and once when in the air.

![Jumping](READMEGIFs/jumping.gif)

#### Dashing

The player can dash twice when grounded, during which they are immune to enemy attacks. However, the second dash will cost the player some of their remaining torchlight. In the future, the player will be wreathed in fire when they dash a second time, which will stun normal enemies or kill stunned enemies on collision.

![Dashing](READMEGIFs/dashing.gif)

#### Dynamic Background - Game View

As the camera moves throughout the game, the background sprites move with it to simulate distance. How distant a sprite is can be individually controlled, allowing for a visually 2.5D environment.

![Dynamic Background - Game View](READMEGIFs/dynamicBackgroundGameView.gif)

#### Dynamic Background - Scene View

The scene view of the dynamic background system.

![Dynamic Background - Scene View](READMEGIFs/dynamicBackgroundSceneView.gif)

#### Dynamic Lighting

Over time, the player's torch will slowly burn out. Falling off the map, taking hits, or performing special actions will reduce their torchlight quicker. However, slaying enemies will provide torchlight back to the player. Here is an example of the player quickly losing torchlight.

![Dynamic Lighting](READMEGIFs/dynamicLighting.gif)

#### Hitboxes, Hurtboxes, and On-Hurt Torchlight Loss

In order for combat to occur, the player and enemies must have hitboxes and hurtboxes, which I made custom classes for myself. In this GIF, the player walks over a floating enemy hitbox a few times, demonstrating that they lose some torchlight and become immune to further attacks for a short period of time.

![Hitboxes, Hurtboxes, and Active Torchlight Loss](READMEGIFs/hitboxesHurtboxesAndOn-HurtTorchlighLoss.gif)