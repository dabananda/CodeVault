from math import *

values = list(map(float, input().split()))
A = values[0]
B = values[1]
C = values[2]
x = sqrt((B * B) - 4 * A * C)  # Error Occurs
if x < 0 or A == 0:
    print("Impossivel calcular")
else:
    R1 = ((- B + x) / (2 * A))
    R2 = ((- B - x) / (2 * A))
    print("R1 = {:.5f}".format(R1))
    print("R2 = {:.5f}".format(R2))
