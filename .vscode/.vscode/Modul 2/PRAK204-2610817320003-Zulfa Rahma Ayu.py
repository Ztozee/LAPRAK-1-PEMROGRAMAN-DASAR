pi = 22.0 / 7.0  
r = float(input())
t = float(input())

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}\n")

input_diagonal = input().split()
if len(input_diagonal) == 2:
    r, t = map(float, input_diagonal)
    
    volume = pi * r * r * t
    luas = 2 * pi * r * (r + t)
    keliling = 2 * pi * r
    
    print(f"Volume = {volume:.2f}")
    print(f"Luas = {luas:.2f}")
    print(f"Keliling = {keliling:.2f}")