/*Verifica qual o maior numero, ou se são iguais*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A, B;

    printf("Primeiro numero:");
    scanf("%d", &A);

    printf("Segunto numero:");
    scanf("%d", &B);

    if (A > B)
    {
        printf("O maior numero e: %d", A);
    }

    else if (A < B)
    {
        printf("O maior numero e: %d", B);
    }
    
    else
    {
        printf("Os numeros sao iguais!");
    }
    
    
    return 0;
}
