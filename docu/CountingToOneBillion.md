# I. For loop test counting to one billion (1000000000)

- Lua (5.5.0): 3.504u 0.003s 0:03.52 99.4%     0+0k 0+0io 0pf+0w
- ElfScript(0.4a (*3)): 15.979u 0.000s 0:15.99 99.8%    0+0k 0+0io 0pf+0w
- ElfScript(0.4a (*1)): 16.154u 0.013s 0:16.22 99.6%    0+0k 0+0io 0pf+0w
- Python 3 (3.14.6): 40.648u 0.006s 0:40.71 99.8%    0+0k 0+0io 0pf+0w
- ElfScipt(0.4a (*2)): 257.589u 0.023s 4:17.94 99.8%   0+0k 0+0io 0pf+0w
- Bash (5.3.15(1) (*4)): Canceled after: 2151.499u 0.891s 36:04.93 99.4%       0+0k 0+0io 0pf+0w



(*1) ElfScript from raylib-ElfScript **RelWithDeb** build :
./raylib-elfscript --script /home/tom/work/counting/counter.elf --noloop

(*2) HelloElf **Debug** build 
time /opt/ElfScript/HelloElf --script counter.elf

(*3) HelloElf **RelWithDeb** build 
time /opt/ElfScript/HelloElf --script counter.elf

(*4) After some time (10 min or so) i started working with the pc. I had to cancel 

# II. For loop test counting to one billion (1000000000) and output %

- adding if/modulo/div/print

``` 
-- Lua:
local i = 0
for i = 1, 1000000000 do
     if i % 10000000 == 0 then print (i / 10000000 ,"%") end
end
```

``` 
// ElfScript:
for (%i=0; %i<1000000000; %i++) {
    if ((%i % 10000000) == 0) print((%i / 10000000),"%");
}
```

``` 
# Python:
for i in range(0, 1000000000):
    if i % 10000000 == 0:
        print(i / 10000000, "%")

```

- LuaJit (2.1.1784580905): 4.268u 0.000s 0:04.27 99.7%     0+0k 0+0io 0pf+0w
- Lua (5.5.0): 20.083u 0.011s 0:20.13 99.8%    0+0k 0+0io 0pf+0w
- ElfScipt(0.4a (*3)): 52.887u 0.003s 0:52.94 99.8%    0+0k 0+0io 0pf+0w
- Python 3 (3.14.6): 89.470u 0.026s 1:29.74 99.7%    0+0k 0+0io 0pf+0w


