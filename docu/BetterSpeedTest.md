# ElfScript Simple Speed Test:

As expected, the local variables followed by the global are the fastest. The  
static fields are many times faster than in in the vanilla torquescript. With 0.4d
it became a real rocket. Only the Dynamic Fields are lame ducs, but i started
to change this.


### Version 0.5a (RelWithDebug) : 
- opMinusMinus also got direct register write like opPlusPlus
- OP_SAVE_LOCAL_VAR_FLT/OP_SAVE_LOCAL_VAR_UINT speed up
- removed cleanupdata when int/float is set (good idea?) ==> No memleak!


### Version 0.4h🚀 (RelWithDebug) : Direct Threading finished ... let see - compiled with -O2.


### Testenviorment: 

- ThinkPad T570
- DE: Xfce4 4.20
- WM: Xfwm4 (X11)
- CPU: Intel(R) Core(TM) i5-7200U (4) @ 3.10 GHz
- GPU: Intel HD Graphics 620 @ 1.00 GHz [Integrated]
- Memory: 1.04 GiB / 7.49 GiB (14%)

    

***OGE3D: time ./OhmtalGame_Linux.bin -dedicated -game speedtest***


## Local variable:

- Version 0.4a (RelWithDebug) : 15.913u 0.198s 0:16.16 99.6%    0+0k 0+0io 0pf+0w
- OGE3D (current 26-08-05) : 33.268u 0.299s 0:33.61 99.8%  0+0k 0+24io 0pf+0w
- Version 0.4d 🚀 (RelWithDebug) : 5.199u 0.000s 0:05.20 99.8%     0+0k 0+0io 0pf+0w
- Version 0.4f (RelWithDebug) : 4.509u 0.003s 0:04.52 99.5%     0+0k 0+0io 0pf+0w
- Version 0.4g (RelWithDebug) : 4.753u 0.006s 0:04.77 99.5%     0+0k 0+0io 0pf+0w
- Version 0.4h (RelWithDebug) : 4.345u 0.004s 0:04.36 99.5%     0+0k 0+0io 0pf+0w
- Version 0.5a (RelWithDebug) : 
    - 3.988u 0.010s 0:04.02 99.2%     0+0k 0+0io 0pf+0w
    - 3.664u 0.002s 0:03.68 99.4%     0+0k 0+0io 0pf+0w
    - Invalid ::: 3.252u 0.004s 0:03.27 99.3%     0+0k 0+0io 0pf+0w


**Mission impossible: Lua 5.5: 1.215u 0.002s 0:01.22 99.1%     0+0k 24+0io 1pf+0w**

**for OGE3D i had to replace the #define's with global variables!, 200 ms get lost at startup (console)**



```
#define JLOOPS 25
#define ILOOPS 1000000

%sum = 0;
for (%j = 0; %j < JLOOPS; %j++) {
    for (%i = 0; %i < ILOOPS; %i++) {
        %sum ++;
    }
    echo("SUM (++) IS:" SPC %sum);
    for (%i = 0; %i < ILOOPS; %i++) {
        %sum --;
    }
    echo("SUM (--) IS:" SPC %sum);
    %sum = 66;
    echo("set Sum to 66 == " SPC %sum * 1);
    for (%i = 0; %i < ILOOPS; %i++) {
        %sum *= %i + 1;
        %sum /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC %sum);
    for (%i = 0; %i < ILOOPS / 2.0; %i++) {
        %ran = getRandomF(%i);
        %sum -= %ran;
        %sum += %ran;
    }
    echo("SUM (rand +-) IS:" SPC %sum);
}
%sum -= 66.0 ;
echo("---------------------");
echo("---------------------");
echo("Final sum should be 0 == ", %sum);
echo("---------------------");
echo("---------------------");

```

## Global variable :

- Version 0.4a (RelWithDebug) :17.481u 0.182s 0:17.68 99.8%    0+0k 0+0io 0pf+0w
- OGE3D (current 26-08-05) : 34.477u 0.299s 0:34.82 99.8%  0+0k 0+56io 0pf+0w
- Version 0.4d 🚀 (RelWithDebug) : 6.622u 0.013s 0:06.64 99.8%     0+0k 0+0io 0pf+0w
- Version 0.4f 🚀 (RelWithDebug) : 6.345u 0.003s 0:06.35 99.8%     0+0k 0+0io 0pf+0w
- Version 0.4g🚀 (RelWithDebug) : 6.618u 0.009s 0:06.63 99.6%     0+0k 0+0io 0pf+0w
- Version 0.4h🚀 (RelWithDebug) : 6.059u 0.003s 0:06.08 99.5%     0+0k 8+0io 0pf+0w


