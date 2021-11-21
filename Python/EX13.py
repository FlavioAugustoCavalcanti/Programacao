#area do terreno

base = int(input("Base: "))
altura = int(input("Altura: "))

area = base * altura

if area > 100:
    print("Terreno grande.")
else:
    print("Terreno pequeno.")