while True:
    try:
        line = input()
        for item in range(0, len(line), 1):
            if line[item] == 'B':
                print("V", end="")
            elif line[item] == 'C':
                print("X", end="")
            elif line[item] == 'D':
                print("S", end="")
            elif line[item] == 'E':
                print("W", end="")
            elif line[item] == 'F':
                print("D", end="")
            elif line[item] == 'G':
                print("F", end="")
            elif line[item] == 'H':
                print("G", end="")
            elif line[item] == 'I':
                print("U", end="")
            elif line[item] == 'J':
                print("H", end="")
            elif line[item] == 'K':
                print("J", end="")
            elif line[item] == 'L':
                print("K", end="")
            elif line[item] == 'M':
                print("N", end="")
            elif line[item] == 'N':
                print("B", end="")
            elif line[item] == 'O':
                print("I", end="")
            elif line[item] == 'P':
                print("O", end="")
            elif line[item] == 'R':
                print("E", end="")
            elif line[item] == 'S':
                print("A", end="")
            elif line[item] == 'T':
                print("R", end="")
            elif line[item] == 'U':
                print("Y", end="")
            elif line[item] == 'V':
                print("C", end="")
            elif line[item] == 'W':
                print("Q", end="")
            elif line[item] == 'X':
                print("Z", end="")
            elif line[item] == 'Y':
                print("T", end="")
            elif line[item] == '=':
                print("-", end="")
            elif line[item] == '-':
                print("0", end="")
            elif line[item] == '0':
                print("9", end="")
            elif line[item] == '1':
                print("`", end="")
            elif line[item] == "\\":
                print("]", end="")
            elif line[item] == ']':
                print("[", end="")
            elif line[item] == '[':
                print("P", end="")
            elif line[item] == "'":
                print(";", end="")
            elif line[item] == '/':
                print(".", end="")
            elif line[item] == '.':
                print(",", end="")
            elif line[item] == ';':
                print("L", end="")
            elif line[item] == ',':
                print("M", end="")
            elif line[item] == '9':
                print("8", end="")
            elif line[item] == '8':
                print("7", end="")
            elif line[item] == '7':
                print("6", end="")
            elif line[item] == '6':
                print("5", end="")
            elif line[item] == '5':
                print("4", end="")
            elif line[item] == '4':
                print("3", end="")
            elif line[item] == '3':
                print("2", end="")
            elif line[item] == '2':
                print("1", end="")
            else:
                print(" ", end="")
        print()
    except EOFError:
        break
