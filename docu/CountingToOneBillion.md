Note: I know this is not a real benchmark for a script language .. i do this just for fun.

My fastest Version 0.4g is a bit slower than 0.4a on this test, but does a 
great job in my SpeedTest. I guess I'll never reach under 5sec at test I.

# I. For loop test counting to one billion (1000000000)

- LuaJit (2.1.1784580905): 0.355u 0.003s 0:00.35 100.0%    0+0k 0+0io 0pf+0w
- Node.js v26.4.0 0.520u 0.016s 0:00.53 100.0%    0+0k 0+0io 0pf+0w
- Lua (5.5.0): 3.504u 0.003s 0:03.52 99.4%     0+0k 0+0io 0pf+0w
- PHP (8.5.8): 3.644u 0.019s 0:03.66 99.7%     0+0k 0+0io 0pf+0w
- 📌 ElfScript 0.5d (using for in range)): 5.224u 0.002s 0:05.23 99.8%     0+0k 0+0io 0pf+0w
- 📌 ElfScript 0.5c (using foreach range)): 4.637u 0.004s 0:04.65 99.5%     0+0k 0+0io 0pf+0w
- 📌 ElfScript 0.5b (using foreach)): 5.587u 0.003s 0:05.60 99.6%     0+0k 0+0io 0pf+0w
- 📌 ElfScript(0.4a (*3)): 15.979u 0.000s 0:15.99 99.8%    0+0k 0+0io 0pf+0w
- 📌 ElfScript(0.4b (*6)):  17.476u 0.003s 0:17.50 99.8%    0+0k 0+0io 0pf+0w
- 📌 ElfScript(0.4f):  16.986u 0.000s 0:17.00 99.8%    0+0k 8+0io 0pf+0w
- Python 3 (3.14.6): 40.648u 0.006s 0:40.71 99.8%    0+0k 0+0io 0pf+0w
- ruby 3.4.10: 55.675u 0.023s 0:55.79 99.8%    0+0k 0+0io 0pf+0w
- Duktape (2.7.0 RelWithDeb): 179.464u 0.000s 2:59.77 99.8%   0+0k 0+0io 0pf+0w

- Bash (5.3.15(1) (*4)): Canceled after: 2151.499u 0.891s 36:04.93 99.4%       0+0k 0+0io 0pf+0w
- 🌩️ ChaiScript ( v6.1.0 RelWithDeb (*5)): **Segmentation fault (core dumped)** after: 190.456u 0.148s 3:11.52 99.5%   0+0k 1312+0io 9pf+0w

I tried to fix the ChaiScript run but it Segfault. I dont want to dig in this code to find out why.

---

- ElfScript(0.4a (*1)): 16.154u 0.013s 0:16.22 99.6%    0+0k 0+0io 0pf+0w
- ElfScipt(0.4a (*2)): 257.589u 0.023s 4:17.94 99.8%   0+0k 0+0io 0pf+0w


(*1) ElfScript from raylib-ElfScript **RelWithDeb** build :
./raylib-elfscript --script /home/tom/work/counting/counter.elf --noloop

(*2) HelloElf **Debug** build 
time /opt/ElfScript/HelloElf --script counter.elf

(*3) HelloElf **RelWithDeb** build 
time /opt/ElfScript/HelloElf --script counter.elf

(*4) After some time (10 min or so) i started working with the pc. I had to cancel 

(*5) ChaiScript tested with a modified main.cpp in scriptFlux using chai->eval. 

(*6) HalloElf (RelWithDeb)  optimized loop handling is slower Wtf. 

# II. For loop test counting to one billion (1000000000) and output %

- adding if/modulo/div/print

``` 
-- Lua:
local i = 0
for i = 1, 1000000000 do
     if i % 10000000 == 0 then print (i / 10000000 ,"%") end
end
```

``` 
// ElfScript:
for (%i=0; %i<1000000000; %i++) {
    if ((%i % 10000000) == 0) print((%i / 10000000),"%");
}
```

