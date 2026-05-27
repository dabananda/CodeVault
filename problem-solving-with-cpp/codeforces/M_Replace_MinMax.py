n = int(input())
arr = list(map(int, input().split()))
min_idx = arr.index(min(arr))
max_idx = arr.index(max(arr))
arr[min_idx], arr[max_idx] = arr[max_idx], arr[min_idx]
print(*arr)
