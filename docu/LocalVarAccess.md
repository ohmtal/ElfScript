# Direct access of local variable

## Rejoicing too soon << does not work in function

Took a while until i found this out. So i can continue with the idea to directly
write to the registers as reference.

### Problem new variable

I could not call `Compiler::precompileIdent(var);` without sanitizer did get mad. 
So when i call the `S32 reg = getFuncVars(0)->lookup(var, 0);` on a not initialized
Variable i also get a heap-use-after-free. Bad idea. 

So let's tak a look on lookup:

```
S32 FuncVars::lookup(StringTableEntry var, S32 lineNumber)
{
   std::unordered_map<StringTableEntry, Var>::iterator found = vars.find(var);

   if (found == vars.end())
   {
      const char* lineText = CodeBlock::smCurrentLineText;

      String codeString = CodeBlock::smCurrentLineText;
      Vector<String> splitLines;
      codeString.split("\n", splitLines);

      if (lineNumber > 0 && splitLines.size() > lineNumber)
         lineText = splitLines[lineNumber - 1].c_str();

      const char* str = avar("Script Warning: Variable %s referenced before used when compiling script. File: %s\nLine Num: %d\nLine: \"%s\"", var, CodeBlock::smCurrentParser->getCurrentFile(), lineNumber, lineText);
      scriptErrorHandler(str);

      return assign(var, TypeReqString, lineNumber, false);
   }

   return found->second.reg;
}
```

Also if i skip the Warning - which cause the first problem. I get the next one. 
For now i only work on existing variables. So i added:

```
S32 FuncVars::lookupExising(StringTableEntry var) {
      std::unordered_map<StringTableEntry, Var>::iterator found = vars.find(var);
      if (found == vars.end()) return -1;
      return found->second.reg;
}
```



---

## C Code Example:

```
extern  FuncVars* getFuncVars(S32 lineNumber);

const char* getConsoleTypeName(S32 type) {
    switch (type) {
        case ConsoleValueType::cvFloat:   return "F64";
        case ConsoleValueType::cvInteger: return "S64";
        case ConsoleValueType::cvString: return "String";
        default: return "other";
    }
}


extern  FuncVars* getFuncVars(S32 lineNumber);

const char* getConsoleTypeName(S32 type) {
    switch (type) {
        case ConsoleValueType::cvFloat:   return "F64";
        case ConsoleValueType::cvInteger: return "S64";
        case ConsoleValueType::cvString: return "String";
        default: return "other";
    }
}

```

## ElfScript Example:

```
echo("------------------------ LocalVar ---------------------");
%localX = 5.0;
setLocalFloatVariable("%localX", 666);
echo("setLocalFloatVariable set 666?: %localX ==" SPC %localX);
```
    
    ------------------------ LocalVar ---------------------
    Found register 8 for %localX
    %localX type is -3 F64
    setLocalFloatVariable set 666?: %localX == 666



This is funny:

    # %dodo=0; setLocalFloatVariable("%dodo", 1.9); echo(%dodo);
    Found register 10 for %dodo
    %dodo type is -4 S64
    type after setFloat: -3 F64
    1

It's caused by my fast fetch but this works, need to loop how the function vars
( OP_CALLFUNC ) are set. Which stop point i cant see a difference between both. 

    # %dodo=0; setLocalFloatVariable("%dodo", 1.9); echo(%dodo @ "!");
    Found register 10 for %dodo
    %dodo type is -4 S64
    type after setFloat: -3 F64
    1.89999998!
    
But also this:

    #  %dodo=""; setLocalFloatVariable("%dodo", 1.9); echo(%dodo);
    Found register 10 for %dodo
    %dodo type is -2 String
    type after setFloat: -3 F64
    1.89999998
    
So the best to initialize as float:

    # %dodo=0.0; setLocalFloatVariable("%dodo", 1.9); echo(%dodo);
    Found register 10 for %dodo
    %dodo type is -3 F64
    type after setFloat: -3 F64
    1.89999998



