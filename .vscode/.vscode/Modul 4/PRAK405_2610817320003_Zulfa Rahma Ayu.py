for kasus in range(3):
    data_input = input().split()
    if len(data_input) < 2:
        break
    
    n = int(data_input[0])
    kelipatan = int(data_input[1])
    
    total_keseluruhan = 0
    
    for i in range(1, n + 1):
        total_baris = 0
        bagian_teks = []
    
        for j in range(i, 0, -1):
            bagian_teks.append(f"({j} * {kelipatan})")
            total_baris += j * kelipatan
            
        teks_output = " + ".join(bagian_teks)
        print(f"{teks_output} = {total_baris}")
        
        total_keseluruhan += total_baris
        
    print(total_keseluruhan)
    print()