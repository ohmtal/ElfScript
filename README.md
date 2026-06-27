# ElfScript

👾 Now it's alive :D. 

Based on the Torque3D (4.x) source code this is my first working version of TorqueScript without Torque3D. 
It need to be more stripped down because there are much more files than needed and on the other hand i maybe removed to much (threads/mutex).

## Notable changes:
- 🚀 **ElfScript:** Added fastpath for static float fields setDataField which is 28 times faster than before.
- 🚀 **ElfScript:** Added #define with code preprocessor for byte code fast constant handling 
- Made it standalone
- EngineGlue for init/process/shutdown
- Ripped out some stuff i dont need like Taml
- Fixed some memory leaks :)
- Every created Object based on SimObject is added to a GarbageCollections which is clean on shutdown.
- Added auto enum binding as constants
- Added new Log functions
- Added an GarabageCollectionSet
- Fixed Emscripten and Android Build  (Android untested)
- Replaced Math with Light Version since the Types like Vector are removed

## TODO

- should remove Torque::FS/Platform::FS and replace it with more native file loading ....

---
# Example / TestBed Application using OhmFlux:

- ~~added math (using also Ohmflux functions)~~
- added Platform functions (not complete)
- added some classes to test Sprite/Texture/Label/Font/Audio instance ....

[Ohmflux ElfTest](https://github.com/ohmtal/OhmFlux/tree/main/ElfTest)

# Raylib Bindings (raylib-elfscript):

- Using the raylib commands but in three Main-Callbacks:
    - function MainInit() { return true;}
    - function MainUpdate() {}
    - function MainShutDown() {}

[raylib-elfscript](https://github.com/ohmtal/raylib-elfscript)

---

# ElfScript

The current codebase i use with the latest changes and fixes. 
Like the stuff in the TorqueScript folder but more cleanup unused Files and
Functions. 

- [ElfScript](./ElfScript/)



## related links
- [Torque3D](https://github.com/TorqueGameEngines/Torque3D)
- [KorkScript embeded TorqueScript](https://github.com/jamesu/korkscript/)
- [OGE3D enhanced Torque3D 3.x](https://github.com/ohmtal/OGE3D)
