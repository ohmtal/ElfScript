# Type ID Notes

### static fields have typeid STRING!!!!!!! also if defined as TypeS32 or TypeF32

i did test with type definition on dynamic fields works fine but objects fields added
with addfield sucks! 

i filled up the fields but it's cleared after it (EngineMarshall) the fields are initialzed 
on the very beginning i guess the stringtable is cleared after it 



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

      
--- 

