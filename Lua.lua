function wait(seconds)
  local start = os.time()
  repeat until os.time() > start + seconds
end
-- I found the above code on codegrepper.com, that part isn't mine.

local i
i = 1
while( i <= 100 )
do
  if( i % 3 == 0 and i % 5 == 0)
  then
    print("FizzBuzz")
  elseif( i % 3 == 0 )
  then
    print("Fizz")
  elseif( i % 5 == 0 )
  then
    print ("Buzz")
  else
    print( i )
  end
  i = i + 1
  wait(1)
end
