#série de FIBONACCI

print("Série de FIBONACCI")

a = 0
b = 0
c = 1
i = 1

a = c

print(f"{c}")

while i < 31:
    c = a + b 
    b = a
    a = c
    print(f"{c}")
    i += 1