``` 
# Python:
for i in range(0, 1000000000):
    if i % 10000000 == 0:
        print(i / 10000000, "%")

```

```
<?php
for ( $i = 0; $i < 1000000000; $i++) {
    if (( $i % 10000000) == 0) print (( $i / 10000000) . "%\n");
}
?>
```

- LuaJit (2.1.1784580905): 4.268u 0.000s 0:04.27 99.7%     0+0k 0+0io 0pf+0w
- PHP 8.5.8: 19.318u 0.009s 0:19.37 99.6%    0+0k 0+0io 0pf+0w
- Lua (5.5.0): 20.083u 0.011s 0:20.13 99.8%    0+0k 0+0io 0pf+0w
- 📌 ElfScipt(0.4a (*3)): 52.887u 0.003s 0:52.94 99.8%    0+0k 0+0io 0pf+0w
- 📌 ElfScipt(0.4g): 54.739u 0.013s 0:54.84 99.8%    0+0k 0+0io 0pf+0w
- Python 3 (3.14.6): 89.470u 0.026s 1:29.74 99.7%    0+0k 0+0io 0pf+0w


# III Float Test with While


```
<?php
$i = 0;
while ($i < 100000000.0 ) $i += 0.1;
?>
```

```
-- Lua
local i = 0
while i < 100000000.0 do
     i = i + 0.1
end
```

```
echo ("ElfScript: 100 Million but float + 0.1f and a while loop");
%i = 0;
while (%i < 100000000.0) %i+=0.1;
echo(%i);
```

- PHP 8.5.8: 7.606u 0.006s 0:07.62 99.7%     0+0k 184+0io 1pf+0w
- Lua (5.5.0): 10.003u 0.003s 0:10.01 99.9%    0+0k 0+0io 0pf+0w
- 📌 ElfScipt(0.4a (*3)): 28.889u 0.006s 0:28.94 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4g🚀 (RelWithDebug) : 31.617u 0.003s 0:31.64 99.9%    0+0k 0+0io 0pf+0w

# IV Analysis

The ++ trigger OP_INV which typecast %i to float:

Bytecode:
```
% $Debug::DumpByteCode=1;  for (%i = 0; %i < 1; %i++) {}
0: OP_LOADIMMED_UINT stk=+1 val=0
2: OP_SAVE_LOCAL_VAR_UINT stk=0 reg=0
4: OP_POP_STK stk=-1
5: OP_LOADIMMED_FLT stk=+1 val=1.000000
7: OP_LOAD_LOCAL_VAR_FLT stk=+1 reg=0
9: OP_CMPLT stk=-1
10: OP_JMPIFNOT stk=-1 ip=21
12: OP_INC stk=0 reg=0
14: OP_LOADIMMED_FLT stk=+1 val=1.000000
16: OP_LOAD_LOCAL_VAR_FLT stk=+1 reg=0
18: OP_CMPLT stk=-1
19: OP_JMPIF stk=-1 ip=12
21: OP_RETURN_VOID stk=0
```
***FIXME put my new OP_ statements to the dump ....***

Not sure why OP_INC uses float. INC should be integer - not ? 

```
     case OP_INC:
         reg = code[ip++];
         currentRegister = reg;
         Script::gEvalState.setLocalFloatVariable(reg, Script::gEvalState.getLocalFloatVariable(reg) + 1.0);
         break;
```

Testing:

```
     case OP_INC:
         reg = code[ip++];
         currentRegister = reg;

//XXTH TEST         Script::gEvalState.setLocalFloatVariable(reg, Script::gEvalState.getLocalFloatVariable(reg) + 1.0);
         Script::gEvalState.setLocalIntVariable(reg, Script::gEvalState.getLocalFloatVariable(reg) + 1.0);
         break;


```

Results in:

