while True:
    numbers = list(map(int, input().strip().split()))
    if numbers[0] == 0 == numbers[1]:
        break
    else:
        x = str(numbers[0])
        y = str(numbers[1])
        x_length = len(x)
        y_length = len(y)
        if x_length > y_length:
            n = x_length - y_length
            a = "0" * n
            value1 = a + y
            value2 = x
        elif x_length < y_length:
            n = y_length - x_length
            a = "0" * n
            value1 = a + x
            value2 = y
        else:
            value1 = x
            value2 = y
        length = len(value1)
        carry_count = 0
        flag = 0
        for item in range(0, length, 1):
            if int(value1[length - 1 - item]) + int(value2[len(value2) - 1 - item]) + flag > 9:
                carry_count += 1
                flag = 1
            else:
                flag = 0
        if carry_count == 0:
            print("No carry operation.")
        elif carry_count == 1:
            print("1 carry operation.")
        else:
            print(f"{carry_count} carry operations.")
