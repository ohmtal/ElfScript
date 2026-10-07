local function fib(n)
  if n <= 1 then
    return n
  end
  return fib(n - 1) + fib(n - 2)
end

local i = 33
print("running fib with number:", i)
print(fib(i))
