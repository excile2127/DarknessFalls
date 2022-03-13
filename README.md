# Darkness Falls

Darkness Falls is a small-scale, sidescrolling platformer currently in development in Unity with an anticipated alpha release date of mid-April 2022.

## Description

Darkness Falls is my capstone project for my Bachelor's degree in Computer Science at Montana Tech. As such, I don't intend for it to be a full-scale game at this time, but rather a demonstration of my knowledge of game development.

My goal is to implement core aspects of side-scrolling platformers with a unique twist: having a single source of light, the player's torch, that replaces a health bar or some other similar system. At the start of a level, the torch will be bright and illuminate most of the screen. Slowly over time, the torch's light will fade. Furthermore, taking a hit, falling off of platforms, and using special skills with expediate this loss of light. However, slaying enemies will bolster the torch to allow the player to continue on.

Art Assets are being developed by my friend, Zachary McDonnell, and will be finished and implemented into the game towards the end of alpha in April 2022. As such, all sprites will be temporary and animations not implemented until then.

## Current Progress

### Roadmap

- [x] Player Movement
    - [x] Walking
    - [x] Dashing
        - [x] Normal Dashing
        - [x] Double Dashing
    - [x] Jumping
        - [x] Normal Jumping
        - [x] Double Jumping
    - [x] Dash-Jumping
- [x] Camera Control
    - [x] Follow Camera
    - [x] Camera Offset and Boundaries
    - [x] Linear Interpolation
    - [x] Axis Locking
- [x] Dynamic Backgrounds
    - [x] Repeated Backgrounds
    - [x] Distant Backgrounds
- [x] Torch System
    - [x] Lighting
        - [x] Static Lighting
        - [x] Script-Controlled Lighting
    - [x] Torch Management
        - [x] Basic Torch Management
        - [x] Torch Gain/Loss
            - [x] Passive Torch Loss
            - [x] On-Hit Torch Loss
            - [x] Double Action Torch Loss
            - [x] On-Slay Torch Gain
- [x] Universal Combat Mechanics
    - [x] Hitboxes
    - [x] Hitbox Responders
    - [x] Hurtboxes
    - [x] Hurtbox Responders
- [ ] Enemies
    - [ ] Universal Enemy Template
        - [ ] Default Movement
        - [x] Default Hitbox
        - [x] Default Hurtbox
        - [ ] On-Hurt Reaction
            - [ ] Normal to Stunned
            - [ ] Stunned to Death
    - [ ] Grounded Enemy Specifics
        - [ ] Movement
        - [ ] Hitbox
        - [ ] Hurtbox
    - [ ] Flying Enemy Specifics
        - [ ] Movement
        - [ ] Hitbox
        - [ ] Hurtbox
- [ ] Player Combat Mechanics
    - [x] Hittable Player
        - [x] Hurtbox
        - [x] On-Hurt Reaction
            - [x] Torch Loss
            - [ ] Death
    - [ ] Player Attacks
        - [ ] Single Swing Attack
            - [ ] Control Logic
            - [ ] Hitbox
        - [ ] Double Swing Attack
            - [ ] Control Logic
            - [ ] Hitbox
        - [ ] Double Dash Attack
            - [ ] Temporarily Remove Enemy Collision
            - [ ] Temporarily Remove Hitbox
            - [ ] Hitbox
        - [ ] Double Jump Attack
            - [ ] Hitbox
- [ ] Macro Game Logic
    - [ ] Game Loss
        - [ ] Game Loss Detection
            - [ ] Player Death
            - [ ] Falling Off the Map
        - [ ] Handling Game Loss
            - [ ] Reset Current Scene
    - [ ] Game Wins
        - [ ] Game Win Detection
            - [ ] Reaching the End of the Level
        - [ ] Handling Game Wins
            - [ ] Victory Screen
            - [ ] Redirect to Main Menu Scene
- [ ] Main Menu Scene
    - [ ] Scene Setup
    - [ ] Scene Transition
