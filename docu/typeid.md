# Type ID Notes

### static fields have typeid STRING!!!!!!! also if defined as TypeS32 or TypeF32

i did test with type definition on dynamic fields works fine but objects fields added
with addfield sucks! 



```
   enum CompiledInstructions
   {
      OP_FUNC_DECL,
      OP_DEFAULT_END,
      OP_CREATE_OBJECT,
      OP_ADD_OBJECT,
      OP_END_OBJECT,
      // Added to fix the stack issue [7/9/2007 Black]
      OP_FINISH_OBJECT,

      OP_JMPIFFNOT,
      OP_JMPIFNOT,
      OP_JMPNOTSTRING,
      OP_JMPIFF,
      OP_JMPIF,
      OP_JMPIFNOT_NP,
      OP_JMPIF_NP,    // 10
      OP_JMP,
      OP_RETURN,
      // fixes a bug when not explicitly returning a value
      OP_RETURN_VOID,
      OP_RETURN_FLT,
      OP_RETURN_UINT,


      OP_CMPEQ,
      OP_CMPGR,
      OP_CMPGE,
      OP_CMPLT,
      OP_CMPLE,
      OP_CMPNE,
      OP_XOR,         // 20
      OP_MOD,
      OP_BITAND,
      OP_BITOR,
      OP_NOT,
      OP_NOTF,
      OP_ONESCOMPLEMENT,

      OP_SHR,
      OP_SHL,
      OP_AND,
      OP_OR,          // 30

      OP_ADD,
      OP_SUB,
      OP_MUL,
      OP_DIV,
      OP_NEG,
      OP_INC,

      OP_SETCURVAR,
      OP_SETCURVAR_CREATE,
      OP_SETCURVAR_ARRAY,
      OP_SETCURVAR_ARRAY_CREATE,

      OP_LOADVAR_UINT,// 40
      OP_LOADVAR_FLT,
      OP_LOADVAR_STR,

      OP_SAVEVAR_UINT,
      OP_SAVEVAR_FLT,
      OP_SAVEVAR_STR,

      OP_LOAD_LOCAL_VAR_UINT,
      OP_LOAD_LOCAL_VAR_FLT,
      OP_LOAD_LOCAL_VAR_STR,

      OP_SAVE_LOCAL_VAR_UINT,
      OP_SAVE_LOCAL_VAR_FLT,
      OP_SAVE_LOCAL_VAR_STR,

      OP_SETCUROBJECT,
      OP_SETCUROBJECT_NEW,
      OP_SETCUROBJECT_INTERNAL,

      OP_SETCURFIELD,
      OP_SETCURFIELD_ARRAY, // 50
      OP_SETCURFIELD_TYPE,

      OP_LOADFIELD_UINT,
      OP_LOADFIELD_FLT,
      OP_LOADFIELD_STR,

      OP_SAVEFIELD_UINT,
      OP_SAVEFIELD_FLT,
      OP_SAVEFIELD_STR,

      OP_POP_STK,

      OP_LOADIMMED_UINT,
      OP_LOADIMMED_FLT,
      OP_TAG_TO_STR,
      OP_LOADIMMED_STR, // 70
      OP_DOCBLOCK_STR,  // 76
      OP_LOADIMMED_IDENT,

      OP_CALLFUNC,

      OP_ADVANCE_STR_APPENDCHAR,
      OP_REWIND_STR,
      OP_TERMINATE_REWIND_STR,

      OP_COMPARE_STR,

      OP_PUSH,
      OP_PUSH_FRAME,

      OP_ASSERT,
      OP_BREAK,

      OP_ITER_BEGIN,       ///< Prepare foreach iterator.
      OP_ITER_BEGIN_STR,   ///< Prepare foreach$ iterator.
      OP_ITER,             ///< Enter foreach loop.
      OP_ITER_END,         ///< End foreach loop.

      OP_INVALID,   // 90

      MAX_OP_CODELEN ///< The amount of op codes.
   };

```


SlotTest:

```
$foo = new ScriptObject() { TypeS32 myInt = 0; }; 
$foo.myInt = "bar"; 
echo($foo.myInt);

// oneliner
$foo = new ScriptObject() { myString = "foo"; TypeS32 myInt = 0; TypeF32 myFloat = -47.11;}; $foo.myInt = "bar"; $foo.myFloat="lala";$foo.myString="Hello";  $foo.dump();
$foo.myFloat+=5.1;$foo.myInt+=5.1;
```

- typeID from SlotAssignNode* SlotAssignNode::alloc
- OP_SETCURFIELD_TYPE called on new ...
- "=" called from CMDGram.y:    
    | slot_acc '=' expr
      { $$ = SlotAssignNode::alloc( $1.lineNumber, $1.object, $1.array, $1.slotName, $3); }

- OP_SETCURFIELD_TYPE modify ? 


TODO: ?
```
| slot_acc '=' expr
  { 
    U32 tID = getGlobalSlotType($1.slotName); 
    $$ = SlotAssignNode::alloc( $1.lineNumber, $1.object, $1.array, $1.slotName, $3, tID); 
  }
```

---

## XXTH type safety ELFSCRIPT_STRICT_SLOT_TYPE:

simple rule: same slotname, same type

1. SlotAssignNode::alloc added map to store the set type and restore id set before
2. U32 SlotAssignNode::compile (replaced)
3. U32 SlotAccessNode::compile (replaced)
    - struct SlotAccessNode => U32 typeID added
    - SlotAccessNode* SlotAccessNode::alloc => setting the typeID


---

- SlotAssignNode* SlotAssignNode::alloc(S32 lineNumber, ExprNode* objectExpr, ExprNode* arrayExpr, StringTableEntry slotName, ExprNode* valueExpr, U32 typeID /* = -1 */)
    - ret->typeID = typeID;
    
    
CMDGram.y:
```
slot_assign
   : IDENT '=' expr ';'
      { $$ = SlotAssignNode::alloc( $1.lineNumber, NULL, NULL, $1.value, $3); }
   | TYPEIDENT IDENT '=' expr ';'
      { $$ = SlotAssignNode::alloc( $1.lineNumber, NULL, NULL, $2.value, $4, $1.value); }
```

---
### compiledEval:

Con::EvalResult CodeBlock::exec(U32 ip, const char* functionName, Namespace* thisNamespace, U32 argc, ConsoleValue* argv, bool noCalls, StringTableEntry packageName, S32 setFrame)

```
     case OP_SAVEVAR_FLT:
         Script::gEvalState.setFloatVariable(stack[_STK].getFloat());
         break;
    ...
      case OP_LOADIMMED_FLT:
         stack[_STK + 1].setFloat(curFloatTable[code[ip++]]);
         _STK++;
         break;

```
---
### astNodes: 
U32 AssignExprNode::compile(CodeStream& codeStream, U32 ip, TypeReq type)
```
      switch (subType)
      {
      case TypeReqString: codeStream.emit(OP_SAVEVAR_STR);  break;
      case TypeReqUInt:   codeStream.emit(OP_SAVEVAR_UINT); break;
      case TypeReqFloat:  codeStream.emit(OP_SAVEVAR_FLT);  break;
      default: break;
      }
```


U32 ConstantNode::compile(CodeStream& codeStream, U32 ip, TypeReq type)
   case TypeReqFloat:
      codeStream.emit(OP_LOADIMMED_FLT);
      codeStream.emit(index);
      break;
