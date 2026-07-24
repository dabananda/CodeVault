t = int(input())
for i in range(t):
    value = int(input())
    numbers = list(map(int, input().strip().split()))
    count = 0
    length = len(numbers)
    while True:
        for item in range(length - 1):
            if numbers[item] > numbers[item + 1]:
                count = count + 1
                numbers[item], numbers[item + 1] = numbers[item + 1], numbers[item]
        counter = 0
        for x in range(length - 1):
            if numbers[x] < numbers[x + 1]:
                counter = counter + 1
        if counter == len(numbers) - 1:
            break
    print(f"Optimal train swapping takes {count} swaps.")
