# ElfScript 0.7

## ImplementConsoleTypeCasters ElfScript 0.7

### *SOLVED* When using as return value:

***In OP_CALLFUNC the nsEntry->mType is Namespace::Entry::StringCallbackType!***

this is what i tried to fix with **ENABLE_CONSOLE_VECTOR_CALLBACK** and did not 
work so far. When I was finished all methods using ConsoleVector were gone .. 
I did not find out why so i marked it with the compile flag, and disabled it. 

enabled again to test:

% echo($t.getVec());   
 (0): Unknown command getVec.


***This is called:*** 
```
ConsoleConstructor::ConsoleConstructor(const char *className, const char *funcName, VectorCallback bfunc, const char *usage, S32 minArgs, S32 maxArgs, bool isToolOnly, ConsoleFunctionHeader* header )
{
      init( className, funcName, usage, minArgs, maxArgs, isToolOnly, header );
      mVecC = bfunc;
}
```
bfunc is: 0x55f8976ec4bd <_TestObjgetVeccaster(SimObject*, S32, ConsoleValue*)>
from macro: DefineEngineMethod(TestObj, getVec, ConsoleVector, (),,"") 

next is:

```
      static EngineExportScope* getGlobalScope()
      {
         /// The global export scope singleton.
         static EngineExportScope sGlobalScope;
         return &sGlobalScope;
      }
```

calling : 
```
 template< typename T > const EngineFunctionTypeInfo< T > _EngineFunctionTypeTraits< T >::smTYPEINFO;
```
The ConsoleConstructor is also called from PointStorage.

- getPosVec 
- getPointVec

Let see if I find out something using dumpMethods....

0x55bf21044fd8 "getPointVec_0_cb" type -3 ... skipped 
0x55bf21045290 "getPosVec_1_cb" type -3 
0x55bf210465e8 "onAdd_7_cb" type -3

0x55bf21045128 "getPointVecByReference" is type 4 << OK


lets see what happen here:

```
void Namespace::addCommand(StringTableEntry name, VectorCallback cb, const char *usage, S32 minArgs, S32 maxArgs, bool isToolOnly , ConsoleFunctionHeader* header)
{
      Entry *ent = createLocalEntry(name);
      trashCache();

      ent->mUsage = usage;
      ent->mHeader = header;
      ent->mMinArgs = minArgs;
      ent->mMaxArgs = maxArgs;
      ent->mToolOnly = isToolOnly;

      ent->mType = Entry::VectorCallbackType;
      ent->cb.mVectorCallbackFunc = cb;
}
```

nothing it's never called !!! 

back to `void ConsoleConstructor::setup()` which should call this 
==> 
```
else if( walk->mVecC)
        Con::addCommand( walk->mClassName, walk->mFuncName, walk->mVecC, walk->mUsage, walk->mMina, walk->mMaxa, walk->mToolOnly, walk->mHeader);
```

OK stoppoint: 

- mFuncName     0x556076264799 "getPointVec"
- mVecC         0x5560761fcc88 <_PointStorageObjectgetPointVeccaster(SimObject*, S32, ConsoleValue*)>
- mClassName    0x556076263886 "PointStorageObject"

this `else if( walk->mClassName)` catch is and `else if( walk->mVecC)` is never reached!!

moved up under: `else if( walk->mBC )`

#### YAY!
```
% echo(sto.getPosVec());
0: OP_PUSH_FRAME stk=0 count=1
2: OP_PUSH_FRAME stk=0 count=1
4: OP_LOADIMMED_IDENT stk=+1 str=sto
7: OP_PUSH stk=-1
8: OP_CALLFUNC stk=+1 name=getPosVec nspace=(null) callType=MethodCall
14: OP_PUSH stk=-1
15: OP_CALLFUNC stk=+1 name=echo nspace=(null) callType=FunctionCall
21: OP_POP_STK stk=-1
22: OP_RETURN_VOID stk=0
100.120003 200.110001 3 0
``` 

let's check it did work like it should. Breakpoint at:  `case Namespace::Entry::VectorCallbackType:`

## I did it !!! 

================================================================================



```
ConsoleGetType( TypeVector )
{
      ConsoleVector *vec = (ConsoleVector *) dptr;
      static const U32 bufSize = 128;
      char* returnBuffer = Con::getReturnBuffer(bufSize);
      dSprintf(returnBuffer, bufSize, "%g %g %g %g", vec->points[0],vec->points[1],vec->points[2],vec->points[3]);
      return returnBuffer;
}
```

called from:

```
const char *getData(S32 type, void *dptr, S32 index, const EnumTable *tbl, BitSet32 flag)
{
   ConsoleBaseType *cbt = ConsoleBaseType::getType(type);
   AssertFatal(cbt, "Con::getData - could not resolve type ID!");
   return cbt->getData((void *) (((const char *)dptr) + index * cbt->getTypeSize()), tbl, flag);
}

```

called from:

```
ImplementConsoleTypeCasters( TypeVector, ConsoleVector )
```

called from:

```
template< typename T >
inline const char* EngineMarshallData( const T& value )
{
   return castConsoleTypeToString( value );
}
```

called from:

```
template< typename T >
inline const char* _EngineConsoleThunkReturnValue( const T& value )
{
   return EngineMarshallData( value );
}
```

called from:

- argc == 2
- argv == object id
- argv +1 == methodname (getVec)

