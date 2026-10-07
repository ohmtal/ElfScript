def fib(n)
  return n if n <= 1
  fib(n - 1) + fib(n - 2)
end

i = 33
print "running fib with number:", i , "\n"
puts fib(i)
