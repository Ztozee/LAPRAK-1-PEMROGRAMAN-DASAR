for i in range(5):
    
    a = int(input())

    if a == 0:
        print("Nol\n")
    elif 1 <= a <= 9:
        print("Satuan\n")
    elif 11 <= a <= 19:
        print("Belasan\n")
    elif a == 10 or (20 <= a <= 99):
        print("Puluhan\n")
    else:
        print("Anda Menginput Melebihi Limit Bilangan\n")