```
   template< typename Frame >
   static ReturnType thunk( S32 argc, ConsoleValue *argv, MethodType<Frame> fn, Frame* frame, const _EngineFunctionDefaultArguments< void( typename Frame::ObjectType*, ArgTs...) >& defaultArgs)
   {
      return _EngineConsoleThunkReturnValue( Helper::dispatchHelper(argc, argv, fn, frame, defaultArgs, SeqType()));
   }
```

called from:

```
DefineEngineMethod(TestObj, getVec, ConsoleVector, (),,"") {
    return ConsoleVector({1.1,2.2,3.3,4.4});
}
```

called from:

Ok here is the problem StringCallbackType. which i tried to fix before 
(ENABLE_CONSOLE_VECTOR_CALLBACK)

```
    case Namespace::Entry::StringCallbackType:
    {
            const char* result = nsEntry->cb.mStringCallbackFunc(thisObject, callArgc, callArgv);
            gCallStack.popFrame();
            stack[_STK + 1].setString(result);
            PUSH_STK();
            break;
    }
```
      

================================================================================
================================================================================
================================================================================

### !Solved! when using as parameter:
---
added in engineAPI.h:
This skip the comvert to String when used as parameter :D \o/ 

```
#ifdef ENABLE_CONSOLE_VECTOR
template<>
struct EngineUnmarshallData< ConsoleVector >
{
      ConsoleVector operator()( ConsoleValue &ref ) const
      {
            return ref.getVector();
      }

      ConsoleVector operator()( const char* str ) const
      {
            ConsoleVector result = {0};
            if (str && str[0] != '\0') {
                  dSscanf(str, "%g %g %g %g",
                        result.points[0],
                        result.points[1],
                        result.points[2],
                        result.points[3]
                  );
            }
            return result;
      }
};
#endif
```


---


Goal How to set a type directly without convert to string and back, when called 
as function parameter or return value.

When using as parameter in Function/Methiod: => ConsoleSetType
```
ConsoleSetType( TypeVector )
{
      if(argc == 1)
            dSscanf(argv[0], "%g %g %g %g",
                    &((ConsoleVector *) dptr)->points[0],
                    &((ConsoleVector *) dptr)->points[1],
                    &((ConsoleVector *) dptr)->points[2],
                    &((ConsoleVector *) dptr)->points[3]
            );
            else if(argc == 4)
                  *((ConsoleVector *)dptr) = ConsoleVector{ dAtof(argv[0]), dAtof(argv[1]), dAtof(argv[2]), dAtof(argv[3]) };
      else
            Con::printf("ConsoleVector must be set as { x, y, z, w } or \"x y width height\"");
}
```
called from:

```
#define ImplementConsoleTypeCasters( type, nativeType ) \
   const char *castConsoleTypeToString( _ConsoleConstType< nativeType >::ConstType &arg ) { return Con::getData(type, const_cast< nativeType* >( &arg ), 0); } \
   bool castConsoleTypeFromString( nativeType &arg, const char *str ) { Con::setData(type, const_cast< nativeType* >( &arg ), 0, 1, &str); return true; } \
   template<> S32 TYPEID< nativeType >() { return type; }


```

 called from:

```
template< typename T >
struct EngineUnmarshallData
{
   T operator()( const char* str ) const
   {
      T value;
      castConsoleTypeFromString( value, str );
      return value;
   }
};
```

called from:

***we have the console value still here (argv+2)***

- argc = 3
- argv = string - the method name: showVec
- argv + 1 == int - the object id: 16467 
- argv + 2 == cvVector the value: {1,2,0,0}


but now it get lost by 

return EngineUnmarshallData< IthArgType<index> >()( argv[ startArgc + index ] );

```
         template<size_t index, size_t method_offset = 0, typename ...RealArgTs>
         static IthArgType<index> getRealArgValue(S32 argc, ConsoleValue *argv, const _EngineFunctionDefaultArguments< void(RealArgTs...) >& defaultArgs)
         {
            if((startArgc + index) < argc)
            {
               return EngineUnmarshallData< IthArgType<index> >()( argv[ startArgc + index ] );
            } else {
               return fixed_tuple_accessor<index + method_offset>::get(defaultArgs.mArgs);
            }
         }
```

called from:

***we have the console value here***
```
        template<typename Frame, size_t ...I>
         static R dispatchHelper(S32 argc, ConsoleValue *argv, MethodType<Frame> fn, Frame* frame, const _EngineFunctionDefaultArguments< void( typename Frame::ObjectType*, ArgTs...) >& defaultArgs, Seq<I...>){
            return (frame->*fn)(SelfType::getRealArgValue<I,1>(argc, argv, defaultArgs) ...);
         }
```

called from:


***we have the console value here***
```
   template< typename Frame >
   static void thunk( S32 argc, ConsoleValue *argv, MethodType<Frame> fn, Frame* frame, const _EngineFunctionDefaultArguments< void( typename Frame::ObjectType*, ArgTs...) >& defaultArgs)
   {
      Helper::dispatchHelper(argc, argv, fn, frame, defaultArgs, SeqType());
   }
```

called from: 

```
DefineEngineMethod(TestObj, showVec, void, (ConsoleVector vec),,"") {
    Con::printf("VEC: %f, %f, %f, %f", vec.points[0], vec.points[1], vec.points[2], vec.points[3]);
}
```

by $t.showVec({1,2,3,4}); 

