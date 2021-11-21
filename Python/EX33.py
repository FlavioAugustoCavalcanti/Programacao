# Armazena 10 numeros e os mostra em ordem inversa a da digitação
numeros=[]

for i in range(0, 10, 1):
    x=int(input("N%d: " %(i+1)))
    numeros.append(x)

for i in range(9, -1, -1):
    print(numeros[i])









# Armazena 10 numeros e os mostra em ordem inversa a da digitação

"""
numeros=[0,0,0,0,0,0,0,0,0,0]
x=0

while x<10:
    numeros[x]=int(input("Número %d: " %(x+1)))
    x+=1

# 'x' tem que ser igual a '9' pois, os endereços vão de '0 a 9' o que gera 10 posições
x=9 

while x>=0:
    print("%d" % numeros[x])
    x=x-1

# print(numeros)
# print(x)

"""