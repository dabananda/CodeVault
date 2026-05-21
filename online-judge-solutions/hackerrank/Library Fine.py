firstInput = input().strip().split()
secondInput = input().strip().split()
if firstInput[2] < secondInput[2]:
    print(0)
else:
    if firstInput[2] > secondInput[2]:
        print(10000)
    elif firstInput[1] <= secondInput[1]:
        if firstInput[1] == secondInput[1] and firstInput[0] > secondInput[0]:
            print(abs((int(firstInput[0])) - (int(secondInput[0]))) * 15)
        else:
            print(0)
    else:
        print(abs((int(firstInput[1])) - (int(secondInput[1]))) * 500)
