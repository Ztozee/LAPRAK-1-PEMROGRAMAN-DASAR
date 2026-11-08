for _ in range(3):

    n = int(input())

    ganjil = [str(i) for i in range(1, n + 1, 2)]
    print(" ".join(ganjil))

    start_even = n if n % 2 == 0 else n - 1
    genap = [str(i) for i in range(start_even, 1, -2)]
    print(" ".join(genap))
    print()