```
#define JLOOPS 25
#define ILOOPS 1000000

$sum = 0;
for (%j = 0; %j < JLOOPS; %j++) {
    for (%i = 0; %i < ILOOPS; %i++) {
        $sum ++;
    }
    echo("SUM (++) IS:" SPC $sum);
    for (%i = 0; %i < ILOOPS; %i++) {
        $sum --;
    }
    echo("SUM (--) IS:" SPC $sum);
    $sum = 66;
    echo("set Sum to 66 == " SPC $sum * 1);
    for (%i = 0; %i < ILOOPS; %i++) {
        $sum *= %i + 1;
        $sum /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC $sum);
    for (%i = 0; %i < ILOOPS / 2.0; %i++) {
        %ran = getRandomF(%i);
        $sum -= %ran;
        $sum += %ran;
    }
    echo("SUM (rand +-) IS:" SPC $sum);
}
$sum -= 66.0 ;
echo("---------------------");
echo("---------------------");
echo("Final sum should be 0 == ", $sum);
echo("---------------------");
echo("---------------------");

```

## Static Float Field

- Version 0.4a (RelWithDebug) : 29.871u 0.159s 0:30.06 99.8%    0+0k 0+0io 0pf+0w
- OGE3D using tom2DSprite: 192.723u 0.302s 3:13.28 99.8% 0+0k 0+248io 0pf+0w
- Version 0.4c 🚀 (RelWithDebug) : 31.224u 0.193s 0:31.45 99.8%    0+0k 0+0io 0pf+0w
- Version 0.4d 🚀 (RelWithDebug) : 21.784u 0.009s 0:21.82 99.8%    0+0k 0+0io 0pf+0w
- Version 0.4f 🚀 (RelWithDebug) : 21.170u 0.003s 0:21.20 99.8%    0+0k 0+0io 0pf+0w
- Version 0.4g 🚀 (RelWithDebug) : 21.010u 0.009s 0:21.06 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4h🚀 (RelWithDebug) : 19.916u 0.002s 0:19.97 99.6%    0+0k 8+0io 0pf+0w


Here 0.4c is slower than 0.4a (no idea why) - but 0.4b was at the same speed so rocket
change did not cause it. Use local var is now the fastest. global is slightly 
slower than local but still faster than named. 




**OGE3D :: it's slower than a dynamic field ? - here ElfScript fastpath really shine :)**

```
#define JLOOPS 25
#define ILOOPS 1000000

new PointStorageObject(sto);

sto.x = 0;
for (%j = 0; %j < JLOOPS; %j++) {
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.x ++;
    }
    echo("SUM (++) IS:" SPC sto.x);
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.x --;
    }
    echo("SUM (--) IS:" SPC sto.x);
    sto.x = 66;
    echo("set Sum to 66 == " SPC sto.x * 1);
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.x *= %i + 1;
        sto.x /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC sto.x);
    for (%i = 0; %i < ILOOPS / 2.0; %i++) {
        %ran = getRandomF(%i);
        sto.x -= %ran;
        sto.x += %ran;
    }
    echo("SUM (rand +-) IS:" SPC sto.x);
}
sto.x -= 66.0 ;
echo("---------------------");
echo("---------------------");
echo("Final sum should be 0 == ", sto.x);
echo("---------------------");
echo("---------------------");
```

## Static Float Field but with objectID (local var) 

- Version 0.4a (RelWithDebug) : 34.982u 1.909s 0:36.97 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4c 🚀 (RelWithDebug) : 24.884u 0.202s 0:25.12 99.8%    0+0k 0+0io 0pf+0w
- Version 0.4d 🚀 (RelWithDebug) : 13.967u 0.003s 0:13.99 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4f 🚀 (RelWithDebug) : 14.015u 0.009s 0:14.04 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4g 🚀 (RelWithDebug) : 14.773u 0.006s 0:14.80 99.7%    0+0k 0+0io 0pf+0w
- Version 0.4h🚀 (RelWithDebug) : 13.582u 0.002s 0:13.62 99.7%    0+0k 0+0io 0pf+0w



### So why is this slower (same with a global var):