```
0: OP_LOADIMMED_UINT stk=+1 val=0
2: OP_SAVE_LOCAL_VAR_UINT stk=0 reg=0
4: OP_POP_STK stk=-1
5: OP_LOADIMMED_FLT stk=+1 val=1.000000
7: OP_LOAD_LOCAL_VAR_FLT stk=+1 reg=0
9: OP_CMPLT stk=-1
10: OP_JMPIFNOT stk=-1 ip=21
12: OP_INC stk=0 reg=0
14: OP_LOADIMMED_FLT stk=+1 val=1.000000
16: OP_LOAD_LOCAL_VAR_FLT stk=+1 reg=0
18: OP_CMPLT stk=-1
19: OP_JMPIF stk=-1 ip=12
21: OP_RETURN_VOID stk=0

```

mhhh still float. I should have read carefully . at 5 it's casted to float. 

but i did test it with 100 millions - keep in mind i use a slow debug build -

- With "XXTH_TEST": 21.175u 0.006s 0:21.21 99.8%    0+0k 0+0io 0pf+0w
- Without: 20.712u 0.003s 0:20.74 99.8%    0+0k 0+0io 0pf+0w

---

So continue with original code. 

- `U32 IntNode::compile(CodeStream& codeStream, U32 ip, TypeReq type)` is called with type==TypeReqFloat
- .. U32 FloatUnaryExprNode::compile(CodeStream& codeStream, U32 ip, TypeReq type)
- ... ip = expr->compile(codeStream, ip, subType);

In CMDgram.y i only can find FloatUnaryExprNode when a "-" is applied. 
but opPLUSPLUS at assign_op_struct is same as opMINUSMINUS:

```
   : opPLUSPLUS
      { $$.lineNumber = $1.lineNumber; $$.token = opPLUSPLUS; $$.expr = FloatNode::alloc( $1.lineNumber, 1 ); }
   | opMINUSMINUS
      { $$.lineNumber = $1.lineNumber; $$.token = opMINUSMINUS; $$.expr = FloatNode::alloc( $1.lineNumber, 1 ); }
```

### ELFSCRIPT_INT_HACK

THIS => void IntBinaryExprNode::getSubTypeOperand()

I added lot of changed to make it faster (#define ELFSCRIPT_INT_HACK) but it
ended with a slower loop test. too bad. 


### Direct Threading

Another but painful change would be => ***Direct Threading***
The enourmous compiledEval switch/case is maybe the reason why it was slower
after my changes.

- 1.) I take the enum list and put it with &&handle_ pre into a table:
```
static const void* dispatch_table[] = {
   &&handle_OP_FUNC_DECL,
   &&handle_OP_DEFAULT_END,
   &&handle_OP_CREATE_OBJECT,
   *** and so on ***
};
``` 

- 2.) the switch 

instead of: 

```
   for (;;)
   {
      U32 instruction = code[ip++];
   breakContinue:
      switch (instruction)
      {
      case OP_FUNC_DECL:
```

it maybe there is a new function which would look like:

```

   U32 ip = 0; // Instruction Pointer

   static const void* dispatch_table[] = {
      &&handle_OP_NOP,
      &&handle_OP_LOADIMMED_FLT,
      &&handle_OP_LOADIMMED_UINT,
      &&handle_OP_CMPLT,
      &&handle_OP_INC,
      &&handle_OP_RETURN_VOID
      *** all others from enum ***
   };

   // magic macro:
   #define DISPATCH() goto *dispatch_table[code[ip++]]

   // first command
   DISPATCH();

   handle_OP_NOP:
      DISPATCH();

   ... and so on ...   
```

- 3. i should break it in parts 

```
static const void* dispatch_table[] = {
      &&handle_OP_NOP,
      &&handle_FALLBACK_OP << for the opcodes i did noch update so far
        .....
};


//... all opcodes i did ....
handle_OP_EXAMPLE_DONE:
    blabla();
    DISPATCH(); 
    
// ... old ...

handle_FALLBACK_OP:

  //restore OP:
  U32 currentOp = code[ip - 1];

  // old jumper:
   breakContinue: 

   switch (currentOp) {
    case OP_FOOBAR: ....
    case OP_FOOBAR: ....
    case OP_FOOBAR: ....
    
   }
      
      
```

Started with that but also same speed .... it's cursed :P

