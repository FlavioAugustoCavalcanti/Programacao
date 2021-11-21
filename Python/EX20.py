#cálculo da média

p1 = float(input("Nota P1: "))
p2 = float(input("Nota P2: "))

media = (p1 + (2*p2)) / 3

if media >= 5:
    print("Aprovado.")
    
else:
    print("Reprovado.")