- [ ] Animations
    - [ ] Player
        - [ ] Movement
            - [ ] Walking
            - [ ] Jumping/Falling
            - [ ] Dashing
        - [ ] Attacks
            - [ ] Single Swing
            - [ ] Double Swing
            - [ ] Double Jumping
            - [ ] Double Dashing
        - [ ] On-Hit Reaction
            - [ ] Torch Loss
            - [ ] Death
    - [ ] Enemies
        - [ ] Grounded Enemy
        - [ ] Flying Enemy
- [ ] UI
    - [ ] Torch UI
    - [ ] Dash UI
- [ ] Audio
    - [ ] Background Music
    - [ ] Player
        - [ ] Movement
            - [ ] Walking
            - [ ] Jumping/Falling
            - [ ] Dashing
        - [ ] Attacks
            - [ ] Single Swing
            - [ ] Double Swing
            - [ ] Double Jumping
            - [ ] Double Dashing
        - [ ] On-Hit Reaction
            - [ ] Torch Loss
            - [ ] Death
    - [ ] Enemies
        - [ ] Grounded Enemy
        - [ ] Flying Enemy
- [ ] Level Design

### GIFs

#### Jumping

![Jumping](READMEGIFs/jumping.gif)

#### Dashing and Dash-Jumping

![Dashing and Dash-Jumping](READMEGIFs/dashingAndDashJumping.gif)

#### Dynamic Background - Game View

![Dynamic Background - Game View](READMEGIFs/dynamicBackgroundGameView.gif)

#### Dynamic Background - Scene View

![Dynamic Background - Scene View](READMEGIFs/dynamicBackgroundSceneView.gif)

#### Passive Torchlight Loss

![Passive Torchlight Loss](READMEGIFs/passiveTorchlightLoss.gif)

#### Hitboxes, Hurtboxes, and On-Hurt Torchlight Loss

![Hitboxes, Hurtboxes, and Active Torchlight Loss](READMEGIFs/hitboxesHurtboxesAndOn-HurtTorchlighLoss.gif)

### Build Archive

[Version 0.3](https://simmer.io/@Excile2127/darkness-falls-pre-alpha-version-0-3)

### Opening the Game in the Unity Editor

First, you'll need to clone the project to get the project folder. However, this project uses Git Large Files Support (LFS). Downloading a zip file using the green button on GitHub may not work. You must clone the project with a version of Git that has LFS. You can download GitLFS [here](https://git-lfs.github.com/).

Next, open the project folder through Unity Hub with the version of Unity specified in the dependencies section. From here, you should be able run and examine the game through the Unity editor.

#### Dependencies

* [GitLFS](https://git-lfs.github.com/)
* [Unity 2020.3.24f1](https://unity3d.com/get-unity/download/archive)

## Contributers

[Andrew Moreno](https://www.linkedin.com/in/andrew-moreno/): Game Design and Development
[Zachary McDonnell](https://www.instagram.com/_zachmcdonnell_/): Art Assets (In Development)

## Version History
* 0.3
    * Universal Combat Mechanics
        * Hitboxes
        * Hitbox Responders
        * Hurtboxes
        * Hurtbox Responders
    * Player Hurtbox Responder
    * Enemy Hitbox Responder
* 0.2
    * Completion of the Torch System
        * Includes new Messenger system in both the Torch Controller and the Torch Radius scripts
    * Moved Platformer Camera script's Update to Late Update to prevent jittering
    * Changed background object clones from Distant Background to have the same parent
        * Might expand on this in the future to create a parent object for the original and clones for organization and easy manipulation
* 0.1.2
    * Script-Controlled Lighting
    * Basic Torch Management
    * Passive Torch Loss
    * Double Action Torch Loss
* 0.1.1
    * Static Lighting
    * Temporary sprites placed for Sky and Treeline
* 0.1
    * Player Movement
    * Camera Control
    * Dynamic Backgrounds
    * Basic Scene setup