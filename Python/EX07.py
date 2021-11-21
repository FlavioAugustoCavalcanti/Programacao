#cálculo do troco

print("Valores dos produtos:")

p1 = float(input("preço: "))
p2 = float(input("preço: "))
p3 = float(input("preço: "))
p4 = float(input("preço: "))
p5 = float(input("preço: "))

soma = (p1 + p2 + p3 + p4 + p5)

print(f"Total a pagar: {soma}")

pago = float(input("Dinheiro: "))

troco = pago - soma

print("Troco: %3.2f " %troco )

print(f"Troco: {troco:0.2f}")