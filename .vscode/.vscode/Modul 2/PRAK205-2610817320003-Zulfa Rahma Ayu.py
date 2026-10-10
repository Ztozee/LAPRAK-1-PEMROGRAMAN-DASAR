import math

a, b = map(float, input().split())

c = math.sqrt((b ** 2) - (a ** 2))
keliling = a + b + c
luas = 0.5 * c * a

print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2\n")

a = float(input())
b = float(input())

c = math.sqrt((b ** 2) - (a ** 2))
keliling = a + b + c
luas = 0.5 * c * a

print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")