# lê dois numeros onde o segundo digitade deve ser maior que o primeiro

print("Digite dois números: ")

n1 = int(input("N1: "))
n2 = int(input("N2: "))

while n2 <= n1:
    print("Digite um número válido.")
    n2 = int(input("N2: "))

print("Fim do programa")
