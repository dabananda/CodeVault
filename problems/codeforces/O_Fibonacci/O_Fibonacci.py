def fibo(n, memo={}):
  if n in memo:
    return memo[n]
  elif n == 1 or n == 2:
    return n - 1  
  memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo)
  return memo[n]

n = int(input())
print(fibo(n))
