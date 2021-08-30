/*Verifica qual o menor numero de dois digitados*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int A, B;

    printf("Digite o primeiro numero:");
    scanf("%d", &A);

    printf("Digite o segundo numero:");
    scanf("%d", &B);

    if (A < B)
    {
        printf("O menor número é: %d", A);
    }

    else
    {
        printf("O menor numero e: %d", B);
    }
    
    
    return 0;
}
