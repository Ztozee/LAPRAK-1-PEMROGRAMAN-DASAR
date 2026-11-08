while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = input("Masukkan Pilihan : ")
    
    if pilihan == '5':
        print("Terimakasih, telah menggunakan kalkulator ZULFA RAHMA AYU")
        break
    elif pilihan in ['1', '2', '3', '4']:
        nilai1 = float(input("Masukkan nilai pertama : "))
        nilai2 = float(input("Masukkan nilai kedua : "))
        
        if pilihan == '1':
            hasil = nilai1 + nilai2
            operasi = "penjumlahan"
        elif pilihan == '2':
            hasil = nilai1 - nilai2
            operasi = "pengurangan"
        elif pilihan == '3':
            hasil = nilai1 * nilai2
            operasi = "perkalian"
        elif pilihan == '4':
            if nilai2 != 0:
                hasil = nilai1 / nilai2
            else:
                hasil = float('inf') 
            operasi = "pembagian"
            
        print(f"Hasil {operasi} antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}\n")
    else:
        print("Input anda salah, silahkan coba lagi\n")