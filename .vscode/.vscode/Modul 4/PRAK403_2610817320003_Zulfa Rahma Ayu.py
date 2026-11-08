for _ in range(4):
    a, b = map(int, input().split())

    if a < b:
        list1 = list(range(a, b + 1))
        list2 = list(range(b, a - 1, -1))
    else:
        list1 = list(range(a, b - 1, -1))
        list2 = list(range(b, a + 1))

    pairs = [f"{list1[i]} {list2[i]}" for i in range(len(list1))]
    print(" - ".join(pairs))
    
    print()