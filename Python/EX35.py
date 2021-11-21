numeros=[]

for i in range(0, 20, 1):
    x=int(input("N%d: " %(i+1)))
    numeros.append(x)

n=int(input("Fator multiplicativo: "))

for i in range(0, 20, 1):
    numeros[i] *= n

print(f"vetor: {numeros}")





'''
numeros = list(range(20))
x=0

print("Digite os valores.")

#preenchimento do vetor - a função len() retorna o tamanho do vetor
while x < len(numeros):
    numeros[x] = int(input("N%d: " % x))
    x+=1

#imprime o vetor digitado
print(f"Vetor: {numeros}")

#solicita o valor para multiplicação
num = int(input("Fator de multiplcação: "))

#reescreve o vetor com o resultado dos produtos
for e in range(0,20,1):
    numeros[e] *= num 

#reimprime vetor
print(f"Vetor: {numeros}")
'''