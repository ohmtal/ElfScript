cmake_minimum_required(VERSION 3.10)

project(HelloConsole LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------

set(CONSOLE_SRC
    console/arrayObject.cpp
    console/arrayObject.h
    console/console.cpp
    console/consoleDoc.cpp
    console/consoleDoc.h
    console/consoleFunctions.cpp
    console/consoleFunctions.h
    console/console.h
    console/consoleInternal.cpp
    console/consoleInternal.h
    console/consoleLogger.cpp
    console/consoleLogger.h
    console/consoleObject.cpp
    console/consoleObject.h
    console/consoleParser.cpp
    console/consoleParser.h
    console/consoleTypes.cpp
    console/consoleTypes.h
    console/consoleValueStack.h
    # console/consoleXMLExport.cpp
    # console/consoleXMLExport.h
    console/debugOutputConsumer.cpp
    console/debugOutputConsumer.h
    console/dynamicTypes.cpp
    console/dynamicTypes.h
    console/engineAPI.h
    console/engineDoc.cpp
    console/engineExports.cpp
    console/engineExports.h
    console/engineFunctions.cpp
    console/engineFunctions.h
    console/engineObject.cpp
    console/engineObject.h
    console/enginePrimitives.cpp
    console/enginePrimitives.h
    console/engineStructs.cpp
    console/engineStructs.h
    console/engineTypeInfo.cpp
    console/engineTypeInfo.h
    console/engineTypes.cpp
    console/engineTypes.h
    # console/engineXMLExport.cpp
    console/fieldBrushObject.cpp
    console/fieldBrushObject.h
    console/fileSystemFunctions.cpp
    console/fixedTuple.h
    console/ICallMethod.h
    console/module.h
    # console/persistenceManager.cpp
    # console/persistenceManager.h
    console/propertyParsing.cpp
    console/propertyParsing.h
    console/returnBuffer.cpp
    console/returnBuffer.h
    console/runtimeClassRep.cpp
    console/runtimeClassRep.h
    console/runtime.h
    console/scriptFilename.cpp
    console/scriptFilename.h
    console/script.h
    console/scriptObjects.cpp
    console/scriptObjects.h
    console/simBase.h
    console/sim.cpp
    console/simDatablock.cpp
    console/simDatablock.h
    console/simDictionary.cpp
    console/simDictionary.h
    console/simEvents.cpp
    console/simEvents.h
    console/simFieldDictionary.cpp
    console/simFieldDictionary.h
    console/sim.h
    console/simManager.cpp
    console/simObject.cpp
    console/simObject.h
    console/simObjectList.cpp
    console/simObjectList.h
    # console/simObjectMemento.cpp
    # console/simObjectMemento.h
    console/simObjectRef.h
    console/simPersistID.cpp
    console/simPersistID.h
    console/simPersistSet.cpp
    console/simPersistSet.h
    console/simSerialize.cpp
    console/simSet.cpp
    console/simSet.h
    # console/SimXMLDocument.cpp
    # console/SimXMLDocument.h
    console/stringStack.cpp
    console/stringStack.h
    # console/telnetConsole.cpp
    # console/telnetConsole.h
    # console/telnetDebugger.cpp
    # console/telnetDebugger.h
    console/typeValidators.cpp
    console/typeValidators.h
    console/torquescript/astAlloc.cpp
    console/torquescript/ast.h
    console/torquescript/astNodes.cpp
    console/torquescript/bison.simple
    console/torquescript/cmdgram.cpp
    console/torquescript/CMDgram.h
    console/torquescript/CMDgram.y
    console/torquescript/CMDscan.cpp
    console/torquescript/CMDscan.l
    console/torquescript/codeBlock.cpp
    console/torquescript/codeBlock.h
    console/torquescript/compiledEval.cpp
    console/torquescript/compiler.cpp
    console/torquescript/compiler.h
    console/torquescript/evalState.cpp
    console/torquescript/evalState.h
    console/torquescript/optimizer.cpp
    console/torquescript/parser.cpp
    console/torquescript/parser.h
    console/torquescript/runtime.cpp
    console/torquescript/runtime.h


    # sim
    sim/netStringTable.cpp
    # util
    util/messaging/message.cpp
)

set(CORE_SRC
    core/bitVector.cpp
    core/iTickable.cpp
    core/virtualMountSystem.cpp
    core/util/str.h
    core/util/str.cpp
    core/util/byteBuffer.cpp

    core/util/hashFunction.cpp
    core/util/tVector.cpp
    core/util/tSignal.cpp
    core/util/tDictionary.cpp
    core/util/md5.cpp

    core/util/refBase.cpp

    core/frameAllocator.cpp
    core/util/timeClass.cpp

    core/util/journal/journal.cpp
    core/util/journal/process.cpp

    core/util/path.cpp
    core/util/uuid.cpp

    core/idGenerator.cpp
    core/volume.cpp
    core/fileObject.cpp

    core/stringTable.cpp
    core/stringTable.h

    core/stream/stream.cpp
    core/stream/fileStream.cpp

    core/strings/findMatch.cpp
    core/strings/findMatch.h
    core/strings/stringFunctions.cpp
    core/strings/stringFunctions.h
    core/strings/stringUnit.cpp
    core/strings/stringUnit.h
    core/strings/unicode.cpp
    core/strings/unicode.h

    # ------ FIXME other group:


    platform/platformFileIO.cpp
    platform/platformAssert.cpp
    platform/XXTHMemory.cpp
    platform/XXTHPlatformProcess.cpp
)
# torqueAddSourceDirectories("math" "math/util" "math/public" "math/impl")
file(GLOB MATH_SRC "math/*.cpp")
file(GLOB MATH_PUPLIC_SRC "math/impl/*.cpp")

# file(GLOB SRC_THREAD "platform/threads/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")


add_executable(HelloConsole main.cpp
    ${CONSOLE_SRC}
    ${CORE_SRC}
    # ${MATH_PUPLIC_SRC}
    # ${MATH_SRC}
    # ${SRC_THREAD}


)
target_include_directories(${PROJECT_NAME} PRIVATE "./" )
