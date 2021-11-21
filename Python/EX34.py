#acha o maior valor dentre os digitados
numeros=[]

for i in range(0, 10, 1):
    x=int(input("N%d: " %(i+1)))
    numeros.append(x)

print(f"vetor: {numeros}")

num = numeros[0]

for u in range(0,10,1):
    
    if num > numeros[u]:
        num
    else:
        num = numeros[u]

print(f"Maior número digitado: {num}")




'''
numeros = list(range(10))

x=0

for i in range(1,11,1):
    numeros[x]=int(input("N%d: " % (x+1)))
    x+=1

print(f"Vetor: {numeros}")

num = numeros[0]

for u in range(0,10,1):
    
    if num > numeros[u]:
        num
    else:
        num = numeros[u]

print(f"Maior número digitado: {num}")
'''