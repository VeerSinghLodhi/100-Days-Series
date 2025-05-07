
n = 5  # Number of rows
for i in range(1, n + 1):
    if i % 2 == 0:
        start = 0  # Even row starts with 0
    else:
        start = 1  # Odd row starts with 1

    for j in range(i):
        print(start, end=" ")
        if start == 1:
            start = 0
        else:
            start = 1
    print()