- 1. Object is created and %stoObj is set to unsigned int (OP_SAVEVAR_UINT). fine
- 2. `%stoObj.x = 0;` It need to lookup the object and does OP_LOADIMMED_STR => OP_SETCURVAR => OP_LOADVAR_STR => OP_SETCUROBJECT
So it need to convert the integer to string every time we use %stoObj.xxx.  
SimObject* findObject(const char* name) is used  in OP_SETCUROBJECT. But there are 
alternativ: SimObject* findObject(ConsoleValue*); or SimObject* findObject(const char* name);
- 3. Concept to proof: OP_LOADIMMED_STR => 

Example call :
``` 
% sto.x = 1;
0: OP_LOADIMMED_STR stk=+1 str=1
2: OP_LOADIMMED_IDENT stk=+1 str=sto
5: OP_SETCUROBJECT stk=0
6: OP_SETCURFIELD stk=0 field=x
9: OP_POP_STK stk=-1
10: OP_SAVEFIELD_FASTPATH stk=-1 (curCodeIP: 69)
11: OP_POP_STK stk=-1
12: OP_RETURN_VOID stk=0
% $sto.y = 1;
0: OP_LOADIMMED_STR stk=+1 str=1  << This saves the value "1" to the Stack
2: OP_SETCURVAR stk=0 var=$sto    << loopup variable
5: OP_LOADVAR_STR stk=+1          << set the content of $sto to the stack 
6: OP_SETCUROBJECT stk=0          << now it uses the slow int=>string and the slow findObject(const char*)
7: OP_SETCURFIELD stk=0 field=y
10: OP_POP_STK stk=-1
11: OP_SAVEFIELD_FASTPATH stk=-1 (curCodeIP: 69)
12: OP_POP_STK stk=-1
13: OP_RETURN_VOID stk=0 
```

### ElfScript 0.4c changed  OP_SETCUROBJECT to 🚀 rocket mode ;)
After my change to directly call findObject ===>  24.916u 0.166s 0:25.11 99.8%    0+0k 0+0io 0pf+0w

But i in script i don't get an advantage out of this. No matter how i try. The 
assigned var becomes string 

```
% %sto = $sto;
0: OP_SETCURVAR stk=0 var=$sto
3: OP_LOADVAR_STR stk=+1
4: OP_SAVE_LOCAL_VAR_STR stk=0 reg=2  << 💩  my rocket crash here too. $sto is integer . guess this can be fixed 
6: OP_POP_STK stk=-1
7: OP_RETURN_VOID stk=0

```

**fixed assign from global int var** .. still call OP_SAVE_LOCAL_VAR_STR but check which type the stack
var have and set int/float/string ... my BaseElf starfield changed from named to
local var assigned by the global object var raised up from 550 to 900 fps - holy cow.

---

