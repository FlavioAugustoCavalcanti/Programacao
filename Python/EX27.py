#tabuada num determinado intervalo

n = int(input("N: "))

while n <= 0:
   n = int(input("N: "))


a = int(input("valor inicial: "))
b = int(input("valor final: "))


while b <= a:
   b = int(input("valor final: "))


print(f"Tabuada do {n}") 

for i in range(b , (a - 1), -1):
    r = n * i
    print(f"{n} * {i} = {r}")
