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

set(ELFSCRIPT_SRC
    ${elf_platform}
)
