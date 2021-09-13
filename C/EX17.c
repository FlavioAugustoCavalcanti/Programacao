#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int A, B, C, hip, soma;

    printf("Digite o valor para: \nA:");
    scanf("%d", &A);

    printf("B:");
    scanf("%d", &B);

    printf("C:");
    scanf("%d", &C);

    hip = A * A;
    soma = (B*B) + (C*C);

    if (hip == soma)
    {
        printf("Triângulo retângulo");
    }

    else
    {
        hip = B * B;
        soma = (A*A) + (C*C);

        if (hip == soma)
        {
            printf("Triângulo retângulo");
        }

        else
        {
            hip = C * C;
            soma = (A*A) + (B*B);
            
            if (hip == soma)    
            {
                printf("Triângulo retângulo");
            }
            
            else
            {
                printf("Não forma um triângulo retângulo");
            }
            
            
        }
        
        
    }
    
    
        
    return 0;
}
