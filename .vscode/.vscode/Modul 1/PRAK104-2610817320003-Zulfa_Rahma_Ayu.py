A = 400000
B = 350000

DiskonA = int((A * 13) / 100)
DiskonB = int((B * 21) / 100)
HargaA = A - DiskonA
HargaB = B - DiskonB

print("Harga Sepatu A adalah", A)
print("Harga Sepatu B adalah", B)
print("Sepatu A mendapat diskon 13%% sehingga harganya menjadi", HargaA)
print("Sepatu B mendapat diskon 21%% sehingga harganya menjadi", HargaB)