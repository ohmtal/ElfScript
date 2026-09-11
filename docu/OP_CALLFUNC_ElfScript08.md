# OP_CALLFUNC

ElfScript 0.8 : Targeting OP_CALLFUNC to optimize. 

New  attempt after my first with cache did not work.

##  switch (nsEntry->mType)

VM and switch is not the best idea:

~~Idea (1) an universal call which set the stack variable instead of returning one.~~
Idea (2): Bytecode patching example:   code[ip - 1] = OP_CALL_STATIC_INT;

TEST: $object.getVec(); 
Notes:

##  if (callType == FuncCallExprNode::FunctionCall) ....

At Compiletype the callType is known so there should be different OP_CODES to 
kill this if. 

@me dont forget to update codeblock again ;) 


## bring it together 

1.) macros:


2.) new OP codes:

      OP_CALL_FUNCTION_CALL,
      OP_CALL_STATIC_CALL,
      OP_CALL_METHOD_CALL,
      OP_CALL_PARENT_CALL,

      OP_CALLFUNC_CONSOLEFUNCTION,
      OP_CALLFUNC_VECTOR,
      OP_CALLFUNC_VALUE,
      OP_CALLFUNC_STRING,
      OP_CALLFUNC_INT,
      OP_CALLFUNC_FLOAT,
      OP_CALLFUNC_BOOL,
      OP_CALLFUNC_VOID,

      OP_CALLFUNC_VECTOR_METHOD,
      OP_CALLFUNC_VALUE_METHOD,
      OP_CALLFUNC_STRING_METHOD,
      OP_CALLFUNC_INT_METHOD,
      OP_CALLFUNC_FLOAT_METHOD,
      OP_CALLFUNC_BOOL_METHOD,
      OP_CALLFUNC_VOID_METHOD,

3.) nsentry cached backpack in code stream 

---

I got it running but after loading a other module (CrazyElf for example) it did
not work anymore and the calls where broken. I guess the function pointer changes
when a new script is loaded but the codestream is still filled with the old pointers.
It did not crash but the functions where scrambled. But when reload the same script
it works fine .. I now speed so many hours on it .. I should try to get it run :P
I guess the func call cache was not a good idea. So i will maybe come back to my 
first idea the OP_CODE monster with 32 + 1 OP Codes and doing every time the lookup 
but removing if (...) switch() ... guess this will also not working ?! .. 
Is it only the method or parent call which cause the problems :

```
            ns = thisObject->getNamespace();
            if (ns)
                  nsEntry = ns->lookup(fnName);
            else
                  nsEntry = NULL;
```
i added this to _METHODS ... Mhhh



I kept all the OP codes but `#ifdef ENABLE_EXPERIMENTAL_CALL_FUNC` it in the 
compiler (astNodes.cpp) 


Research:

- fixed: nothing todo with it but `DefineEngineFunction(SDL_GetPerformanceCounter, U64, (),,"Get the current value of the high resolution counter.")` return string !!!!!!
- `%this.module.render();` is handle_OP_CALLFUNC_CONSOLEFUNCTION !!!!!
      - 1th 
            - callArgc = 2
            - argv[0] = render
            - argv[1] = 16454
            - namespace: sdlTests
      - 2th
            - callArgc = 2
            - argv[0] = render
            - argv[1] = 16453
            - namespace: main
      - --------- CHANGED --------
      - 1th 
            - callArgc = 2
            - argv[0] = render
            - argv[1] = 16532 !!!!!!!
            - namespace: sdlTests !!!!!!!!
      - 2th
            - callArgc = 2
            - argv[0] = render
            - argv[1] = 16453
            - namespace: main
      - others    
            - namespace: GuiTextWidgetVintage

Added OP_CALLFUNC_CONSOLEFUNCTION_METHOD and lookup namespace
on every call ... is this faster than before ? hope so ..
My Speed test does not use function calles so this is not the way to test it. StarField seams not to be faster. 

      with        without
[IV]:  ~ 235FPS   240 FPS
[III]: ~ 265FPS   255 FPS
[II]:  ~ 280FPS   265 FPS
*420 I   1220|1800     1180|1700max

maybe a bit faster ... but not really for all this work. 


i test it with ON but as i said .. no function calls
| Script | time |
| --- | --- |
| test_localvar.elf     | 1.362u 0.002s 0:01.36 100.0%    0+0k 0+0io 0pf+0w |
| test_global.elf       | 2.399u 0.002s 0:02.40 99.5%     0+0k 0+0io 0pf+0w |
| test_static.elf       | 4.655u 0.002s 0:04.67 99.5%     0+0k 0+0io 0pf+0w |
| test_dynamic.elf      | 3.823u 0.005s 0:03.84 99.4%     0+0k 0+0io 0pf+0w |
| test_vector_components.elf    | 4.020u 0.004s 0:04.03 99.7%     0+0k 0+0io 0pf+0w
 |
            
