n = int(input())
arr = list(map(int, input().split()))
ans = 0
flag = False

while flag == False:
  for i, num in enumerate(arr):
    if num % 2 != 0:
      flag = True
      break
    else:
      arr[i] = num / 2

  if flag == True:
    break;
  else:
    ans += 1

print(ans)