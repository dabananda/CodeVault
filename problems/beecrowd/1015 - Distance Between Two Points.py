from math import *

values1 = list(map(float, input().split()))
values2 = list(map(float, input().split()))
x1 = values1[0]
y1 = values1[1]
x2 = values2[0]
y2 = values2[1]
print("{:.4f}".format(sqrt(((x2 - x1) ** 2) + (y2 - y1) ** 2)))
