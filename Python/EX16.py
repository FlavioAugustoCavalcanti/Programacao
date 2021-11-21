#classifica triângulos

print("Digite os lados do triângulo.")

n1 = int(input("N: "))
n2 = int(input("N: "))
n3 = int(input("N: "))

soma = n1 + n2

if soma > n3:
    soma = n1 + n3
    
    if soma > n2:
        soma = n2 + n3

        if soma > n1:

            if n1 == n2:
                if n2 == n3:
                    print("Equilátero")
                else:
                    print("isósceles")

            elif n1 == n3:
                print("Isósceles")
            
            elif n3 == n2:
                print("Isósceles")
            
            else:
                print("escaleno")

        else:
            print("Não forma triângulo.")
    
    else:
        print("Não forma triângulo.")

else:
    print("Não forma triângulo.")