for _ in range(3):

    kelipatan_str, simbol = input().split()
    kelipatan = int(kelipatan_str)
    
    hasil = [simbol if i % kelipatan == 0 else str(i) for i in range(1, 51)]
    
    print(" ".join(hasil))
    print()