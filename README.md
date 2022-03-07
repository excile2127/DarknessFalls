# Darkness Falls

Darkness Falls is a small-scale, sidescrolling platformer currently in development in Unity with an anticipated completion date of mid-April 2022.

## Description

My primary goal for Darkness Falls is to practice the fundamentals of gameplay programming. As such, I do not intend at this time for this project to become a standalone game, rather a demonstration of what I have learned thus far.

Overall, I am planning on implementing many core platformer game elements, but with a small twist. Instead of having heath points or some other similar mechanism, the player will carry a torch to shed light on their environment. Over time, this torch will slowly lose brightness, and taking hits, falling off the map, or using special actions will expediate the loss of light. However, slaying enemies will provide fuel to keep going. The player loses when their torch is extinguished. Lastly, passive loss of torchlight will only put the torch to minimal light, but will not cause the torch to be extinguished.

Art assets are in development and are slated to be finished by the beginning of April 2022. Until then, I will use placeholders that I find online or create myself. Because of this, I have decided to hold off on incorporating animations until then, instead focusing on gameplay mechanics. Although this project is mostly for practice, I still would like it to look nice once it has been completed.

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

## Checking Current Progress

### Development Screenshot

![development screenshot](Assets/Sprites/currentProgress.png)

### Running the Game

Since the game is actively in development, it is not already built and is most easily viewed through the Unity editor. If you haven't already, install Unity Hub [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe).

To get the project folder, you'll need to clone the project. Note, that this project uses Git Large Files Support (LFS). Downloading a zip file using the green button on GitHub may not work. You must clone the project with a version of Git that has LFS. You can download GitLFS [here](https://git-lfs.github.com/).

Once you have cloned the repository, you should install the version of Unity that is listed below in the dependencies section. Then, open the project through Unity.

### I Just Want to See the Scripts

If you just want to see an example of my coding, scripts are located in the Assets folder under Scripts, then organized by their respective categories :P

### Dependencies

* [GitLFS](https://git-lfs.github.com/)
* [Unity 2020.3.24f1](unityhub://2020.3.24f1/79c78de19888)

## Authors

[Andrew Moreno](https://www.linkedin.com/in/andrew-moreno/)

## Version History
* 0.2
    * Completion of the Torch System
        * Includes Messenger System for both the Torch Controller and the Torch Radius Scripts
    * Moved Camera Script's Update to Late Update to prevent jittering
    * Changed background sprite clones to have the same parent
        * Might expand on this in the future to create a parent object for the original and clones
    * Miscellaneous script organization
* 0.1.2
    * Script-Controlled Lighting
    * Basic Torch Management
    * Passive Torch Loss
    * Double Action Torch Loss
    * Miscellaneous script organization
    * Miscellaneous bug fixes
* 0.1.1
    * Static Lighting
    * Temporary sprites placed for Sky and Treeline
* 0.1
    * Initial Commit
    * Player Movement, Camera Control, and Dynamic Backgrounds