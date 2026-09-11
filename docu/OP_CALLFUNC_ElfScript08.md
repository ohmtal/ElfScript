# OP_CALLFUNC

ElfScript 0.8 : Targeting OP_CALLFUNC to optimize. 

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
It did not crash but the functions where scrambled. 

I kept all the OP codes but `#ifdef ENABLE_EXPERIMENTAL_CALL_FUNC` it in the 
compiler (astNodes.cpp) 
