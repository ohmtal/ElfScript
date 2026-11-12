# BaseFluxElf

Compelete encapsulate of BaseElf Project into this addon. 

It require:

- ElfScript 
- [BaseFlux](https://github.com/ohmtal/BaseFlux)
    - SDL3
    - ImGui 
- SDL3 ElfScript Addon 


[Example Project](https://github.com/ohmtal/ElfScript/tree/main/BaseElf)

## Important when building:

The BaseFluxElf bindings must set before SDL3_ELFSCRIPT_SRC because of
bindings with same name like "getFrameTime". Maybe i need to check what is double
and ifdef it. SDL3_ELFSCRIPT_SRC is optional here anyway. 

```
add_executable(${PROJECT_NAME}
    ${PROJECT_SRC}
    ${ELFSCRIPT_SRC}
     # BASEFLUX_ELFSCRIPT_SRC BEFORE SDL3_ELFSCRIPT_SRC
    ${BASEFLUX_ELFSCRIPT_SRC}
    ${SDL3_ELFSCRIPT_SRC}
)
```
