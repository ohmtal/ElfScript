# Using global scope local variables (registers) inside functions and lamdas

# Conclusion: So it's working but basically usless since it's as slow as using global var

I wanted to remove it again, but it should not affect other stuff so it can stay.
Maybe I get an idea later.

Maybe i better get after my pointer attempt but this did use a global var so 
i dont get more speed out of ElfScript. But i lost some ms in the last days
no idea where. 

When i saw it's as the same speed as global with last lookup cached. I reallized
it's the ++/--/*=... where I'am slower with the global. But since test_global is 
only that fast because it only use one variable which fast fetched by last cache.

---

## also known as "parent scope var" 

I had no luck so far getting them out of the stack and then 

I added cvPointer ConsoleValueType only to test => 

```
%foo = 11;
$ptr = getVarPtr("%foo");
varDump("$ptr");
varDump("%foo");
printSeparator();
%copyFoo = getValueByPtr($ptr);
varDump("%copyFoo");

printSeparator();

function huhu() {
    print("-------------- INSIDE FUNCTION ------------------");
    %copyFoo = getValueByPtr($ptr);
    varDump("%copyFoo");
    setValueByPtr($ptr, 4711);
}
huhu();
print("-------------- OUTSIDE FUNCTION ------------------");
varDump("%foo");
```

Results in:

```
       $ptr [type: Pointer] [value:      0x7c7f4f1e0048]
       %foo [type: Integer] [value:                  11] [reg: 0] 
--------------------------------------------------------------------------------
   %copyFoo [type: Integer] [value:                  11] [reg: 1] 
--------------------------------------------------------------------------------
-------------- INSIDE FUNCTION ------------------
   %copyFoo [type: Integer] [value:                  11] [reg: 0] 
-------------- OUTSIDE FUNCTION ------------------
       %foo [type: Integer] [value:                4711] [reg: 0] 
```

This is cool but the function calls and the global $prt var does not help to get anything faster.


## Plan:

###  When i can get the pointer there must be a way to lookup a var from FuncVars (gGlobalScopeFuncVars ?) for lookup and the global scope stack!

I don't know what i tried before but it's easy as :

```
DefineEngineFunction( testLocalGlobal, void, (const char * variableName),,"") {
     S32 varRegister = ElfScript::_getFuncVars()->lookup(StringTable->insert( variableName ), 0);
     Con::printf("REGISTER FOR %s is %d", variableName, varRegister);
     // hardcore validations later :P
     ConsoleValue* valuePtr =  &Script::gEvalState.localStack[0].values[varRegister];

     Con::printf("& %10s [type:%8s] [value:%20s] [reg:%2d] "
       , variableName, ElfScript::getConsoleValueTypeName(valuePtr->type), valuePtr->getString(), varRegister);
}
```

Script:

```
%a = 11;
%b = 12;

function nuabber() {

    testLocalGlobal("%a");
    testLocalGlobal("%b");
}

nuabber();
```

Result:

```
REGISTER FOR %a is 3
&         %a [type: Integer] [value:                  11] [reg: 3] 
REGISTER FOR %b is 4
&         %b [type: Integer] [value:                  12] [reg: 4] 

```

### Bummer after reload testLocalGlobal does not find them any more [0] seams to be wrong. The Stacks are ircremented on reload it's own!

***New test ... can i get higher than +1 and why does it count up on FIRST reload ?***
I guess there is a bug in the first popFrame! Looks like it does not decrement < 2
No it's not popFrame - this looks good. 

```
DefineEngineFunction( testLocalGlobal, void, (const char * variableName),,"") {
     S32 varRegister = ElfScript::_getFuncVars()->lookup(StringTable->insert( variableName ), 0);
     Con::printf("REGISTER FOR %s is %d - LOCALSTACK SIZE:%d STACKDEPTH: %d", variableName, varRegister,
                 Script::gEvalState.localStack.size(), Script::gEvalState.getTopOfStack());
     // hardcore validations later :P

     S32 stackNum = 0;
     Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
     if (!stackFrame.scopeName || !stackFrame.scopeNamespace ){
         stackNum = Script::gEvalState.getTopOfStack() - 1;
     } else {
         stackNum = Script::gEvalState.getTopOfStack() - 2;
    }
    if (stackNum < 0) {
        Con::errorf("Gee stacknum lower than 0!");
        stackNum = 0;
    }
    ConsoleValue* valuePtr =  &Script::gEvalState.localStack[stackNum].values[varRegister];
     Con::printf("& %10s [type:%8s] [value:%20s] [reg:%2d] "
       , variableName, ElfScript::getConsoleValueTypeName(valuePtr->type), valuePtr->getString(), varRegister);
}
```

I hope my guess +1 in function is correct ... else it's all useless.

On a new **exec** we are out of scope - but this ok, we dont want to use it like the real globals. 
I did test if the pointer still exists in new loaded file but this cause a crash so it's gone happy dangling pointer. 




###  When i got the global scope stack [0] ?! i can add something like: &localX << global scope %localX variable!

This would be a dream when I can work directly with the registers inside a
function and global variables will be really useless :D

If i get this in place I need a lot of search and modify:  if '%' or '$' / oldVariable ..........

This depends on what is better. In VM in many places:  Script::gEvalState.currentRegisterArray->values[reg]; is used for 
local variable. So I cant simply set the variable register .. so should i better use the pointer ? 
I need OP_SAVE_PARENTSCOPE_VAR and OP_LOAD_PARENTSCOPE_VAR to save the correct variable. 

- SAVE: AssignExprNode::compile
- LOAD:  AssignOpExprNode::compile *<< lot of* and  VarNode::compile

### MHH Which char for this ?! >>> # <<< i think the hash in nowhere used so far...

but it's common usage is to undocument a line like `//` an `&` is used for reference but when i one day 
add references i have used it for the parent scope vars. When i look at the keyboard i do not have so many
alternatives which are not in use. I dont't what to use a double identifier ... so ... mhh ... 

### Testing => >>> / <<<< NOT this break the syntax highlight  
### Testing => >>> : <<<< NOT this is also in the VARMID


The Backslash would be also ok but this break my fingers while typing :P 
Hard to decide. 
