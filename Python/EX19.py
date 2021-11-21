#classificação de acordo com a velocidade

a = float(input("Aceleração: "))
vi = float(input("Velocidade inicial: "))
t = float(input("Tempo: "))

v = vi + (a*t)

if (40 < v) and (v <= 60):
    print("Velocidade permitida.")

elif (60 < v) and (v <= 80):
    print("Velocidade de cruzeiro.")

elif (80 < v) and (v <= 120):
    print("Veículo rápido.")

elif v > 120:
    print("Veículo muito rápido.")

else:
    print("Veículo muito lento.")