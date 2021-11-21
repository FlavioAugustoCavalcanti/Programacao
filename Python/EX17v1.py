#verifica se três números quaisquer formam um triângulo retângulo

n1 = int(input("N: "))
n2 = int(input("N: "))
n3 = int(input("N: "))

h = n1**2

soma = (n2**2) + (n3**2)

if h == soma:
    print("Triângulo retângulo.1º if")

else:
    h = n2**2
    soma = (n1**2) + (n3**2)


    if h == soma:
        print("Treângulo retângulo.2º if")
    else:
        h = n3**2
        soma = (n1**2) + (n2**2)


        if h == soma:
            print("Triângulo retângulo.3º if")
        else:
            print("Não é um triângulo retângulo.")
