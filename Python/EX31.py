#série de BERGAMASCHI

print("Série de BERGAMASCHI")

#inicialização de variáveis
a = 1
b = 1
c = 1
d = 0
i = 0


#imprime os três primeiros números da série
while (i < 3):
    print(f"{c}")
    i+=1


i = 0


#apresenta os 20 números da serie
while (i < 20):
    d = a + b + c
    a = b
    b = c
    c = d
    print(f"{d}")
    i+=1

