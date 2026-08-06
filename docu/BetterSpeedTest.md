# ElfScript Simple Speed Test:

As expected, the static field followed by the global are the fastest. Also 
after I added fast path to static fields. But I also optimized the local and
global vars. I need to get a compare to the current Torque3D or OGE3D Script ..
hard to setup to lauch a single script file. 

OGE3D: time ./OhmtalGame_Linux.bin -dedicated -game speedtest


## Local variable:

- Version 0.4a (RelWithDebug) : 15.913u 0.198s 0:16.16 99.6%    0+0k 0+0io 0pf+0w
- OGE3D (current 26-08-05) : 33.268u 0.299s 0:33.61 99.8%  0+0k 0+24io 0pf+0w

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

Here 0.4c is slower than 0.4a (no idea why) - but 0.4b was at the same speed so rocket
change did not cause it. Use local var is now the fastest. global is slightly 
slower than local but still faster than named. 




**Ok - it's slower than a dynamic field - here ElfScript fastpath really shine :)**

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


**OGE3D here nearly on same speed, since ElfScript have no Dyanmic Field optimations**

### 0.4c This my problem child: 

- Dynamic fields in the object is one of the coolest features in Elf(Torque)Script.
- I could get a better result with local var instead of named now, but is not a 
big difference.
- It store the values in a fast Map as strings but i need the values also as float and int. 
    - Maybe tomorrow ;) 

---

## Code: 

```
#define JLOOPS 25
#define ILOOPS 1000000

new PointStorageObject(sto);

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
