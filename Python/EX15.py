#cáculo do imc

peso = float(input("Peso: "))
altura = float(input("Altura: "))

imc = peso / (altura**2)

if imc < 20:
    print("Abaixo do peso.")
elif  imc >= 25:
    print("Acima do peso.")
else:
    print("peso ideal")
