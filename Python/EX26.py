#tabuada de um número qualquer

n = int(input("N: "))

while n <= 0:
    n = int(input("N: "))

print(f"Tabuada do {n}")

i = 0

while i < 11:
    r = n * i
    print(f"{n} * {i} = {r}")
    i+= 1


