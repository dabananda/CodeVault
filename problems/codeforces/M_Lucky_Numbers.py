def lucky(num):
  for n in str(num):
    if n != '4' and n != '7':
      return False
  return True

a, b = map(int, input().split())
arr = []
for n in range(a, b + 1):
  if lucky(n):
    arr.append(n)

if not arr:
  print(-1)
else:
  print(*arr)