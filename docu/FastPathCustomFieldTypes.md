# ElfScript 0.7

## Adding custom data types to fast path 


### virtual inline bool pushStaticFieldFastPath(const AbstractClassRep::Field *fld, ConsoleValue* stackP)

```
    if (fld->type == TypeVector) {
            ConsoleVector* source = (ConsoleVector*)(((const char*)this) + fld->offset);
            stackP->setVector(*source);
            return true;
    }
    return Parent::pushStaticFieldFastPath(fld,stackP);
```


### virtual inline bool stackStaticFieldFastPath(const AbstractClassRep::Field *fld, ConsoleValue* stackP) 

```
    if (fld->type == TypeVector) {
        ConsoleVector* target = (ConsoleVector*)(((const char*)this) + fld->offset);
        *target = stackP->getVector();
        return true;
    }
    return stackStaticFieldFastPath(fld,stackP);

```
