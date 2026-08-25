import random

JLOOPS = 25
ILOOPS = 1000000
localX = 0

for j in range(JLOOPS):
    for i in range(ILOOPS):
        localX = localX + 1
    print(f"SUM (++) IS: {localX}")

    for i in range(ILOOPS):
        localX = localX - 1
    print(f"SUM (--) IS: {localX}")

    localX = 66
    print(f"set Sum to 66 == {localX * 1}")

    for i in range(ILOOPS):
        localX = localX * (i + 1)
        localX = localX / (i + 1)
    print(f"SUM (*/ %i+1) IS: {localX}")

    for i in range(int(ILOOPS / 2.0)):
        ran = random.random() * i
        localX = localX - ran
        localX = localX + ran
    print(f"SUM (rand +-) IS: {localX}")

localX = localX - 66.0
print("---------------------")
print("---------------------")
print(f"Final sum should be 0 == {localX}")
print("---------------------")
print("---------------------")