So next one - DefineEngineMethod( SimObject, getId, S32 ....

let see what the stack says in OP_SAVE_LOCAL_VAR_STR  .. .. let me double check 
but we get an integer --- thats fine!!! 

```
% %sto = sto.getId();                                         
0: OP_PUSH_FRAME stk=0 count=1
2: OP_LOADIMMED_IDENT stk=+1 str=sto
5: OP_PUSH stk=-1
6: OP_CALLFUNC stk=+1 name=getId nspace=(null) callType=MethodCall
12: OP_SAVE_LOCAL_VAR_STR stk=0 reg=2    << 💩  my rocket crash here 
14: OP_POP_STK stk=-1
15: OP_RETURN_VOID stk=0
```

- [X] Fine Fine but to make it complete - i also need to change global vars: `OP_SAVEVAR_STR`

### 🚀 Second rocket stage ignited: OP_SAVE_LOCAL_VAR_STR and OP_SAVEVAR_STR*

### Code:

```
#define JLOOPS 25
#define ILOOPS 1000000

%stoObj = new PointStorageObject();

%stoObj.x = 0;
for (%j = 0; %j < JLOOPS; %j++) {
    for (%i = 0; %i < ILOOPS; %i++) {
        %stoObj.x ++;
    }
    echo("SUM (++) IS:" SPC %stoObj.x);
    for (%i = 0; %i < ILOOPS; %i++) {
        %stoObj.x --;
    }
    echo("SUM (--) IS:" SPC %stoObj.x);
    %stoObj.x = 66;
    echo("set Sum to 66 == " SPC %stoObj.x * 1);
    for (%i = 0; %i < ILOOPS; %i++) {
        %stoObj.x *= %i + 1;
        %stoObj.x /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC %stoObj.x);
    for (%i = 0; %i < ILOOPS / 2.0; %i++) {
        %ran = getRandomF(%i);
        %stoObj.x -= %ran;
        %stoObj.x += %ran;
    }
    echo("SUM (rand +-) IS:" SPC %stoObj.x);
}
%stoObj.x -= 66.0 ;
echo("---------------------");
echo("---------------------");
echo("Final sum should be 0 == ", %stoObj.x);
echo("---------------------");
echo("---------------------");

```

# Dynamic (string) Field - named again

- Version 0.4a (RelWithDebug) : 127.546u 2.019s 2:09.75 99.8%   0+0k 0+0io 0pf+0w
- OGE3D using ScriptObject: 137.226u 0.296s 2:17.73 99.8% 0+0k 0+136io 0pf+0w
- Version 0.4c 🚀 (RelWithDebug) : 125.068u 1.963s 2:07.38 99.7%   0+0k 1416+0io 8pf+0w
- Version 0.4d 🚀 (RelWithDebug) : 124.605u 1.840s 2:06.71 99.7%   0+0k 0+0io 0pf+0w
- Version 0.4e 🚀 (RelWithDebug) : 114.157u 1.692s 1:56.06 99.8%   0+0k 0+0io 0pf+0w
- Version 0.4f 🚀 (RelWithDebug) : 22.012u 0.000s 0:22.04 99.8%    0+0k 0+0io 0pf+0w
- Version 0.4g 🚀 (RelWithDebug) : 22.104u 0.000s 0:22.12 99.9%    0+0k 0+0io 0pf+0w
- Version 0.4h🚀 (RelWithDebug) : 21.901u 0.005s 0:21.97 99.6%    0+0k 8+0io 0pf+0w


---
### same test but using local var (docu/speedtest/elf/test_dynamic_fields_localvar.elf)
- Version 0.4h🚀 (RelWithDebug) : 14.863u 0.001s 0:14.90 99.7%    0+0k 0+0io 0pf+0w

Note: dynX must have TypeF32 set, else it fall back to string.
---

**OGE3D here nearly on same speed, since ElfScript have no Dyanmic Field optimations**

### 0.4c/d This my problem child: 

- Dynamic fields in the object is one of the coolest features in Elf(Torque)Script.
- I could get a better result with local var instead of named now, but is not a 
big difference.
- It store the values in a fast Map as strings but i need the values also as float and int. 
    
- value is stored in SimFieldDictionary: char *value;

    - void SimFieldDictionary::setFieldValue(StringTableEntry slotName, const char *value)
    - SimFieldDictionary::Entry *SimFieldDictionary::addEntry(U32 bucket, StringTableEntry slotName, ConsoleBaseType* type, char* value)
    - const char *SimFieldDictionary::getFieldValue(StringTableEntry slotName)
    - void SimFieldDictionary::printFields(SimObject *obj)
    - Entry() : slotName(StringTable->EmptyString()), value(NULL), next(NULL), type(NULL) {};
    - char *value;

```
% $sto = new PointStorageObject(sto);$Debug::DumpByteCode=1; 
% $sto.self = $sto;
0: OP_SETCURVAR stk=0 var=$sto
3: OP_LOADVAR_STR stk=+1
4: OP_SETCURVAR stk=0 var=$sto
7: OP_LOADVAR_STR stk=+1
8: OP_SETCUROBJECT stk=0
9: OP_SETCURFIELD stk=0 field=self
12: OP_POP_STK stk=-1
13: OP_SAVEFIELD_FASTPATH stk=-1 (curCodeIP: 69)
14: OP_POP_STK stk=-1
15: OP_RETURN_VOID stk=0

```
OP_SAVEFIELD_FASTPATH is fine but curObject->findField(curField); is nullptr because
it's dynamic field also fine. it enter SimObject::setDataField so we are in slow string mode. 
It jumps to DynField.. but now it check for  `if(!array)` only. Not if it's also have 
an entry. 

test_dynamic_fields_localvar.elf 
==> 106.306u 1.783s 1:48.25 99.8%   0+0k 0+0io 0pf+0w


same on OP_LOADFIELD_STR => `if(!array)`

test_dynamic_fields_localvar.elf
==> 106.732u 1.770s 1:48.67 99.8%   0+0k 0+0io 0pf+0w

??? slower ??? should be faster .. maybe my laptop is tired ... 


==> 114.157u 1.692s 1:56.06 99.8%   0+0k 0+0io 0pf+0w
overall 10sec faster ... when i want more i need to add float/int to SimFieldDictionary
or instad of value a ConsoleValue object ?! << this would make sense or not ? 


- [X] replaced const char* value with ConsoleValue mValue  -
    ==> "named" speed test: 114.462u 1.952s 1:56.65 99.7%   0+0k 0+0io 0pf+0w
    thats fine same as before but with ConsoleValue in place 
    
- [X] use types in mValue SAVE:
     bool pushDataField(StringTableEntry slotName, const char *array, ConsoleValue* stackP, S32 type_OP_path);
     
     called from OP_SAVEFIELD_FASTPATH
        
        - implemented status quo
        - wrote new implemenation based on the incomming stack, the data is set.
        - added also ConsoleValueType in SimFieldDictionary::setFieldType (float/int/string)
        - bad: 112.777u 1.854s 1:54.86 99.7%   0+0k 0+0io 0pf+0w

     

- [X] use types in mValue LOAD:
        - implemented fast set of stack 
        - 113.513u 1.814s 1:55.47 99.8%   0+0k 0+0io 0pf+0w


- [X] Find what is missing 
    I made get and set and also added typed but is still slow !!!!
    - also added FLT_/INT_ oto this path 
    - => shit => 115.705u 1.714s 1:57.69 99.7%   0+0k 192+0io 2pf+0w

    Everything seams to work fine but somewhere it gets slow down ....
    i break the test script in parts :
    
        - sto.DynX ++; : 20.060u 0.365s 0:20.46 99.8%    0+0k 0+0io 0pf+0w
        - sto.DynX -- ; : 19.625u 0.398s 0:20.06 99.7%    0+0k 0+0io 0pf+0w
        - */ : 37.276u 0.683s 0:38.00 99.8%    0+0k 0+0io 0pf+0w
        - rand +-: 27.374u 0.296s 0:27.71 99.8%    0+0k 0+0io 0pf+0w
    
    All slow nothing special 
    - setrand only: 10.443u 0.236s 0:10.69 99.8%    0+0k 0+0io 0pf+0w

    👾 LOL! I had threaded on in releasebuild where the changes are not implemented so far
    => 22.338u 0.009s 0:22.39 99.7%    0+0k 0+0io 0pf+0w
    
    🐞 the values are all ZERO ?! << FIXED
    
    22.151u 0.000s 0:22.17 99.9%    0+0k 0+0io 0pf+0w
    
    ==> SAME SPEED AS STATIC FIELDS  - ROCK AND ROLL
    

    
### Version 0.4f:

- [X] lot of testing << some but will be continued
- [X] cleanup compiled eval or completly switch to threaded!

        - [X] make threaded as default add and test the latest changes!!! 
            -  OP_LOADFIELD_UINT
            -  OP_LOADFIELD_FLT
            -  OP_LOADFIELD_STR
            -  OP_SAVEFIELD_FLT:
            -  OP_SAVEFIELD_UINT:
            -  OP_SAVEFIELD_FASTPATH:
        - [~] remove GarbageCollection shit
        - [X] remove fast path ifdefs and make it default 
        - [X] ELFSCRIPT_PREPROCESSOR also as default
        
- [ ] Make a memleak check after that !!!!!!!!!!!

---

## Code: 

```
#define JLOOPS 25
#define ILOOPS 1000000

%sto = new PointStorageObject(){
    TypeF32 DynX = 0; // here is the beef!
};

sto.DynX = 0;
for (%j = 0; %j < JLOOPS; %j++) {
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.DynX ++;
    }
    echo("SUM (++) IS:" SPC sto.DynX);
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.DynX --;
    }
    echo("SUM (--) IS:" SPC sto.DynX);
    sto.DynX = 66;
    echo("set Sum to 66 == " SPC sto.DynX * 1);
    for (%i = 0; %i < ILOOPS; %i++) {
        sto.DynX *= %i + 1;
        sto.DynX /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC sto.DynX);
    for (%i = 0; %i < ILOOPS / 2.0; %i++) {
        %ran = getRandomF(%i);
        sto.DynX -= %ran;
        sto.DynX += %ran;
    }
    echo("SUM (rand +-) IS:" SPC sto.DynX);
}
sto.DynX -= 66.0 ;
echo("---------------------");
echo("---------------------");
echo("Final sum should be 0 == ", sto.DynX);
echo("---------------------");
echo("---------------------");
```
