import math

Putaran = 5
Jarak = 14
Keliling = float(Jarak) / Putaran
Jari_Jari = float(Keliling) / (2 * math.pi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman = {} putaran".format(Putaran))
print("Jarak tempuh Pak Dengklek = {} Kilometer".format(Jarak))
print()
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah {:.2f} Kilometer".format(Jari_Jari))