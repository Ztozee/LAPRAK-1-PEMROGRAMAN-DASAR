for i in range(3):
    try:
        a, b = map(int, input().split())
    except ValueError:
        a = int(input())
        b = int(input())
    
    if a <= b:
        print(f"{a} {b}")
    else:
        print(f"{b} {a}")
    print()