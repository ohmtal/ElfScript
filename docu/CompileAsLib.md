# Compile as Lib

by XXTH 2026-09-16

Release and Build:

- NOT WORKING:  DefineEngineFunction
- WORKING:      DefineEngineStringlyVariadicFunction / ConsoleFunction

- NOT WORKING:  Objects defined only in C like PointStorage Object
- WORKING:      Objects with a header like Array 

Linker removes nearly all bindings ! 

# Solution 

Instead of only say link ElfScript  do "$<LINK_LIBRARY:WHOLE_ARCHIVE,ElfScript>" !

``` 
target_link_libraries(${PROJECT_NAME} PRIVATE
     # # ElfScript
     "$<LINK_LIBRARY:WHOLE_ARCHIVE,ElfScript>"
)
```

Alternative on old CMake:

```
if(MSVC)
    target_link_libraries(${PROJECT_NAME} PRIVATE 
        -WHOLEARCHIVE:ElfScript
    )
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE 
        -Wl,--whole-archive ElfScript -Wl,--no-whole-archive
    )
endif()
```
