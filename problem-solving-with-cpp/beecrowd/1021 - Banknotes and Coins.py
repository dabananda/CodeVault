Money = float(input())
bankNote = int(Money)

print("NOTAS:")
extra = bankNote % 100
bankNote = bankNote / 100
print(int(bankNote), "nota(s) de R$ 100.00")
extra2 = extra % 50
bankNote = extra / 50
print(int(bankNote), "nota(s) de R$ 50.00")
extra3 = extra2 % 20
bankNote = extra2 / 20
print(int(bankNote), "nota(s) de R$ 20.00")
extra4 = extra3 % 10
bankNote = extra3 / 10
print(int(bankNote), "nota(s) de R$ 10.00")
extra5 = extra4 % 5
bankNote = extra4 / 5
print(int(bankNote), "nota(s) de R$ 5.00")
extra6 = extra5 % 2
bankNote = extra5 / 2
print(int(bankNote), "nota(s) de R$ 2.00")

print("MOEDAS:")
extra7 = extra6 % 1
bankNote = extra6 / 1
print(int(bankNote), "moeda(s) de R$ 1.00")

Coin = Money - int(Money)
newCoin = Coin * 100
newCoinInt = int(newCoin)
extraCoin1 = newCoinInt % 50
Coin50 = int(newCoinInt / 50)
print(Coin50, "moeda(s) de R$ 0.50")
extraCoin2 = extraCoin1 % 25
Coin25 = int(extraCoin1 / 25)
print(Coin25, "moeda(s) de R$ 0.25")
extraCoin3 = extraCoin2 % 10
Coin10 = int(extraCoin2 / 10)
print(Coin10, "moeda(s) de R$ 0.10")
extraCoin4 = extraCoin3 % 5
Coin5 = int(extraCoin3 / 5)
print(Coin5, "moeda(s) de R$ 0.05")
extraCoin5 = extraCoin4 % 1
Coin1 = int(extraCoin4 / 1)
print(Coin1, "moeda(s) de R$ 0.01")
