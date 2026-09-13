# Lambda

Done so far:
- added cvLamda   =          -7 
- added Namespace::Entry* gLastFuncDecl
- LambdaLoadExprNode STUB
```
$foo = fn(%bar) { %bar++; print(%bar); };


LambdaLoadExprNode::compile !!!
0: OP_SETCURVAR_CREATE stk=0 var=$foo
3: OP_SAVEVAR_STR stk=0
4: OP_POP_STK stk=-1
5: OP_RETURN_VOID stk=0
```
- LambdaCallExprNode STUB


## Implementation ideas:

Should be like: 
```
%func = fn(%x) { print("X is", %x);};
%func(10);
```
- Add new ConsoleValueType: cvLamda

- use OP_FUNC_DECL /     
    - static FunctionDeclStmtNode* alloc(S32 lineNumber, StringTableEntry fnName, StringTableEntry nameSpace, VarNode* args, StmtNode* stmts);

- load grammar idea: 
```
expr
   ....
   | rwFN '(' func_var_list_decl ')' '{' stmt_list '}'
      {
         char lambdaName[64];
         static unsigned int lambdaCounter = 0;
         dSprintf(lambdaName, 64, "__lambda_%u", lambdaCounter++);

         StmtNode* node = FunctionDeclStmtNode* alloc($1.lineNumber, StringTable->insert(lambdaName), nullprt, $3, $6);

         $$ = LambdaLoadExprNode::alloc(@1.lineNumber, node);
      }    
```

- LambdaLoadStmtNode

- OP_LOAD_LAMDA ==>  use the gLastFuncDecl
    - if this fail i have to rewite FunctionDeclStmtNode::compileStmt
    - else we simple use my new => Namespace::Entry* gLastFuncDecl 
    
    
- call grammar idea:

```
func_call
   : IDENTIFIER '(' expr_list ')' ';'   { ... }
   | VAR '(' expr_list ')' ';'          { 
         $$ = LambdaCallExprNode::alloc($1.lineNumber, $1.value, $3);
   }
   ;
```

- struct LambdaCallExprNode : ExprNode
