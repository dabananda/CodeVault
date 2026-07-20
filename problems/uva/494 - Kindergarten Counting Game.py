while True:
    try:
        s = input()
        string_length = len(s)
        count = 0
        word_count = 0
        for item in range(0, string_length, 1):
            if 'a' <= s[item].lower() <= 'z':
                count = 1
            else:
                word_count += count
                count = 0
        print(word_count)
    except EOFError:
        break
