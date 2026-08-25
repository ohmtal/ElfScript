local JLOOPS = 25
local ILOOPS = 1000000

local localX = 0
for j = 0, JLOOPS - 1 do
    for i = 0, ILOOPS - 1 do
        localX = localX + 1
    end
    print("SUM (++) IS: " .. localX)

    for i = 0, ILOOPS - 1 do
        localX = localX - 1
    end
    print("SUM (--) IS: " .. localX)

    localX = 66
    print("set Sum to 66 == " .. (localX * 1))

    for i = 0, ILOOPS - 1 do
        localX = localX * (i + 1)
        localX = localX / (i + 1)
    end
    print("SUM (*/ %i+1) IS: " .. localX)

    for i = 0, (ILOOPS / 2.0) - 1 do
        local ran = math.random() * i
        localX = localX - ran
        localX = localX + ran
    end
    print("SUM (rand +-) IS: " .. localX)
end

localX = localX - 66.0
print("---------------------")
print("---------------------")
print("Final sum should be 0 == " .. localX)
print("---------------------")
print("---------------------")

