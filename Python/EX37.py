n = int(input("Digite o tamanho da lista: "))

while (n<=0 or n>20):
    n = int(input("Digite um número válido: "))
 
vetor = list(range(n))

#print(vetor)

print("Digite os números da lista")

for e in range(0, len(vetor),1):
    vetor[e] = int(input("N%d: " % e))

print(f"Lista: {vetor}")

while True:
    num = int(input("Qual número a ser pesquisado: "))
    cont=0
    
    for e in range(0, len(vetor), 1):
        
        if num == vetor[e]:
            print(f"Posição: {e}")
            break
        else:
            cont+=1
    
    if cont == len(vetor):
        print("Número não encontrado!")

    continuar = input("Deseja continuar? s-sim ou n-não: ")

    if continuar == 'n':
        break