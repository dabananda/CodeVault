bankNote = int(input())
print(bankNote)
extra = bankNote % 100
bankNote = bankNote / 100
print(int(bankNote), "nota(s) de R$ 100,00")
extra2 = extra % 50
bankNote = extra / 50
print(int(bankNote), "nota(s) de R$ 50,00")
extra3 = extra2 % 20
bankNote = extra2 / 20
print(int(bankNote), "nota(s) de R$ 20,00")
extra4 = extra3 % 10
bankNote = extra3 / 10
print(int(bankNote), "nota(s) de R$ 10,00")
extra5 = extra4 % 5
bankNote = extra4 / 5
print(int(bankNote), "nota(s) de R$ 5,00")
extra6 = extra5 % 2
bankNote = extra5 / 2
print(int(bankNote), "nota(s) de R$ 2,00")
extra7 = extra6 % 1
bankNote = extra6 / 1
print(int(bankNote), "nota(s) de R$ 1,00")
