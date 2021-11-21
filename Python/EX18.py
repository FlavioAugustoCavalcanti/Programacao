#imc para homens e mulheres

peso = float(input("Peso: "))
altura = float(input("Altura: "))

imc = peso / (altura**2)

sexo = input("Sexo: m-masculino e f-feminino: ")

if sexo == 'f':
    
    if imc >=25:
        print("Acima do peso.")
    
    elif imc < 20:
        print("Abaixo do peso.")
    
    else:
        print("Peso ideal")

else:
    if imc >= 24:
        print("Acima do peso.")
    
    elif imc < 19:
        print("Abaixo do peso.")
    
    else:
        print("Peso ideal")
