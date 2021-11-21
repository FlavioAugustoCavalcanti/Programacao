# verifica se forma um triângulo retângulo

print("Informe os lados do triângulo.")

hip = int(input("Hip: "))
c1 = int(input("cat: "))
c2 = int(input("cat: "))

hip = hip**2

soma = (c1**2) + (c2**2)

if hip == soma:
    print("Triangulo retângulo")
else:
    print("Não é um triangulo retângulo")