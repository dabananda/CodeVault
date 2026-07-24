t = int(input())
for item in range(1, t + 1, 1):
    number = int(input())
    if number == 0:
        print("NULL")
    elif number > 0:
        if number % 2 == 0:
            print("EVEN POSITIVE")
        else:
            print("ODD POSITIVE")
    else:
        if number % 2 == 0:
            print("EVEN NEGATIVE")
        else:
            print("ODD NEGATIVE")
