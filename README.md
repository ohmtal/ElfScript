# TorqueScript

👾 Now it's alive :D. 

Based on the current (2026-05-xx) Torque3D source code this is my first working version of TorqueScript without Torque3D. 
It need to be more stripped down because there are much more files than needed and on the other hand i maybe removed to much (threads/mutex).

## Notable changes:
    - Made it standalone
    - Ripped out some stuff i dont need like Taml
    - Fixed some memory leaks :)
    - Every created Object based on SimObject is added to a GarbageCollections which is clean on shutdown.
    
---
# Example / TestBed Application using OhmFlux:
    - added math (using also Ohmflux functions)
    - added Platform functions (not complete)
    - added some classes to test Sprite/Texture/Label/Font/Audio instance ....

[Ohmflux ElfTest](https://github.com/ohmtal/OhmFlux/tree/main/ElfTest)
---

# ElfScript (canceled)

![ElfScript Logo](./ElfScript/res/logo256.png)

~~The stripdown to minimum of Torque3D's TorqueScript :)~~
I canceled it and work on the TorqueScript folder, because i had to add
so many source that the difference is not so big.

- [ElfScript](./ElfScript/)



## related links
- [Torque3D](https://github.com/TorqueGameEngines/Torque3D)
- [KorkScript embeded TorqueScript](https://github.com/jamesu/korkscript/)
- [OGE3D enhanced Torque3D 3.x](https://github.com/ohmtal/OGE3D)
