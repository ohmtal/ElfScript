# FIXME 

- [X] Test fastFloat on OP_INC if type is float (without func call ;))
- [X] Like OP_INC  shortpath for "--" OP_DEC


# DONE:

## Field dynamic arrays does not longer work !!!

invaderGame.Keys[%actionString] => make a invaderGame.Keys==

```
for (%i = 0; %i < 10; %i++) {
    sto.Keys[%i] = %i;
    %key = getWord($MODULES, %i);
    sto.Keys[$key] = %i;

}
sto.dumpFields();
```
give me: 

```
  string Keys = "9"
  string Keys1 = "1"
  string Keys2 = "2"
  string Keys3 = "3"
  string Keys4 = "4"
  string Keys5 = "5"
  string Keys6 = "6"
  string Keys7 = "7"
  string Keys8 = "8"
  string Keys9 = "9"
  string Module = "B"
```
This works : `%key = "B"; sto.key[%key]=100; echo(sto.key[B]);`
But 






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
 
