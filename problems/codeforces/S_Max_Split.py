s = input()
flag = 0
count = 0
start = 0
list = []
for i, char in enumerate(s):
  if char == 'L':
    flag += 1
  else:
    flag -= 1

  if flag == 0:
    count += 1
    list.append(s[start:i + 1])
    start = i + 1

print(count)
for string in list:
  print(string)