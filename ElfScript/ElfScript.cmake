#  S T U B

set(elf_platform
    ${CMAKE_CURRENT_LIST_DIR}/platform/platform.h
    ${CMAKE_CURRENT_LIST_DIR}/platform/platformMemory.cpp
    ${CMAKE_CURRENT_LIST_DIR}/platform/platformMemory.h
    ${CMAKE_CURRENT_LIST_DIR}/platform/types.h
    # FIXME ${CMAKE_CURRENT_LIST_DIR}/platform/platformAssert.cpp
    ${CMAKE_CURRENT_LIST_DIR}/platform/stub/platformAssert.cpp
    ${CMAKE_CURRENT_LIST_DIR}/platform/platformAssert.h
)
set(elf_core
    ${CMAKE_CURRENT_LIST_DIR}/core/dataChunker.cpp
    ${CMAKE_CURRENT_LIST_DIR}/core/dataChunker.h
    ${CMAKE_CURRENT_LIST_DIR}/core/frameAllocator.cpp
    ${CMAKE_CURRENT_LIST_DIR}/core/frameAllocator.h
    # ----- string table
    ${CMAKE_CURRENT_LIST_DIR}/core/stringTable.cpp
    ${CMAKE_CURRENT_LIST_DIR}/core/stringTable.h
    # ----- strings
    ${CMAKE_CURRENT_LIST_DIR}/core/strings/stringFunctions.cpp
    ${CMAKE_CURRENT_LIST_DIR}/core/strings/stringFunctions.h
)


set(ELFSCRIPT_SRC
    ${elf_platform}
    ${elf_core}
)
