#verifica maior número

print("Digite três números: ")

n1 = int(input("N: "))
n2 = int(input("N: "))
n3 = int(input("N: "))

if n1>n2:
    if n1>n3:
        print(f"Maior número: {n1}")
    else:
        print(f"Maior número: {n3}")

elif n2>n3:
    print(f"Maior número: {n2}")

else:
    print(f"Maior número: {n3}")