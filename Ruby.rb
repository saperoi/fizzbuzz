i = 1

while i <= 100
  result = ""
  if i % 3 == 0
    result += result + "Fizz"
  end
  if i % 5 == 0
    result += "Buzz"
  end
  if result == ""
    puts i
  else
    puts result
  end
  i += 1
  sleep 1
end
