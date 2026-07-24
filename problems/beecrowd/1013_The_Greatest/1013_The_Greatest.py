values = list(map(int, input().split()))
a = values[0]
b = values[1]
s = values[2]
maximum = a
for x in values:
    if x > maximum:
        maximum = x
print(maximum, "eh o maior")
