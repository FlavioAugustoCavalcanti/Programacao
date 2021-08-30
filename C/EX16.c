/*Solicita 3 números, verifica condição de existência de um triângulo
e classifica o triângulo. Condição de existência de um triângulo:
'A soma de dois lados tem que ser maior que o outro. Isto para os três lados'*/

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int s, n1, n2, n3; 

    printf("Digite as medidas referente aos lados do triangulo: \nn1:");
    scanf("%d", &n1);

    printf("n2:");
    scanf("%d", &n2);

    printf("n3:");
    scanf("%d", &n3);

    s = n1 + n2;    //soma 'n1' e 'n2'. Atribui valor para 's'

    if (s > n3)     //verifica se a soma de 'n1' e 'n2' é maior que 'n3'
    {
        s = n1 + n3;    // Se verdadeiro soma 'n1' e 'n3'. Atribui valor para 's'

        if (s > n2)     // verifica se soma de 'n1' e 'n3' é maior que 'n2'
        {
            s = n2 + n3;    // se verdadeiro soma 'n2' e 'n3'. Atribui valor para 's'

            if (s > n1)     // verifica se soma de 'n2' e 'n3' é maior que 'n1'. Se verdadeiro forma triângulo.
            {
                if (n1 == n2)   // se lados iguais continua a verificar
                {
                    if (n2 == n3)   //se verdadeiro todos os lados são iguais
                    {
                        printf("Equilatero");
                    }
                    
                    else            //Senão somente dois lados iguais
                    {
                        printf("Isosceles");
                    }
                    
                }
                
                else if (n1 == n3)      //Se 'n1' e 'n2' forem diferentes verificar se 'n1' é igual à 'n3'
                {
                    printf("Isoceles"); // se verdadeiro "Isósceles"
                }

                else if (n3 == n2)      // Se 'n3' e 'n2' forem iguais "Isósceles"
                {
                    printf("Isosceles");
                }
                
                else                    //Senão todos os lados diferentes. "Escaleno"
                {
                    printf("Escaleno");
                }
                               
            }
            
            else    //Se soma de 'n2' e 'n3' for menor que 'n1' não forma um triângulo 
            {
                printf("Nao forma um triangulo");
            }
            
        }
        
        else        //Se soma de 'n1' e 'n3' for menor que 'n2' não forma um triângulo 
        {
            printf("Nao forma um triangulo");
        }
        
        
    }
    
    else            //Se soma de 'n1' e 'n2' for menor que 'n3' não forma um triângulo 
    {
        printf("Nao forma um triangulo");
    }  
    
    return 0;
}
