# Ideas about FastPath for Structs

NOTE: #define TEST_STRUCT_FAST_PATH

## 1.) faster string to struct conversation using FastPath in  SimObject::setDataField

At the moment the FastPath only handle int/float types. But the
engine should have all infos:

- test EngineTypeKind ==>  EngineTypeKindStruct 
- EngineStructTypeInfo setup with IMPLEMENT_STRUCT

this can be properly used by : void SimObject::setDataField(StringTableEntry slotName, const char *array, const char *value)

1.) Findout how to get the EngineStructTypeInfo (EngineTypeInfo) of a FieldType
        ==>  ConsoleBaseType::getType( f->type );
```
else if (fld && fld->type != TypeString && fld->type != TypeName){
// lot's of 20 which is DefineUnmappedConsoleType( TypeString, const char * ) // plain UTF-8 strings are not supported in new interop

        ConsoleBaseType* conType = ConsoleBaseType::getType( fld->type );

        if (conType) {
                const EngineTypeInfo* typeInfo =  conType->getTypeInfo();

                Con::printf("%-16s :: type %2u, %20s, %s, TypeKind: %d (struct:%d)",
                        curField,
                        fld->type, stack[_STK].getString()
                        ,  conType->getTypeName()
                        , typeInfo ? typeInfo->getTypeKind() : -1 ,  typeInfo ? typeInfo->isStruct() : -1
                );
        }
}
```

## 2.) Another half-baked idea is to add a new type in ConsoleValue

**OP_BUILD_VECTOR_STRING**

CONSOLE_VALUE_VECTOR_FIELD_COUNT define the count of floats 

If we can alloc a string it's maybe also possible to create a limited FloatVec (4xF64).
Four Float Values in the Vector should be fine for at least 90% of all used structs.
So we get Points and Rectangeles into the fast path. Combined with the new { } syntax
this should be great speed up. But there are not many ways to set the type. So maybe
I get in trouble with local/global variables. Type definition would be a answer. 
