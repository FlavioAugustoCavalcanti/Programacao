# cálculo da soma da sequencia: 2, 5, 10, 17, 26, 37

n = int(input("N: "))

# enquanto não for um número positivo não nulo executa WHILE
while (n<=0):
   n = int(input("N: "))


#inicialização de variáveis
a = 2 
b = 3
i = 0
soma = 0


#apresenta os 'n' primeiros números da série
while (i < n):
    print(f"{a}")
    a = a + b
    b = b + 2     #gera a sequencia dos nºs ímpares
    soma = soma + a
    i += 1

"""
esta linha é um comentário de muiltiplas linhas

"""