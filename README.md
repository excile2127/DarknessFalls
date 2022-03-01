# Darkness Falls

Darkness Falls is a small-scale, sidescrolling platformer currently in development in Unity with an anticipated completion date of mid-April 2022.

## Goal

My primary goal for Darkness Falls is to practice the fundamentals of gameplay programming. As such, I do not intend at this time for this project to become a standalone game, rather a demonstration of what I have learned thus far.

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
- [ ] Torch System
    - [ ] Lighting
        - [ ] Static Lighting
        - [ ] Script-Controlled Lighting
    - [ ] Torch Management
        - [ ] Basic Torch Management
        - [ ] Torch Gain/Loss
            - [ ] Passive Torch Loss
            - [ ] On-Hit Torch Loss
            - [ ] Double Action Torch Loss
            - [ ] On-Slay Torch Gain
- [ ] Universal Combat Mechanics
    - [ ] Hitboxes
    - [ ] Hurtboxes
    - [ ] On-Hit Reaction
- [ ] Enemies
    - [ ] Universal Enemy Template
        - [ ] Movement
        - [ ] Hitbox
        - [ ] Hurtbox
        - [ ] On-Hit Reaction
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
    - [ ] Hittable Player
        - [ ] Hitbox
        - [ ] On-Hit Reaction
            - [ ] Torch Loss
            - [ ] Death
    - [ ] Player Attacks
        - [ ] Single Swing Attack
            - [ ] Control Logic
            - [ ] Hurtbox
        - [ ] Double Swing Attack
            - [ ] Control Logic
            - [ ] Hurtbox
        - [ ] Double Dash Attack
            - [ ] Temporarily Remove Enemy Collision
            - [ ] Temporarily Remove Hitbox
            - [ ] Hurtbox
        - [ ] Double Jump Attack
            - [ ] Hurtbox
- [ ] Macro Game Logic
    - [ ] Game Loss
        - [ ] Player Death
        - [ ] Falling Off the Map
    - [ ] Game Win
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
- [ ] Main Menu Scene
    - [ ] Scene Setup
    - [ ] Scene Transition
- [ ] Level Design

## Checking Current Progress In-Game

Since the game is actively in development, it is not already built and is most easily viewed through the Unity editor. If you haven't already, install Unity Hub [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe).

To get the project folder, you'll need to clone the project. Note, that this project uses Git Large Files Support (LFS). Downloading a zip file using the green button on GitHub may not work. You must clone the project with a version of Git that has LFS. You can download GitLFS [here](https://git-lfs.github.com/).

Once you have cloned the repository, you should install the version of Unity that is listed below in the dependencies section. Then, open the project through Unity.

### Dependencies

* [GitLFS](https://git-lfs.github.com/)
* [Unity 2020.3.24f1](unityhub://2020.3.24f1/79c78de19888)

## Authors

[Andrew Moreno](https://www.linkedin.com/in/andrew-moreno/)

## Version History

* 0.1
    * Initial Commit
    * Player Movement, Camera Control, and Dynamic Backgrounds