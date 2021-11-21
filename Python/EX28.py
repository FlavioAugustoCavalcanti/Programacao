#tabuadas
continuar = 's'
a = 1

while continuar == 's':
   
   if a <= 20:
       for i in range(0, 11, 1):
           r = a * i
           print(f"{a} * {i} = {r}")
              
   else:
       break

   a +=1
   continuar = input("Continuar: s-sim ou n-não: ")    
    