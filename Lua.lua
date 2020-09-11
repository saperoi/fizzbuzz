function wait(seconds)
  local start = os.time()
  repeat until os.time() > start + seconds
end
-- I found the above code on codegrepper.com, that part isn't mine.

local i = 1

while( i <= 100 )
do
  local result = ""
  if( i % 3 == 0 )
  then
    result = result .. "Fizz"
  end
  if( i % 5 == 0 )
  then
    result = result .. "Buzz"
  end
  if( result == "" )
  then
    print( i )
  else
    print( result )
  end
  i = i + 1
  wait( 1 )
end
