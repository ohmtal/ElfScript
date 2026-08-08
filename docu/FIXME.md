# FIXME 

- [ ] modulo does integers so it should also work with integers.

# DONE:

- [X] Test fastFloat on OP_INC if type is float (without func call ;))
- [X] Like OP_INC  shortpath for "--" OP_DEC
- [X] Analyse local_var test:
  complete is time : 3.8
  for loops only : 1.4 << too much i think  - and while loop is even slower 

  foreach loop is very performant but it's only for simobject or string but i 
  guess it can be expanded to also iter integers 

  look at OP_ITER_BEGIN_STR to bad normal foreach is for object should i 

  - change this ?! do it could be 
    - foreach( %i in 0..10)  << integers
    - foreach$(%i in "A B C") << strings
    - foreach( %obj in %mySimSet) << simset object

   ***IterStmtNode expand so it know start and expr from  DOTDOT***
    
  - [X] IterStmtNode modify for new range ...
  - [.] OP_ITER_BEGIN_RANGE
  - [X] IterStackRecord for using mode 
  - [.] modify handle_OP_ITER_BEGIN
  - [.] modify handle_OP_ITER
  - [.] handle_OP_ITER_END (mode)
    
    
    
    
  ***Bison (Yacc):***

    - maybe at Operator token definitions:
      %token <i> opDOTDOT
    

   
   - foreach_stmt  2 = mode 2 ==> OP_ITER_BEGIN_RANGE

   : rwFOREACH '(' VAR rwIN expr DOTDOT expr ')' stmt_block
      { 
         $$ = IterStmtNode::alloc($1.lineNumber, $3.value, $5, $7, $9, 2 ); 
      }
      
   - ***Lexer: after "-->"***
      ".."   { CMDlval.i = MakeToken<int>(opDOTDOT,    yylineno); return opDOTDOT;    }
        

        
        

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
 
