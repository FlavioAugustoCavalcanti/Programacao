vetor_1=[]
vetor_2=[]

for i in range(0, 20, 1):
    x = int(input("N%d: " %(i+1)))
    vetor_1.append(x)

n = int(input("Fator multiplicativo: "))

for e in range(0, 20, 1):
    v = vetor_1[e] * n
    vetor_2.append(v)

print(f"Vetor: {vetor_2}")






'''
#criação da lista(vetor) e inicialização de variáveis
vetor_1 = list(range(20))
x=0

#preenchimento da lista - função len() retorna o tamanho da lista, no caso 'vetor_1'
while x < len(vetor_1):
    vetor_1[x] = int(input("N%d: " % x))
    x+=1

#imprime lista digitada
print(f"Vetor digitado: \n{vetor_1}")

#faz uma cópia da lista 'vetor_1'
vetor_2 = vetor_1[:]

#solicita valor para multiplicação
num = int(input("Fator de multiplicação: "))

#preenche a cópia da lista com o produto de cada elemento por 'num'
for e in range(0,len(vetor_2),1):
    vetor_2[e] *= num 

#imprime resultado
print(f"Vetor multiplicado por {num}: \n{vetor_2}")

# #imprime resultado numero por número
# for e in range(0,len(vetor_2),1):
#     print("N: %d" % vetor_2[e])

'''