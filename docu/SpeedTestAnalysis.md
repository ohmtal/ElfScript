# Valgrind

```
rm callgrind.out.*
valgrind --tool=callgrind --collect-jumps=yes ./HelloElf --script docu/speedtest/elf/test_localvar.elf 
kcachegrind callgrind.out.*
```
