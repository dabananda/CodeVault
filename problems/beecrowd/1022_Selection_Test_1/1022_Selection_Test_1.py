values = list(map(int, input().split()))
A = values[0]
B = values[1]
C = values[2]
D = values[3]
if (B > C and D > A) and ((C + D) > (A + B)) and (C > 0 and D > 0) and (A % 2 == 0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
