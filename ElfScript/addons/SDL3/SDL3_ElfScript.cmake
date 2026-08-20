 # SDL3 ElfScript

 set(SDL3_ELFSCRIPT_SRC
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_ElfScriptGlue.cpp
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_input.cpp
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_Filesystem.cpp
   ${CMAKE_CURRENT_LIST_DIR}/ConsoleTypes.cpp
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_render.cpp
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_core.cpp
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_audio.cpp

   #  NOTE: Platform stuff: you can set compile flags:
   # ELFSCRIPT_CUSTOM_PLATFORMPROCESS - overwrite all functions
   # ELFSCRIPT_CUSTOM_SHUTDOWN_FUNC - overwrite shutdown functions only
   ${CMAKE_CURRENT_LIST_DIR}/SDL3_PlatformProcess.cpp
 )

