import time
i = 1

while i <= 100:
  result = ""
  if i % 3 == 0:
    result += "Fizz"
  if i % 5 == 0:
    result += "Buzz"
  if result == "":
    result = i
  print(result)
  i += 1
  time.sleep(1)
