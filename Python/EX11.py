#exibe o maior numero ou diz que são iguais

print("Digite dois números: ")

n1 = int(input("N: "))
n2 = int(input("N: "))

if n1 > n2:
    print(f"Maior número: {n1}")
elif n1 < n2:
    print(f"Maior númeor: {n2}")
else:
    print("Os números são iguais!")