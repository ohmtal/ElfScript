# The Case Monster of CodeBlock::Exec

or how i met Sisyphus.

---
TODO: Dispatch Table for jump prediction:

Definition like:
```
void* dispatchTable[] = { &&do_OP_ADD, &&do_OP_SUB, &&do_OP_SAVEFIELD_UINT,.... };
```

then replacing `break` with `goto *dispatchTable[code[ip++]];` 

