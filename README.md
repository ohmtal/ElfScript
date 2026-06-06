# TorqueScript

👾 Now it's alive :D. 

Based on the current (2026-05-xx) Torque3D source code this is my first working version of TorqueScript without Torque3D. 
It need to be more stripped down because there are much more files than needed and on the other hand i maybe removed to much (threads/mutex).

## related links
- [Torque3D](https://github.com/TorqueGameEngines/Torque3D)
- [KorkScript embeded TorqueScript](https://github.com/jamesu/korkscript/)
- [OGE3D enhanced Torque3D 3.x](https://github.com/ohmtal/OGE3D)

# core/strings

The String Class is very nice and i like it more than std::string. So i think about separating it.
Includes outside strings:

- #include "core/util/tVector.h"
    - #include "console/engineTypes.h"
    - #include "console/engineTypeInfo.h"
    - #include "platform/platform.h"
- #include "platform/platform.h"
- #include "platform/types.h"
- #include "platform/platformAssert.h"
    - ...
- #include "console/console.h"
    - MANY
- #include "core/frameAllocator.h"
    -  #include "platform/platform.h"
- #include "core/util/tDictionary.h"
    - #include "core/util/str.h"
    - #include "core/util/hashFunction.h"
    - #include "core/dataChunker.h"
- #include "core/util/hashFunction.h"
    - #include "platform/platform.h"
    - #include "platform/types.h"
