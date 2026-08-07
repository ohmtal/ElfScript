# FIXME 







# DONE:

## 0.4c OP_SAVE_LOCAL_VAR_STR and OP_SAVEVAR_STR

After my rocket change :

- [X] $speed = 9 / 10; echo($speed); $speed = mClampf($speed, 0.04, 5.0); echo($speed); // ==> 0!

- [X] $foo = GetRandomValue(-100 , -50); echo($foo);

where $minH is negativ is an U32!!! while consoleValue use S64

made a helper func: MINUS1 return -1

```
% $BLA=MINUS1();echo($BLA);
4294967295
//-----local:
%BLA=MINUS1();echo(%BLA);
-1
// WORKS ?! 
```

when local works its only OP_SAVEVAR_STR

OP_SAVE_LOCAL_VAR_STR => Script::gEvalState.setLocalIntVariable(reg, stack[_STK].getInt());
OP_SAVEVAR_STR =>    Script::gEvalState.setIntVariable(stack[_STK].getInt()); 
calls void setIntValue(U32 val) <<< U32 ?! 
 
