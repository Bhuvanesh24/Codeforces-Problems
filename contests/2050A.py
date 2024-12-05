for _ in range(int(input())):
    n,m = map(int,input().split())
    words = []
    for i in range(n):
        words.append(input())
    current_length = 0
    x = 0

    for word in words:
        word_length = len(word)
        if current_length + word_length > m:
            break
        current_length += word_length
        x += 1

    print(x)