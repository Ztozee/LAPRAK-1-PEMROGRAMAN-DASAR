import math

Alas = 5
Tinggi = 12
Miring = (int)(math.sqrt(Alas**2 + Tinggi**2))
Keliling = (int)(Alas + Tinggi + Miring)
Luas = (int)((Alas * Tinggi) / 2)

print("Diketahui :")
print("Alas = {} cm".format(Alas))
print("Tinggi = {} cm".format(Tinggi))
print()
print("Jawab :")
print("Sisi A = {} cm".format(Alas))
print("Sisi B = {} cm".format(Tinggi))
print("Sisi C = {} cm".format(Miring))
print("Keliling = {} cm".format(Keliling))
print("Luas = {} cm".format(Luas))