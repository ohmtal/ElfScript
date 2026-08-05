# ElfScript Simple Speed Test:

As expected, the static field followed by the global are the fastest. Also 
after I added fast path to static fields. But I also optimized the local and
global vars. I need to get a compare to the current Torque3D or OGE3D Script ..
hard to setup to lauch a single script file ^^. 


## Local variable:

- Version 0.4a (RelWithDebug) : 15.913u 0.198s 0:16.16 99.6%    0+0k 0+0io 0pf+0w

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
