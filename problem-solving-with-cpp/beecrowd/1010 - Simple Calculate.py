product1 = list(map(float, input().split()))
product2 = list(map(float, input().split()))
price1 = product1[1] * product1[2]
price2 = product2[1] * product2[2]
total = price1 + price2
print("VALOR A PAGAR: R$ %.2f" % total)
