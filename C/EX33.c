
/*Vetor estático de 10 posições*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração do vetor
    int vetor[10];

    //solicita 10 numeros
    printf("Digite 10 numeros: ");
    
    for (int i = 0; i < 10; i++)
    {
        printf("\n: ");
        scanf("%i", &vetor[i]);
    }

    //apresenta os 10 numeros digitados. Os numeros são mostrados na mesma linha.
    printf("Os numeros foram:\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%4i", vetor[i]);    // a instrução "%4i" apresenta o próximo n° com 4 espaços de distância
    }
    
    
    return 0;
}
