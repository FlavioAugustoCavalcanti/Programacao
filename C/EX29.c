#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int soma, i, r;

    soma=0;
    i=0;
    r=0;

    while (i<=100)
    {
        //soma = soma + i;
        
        soma = r + i;
        printf("\n%i + %i = %i", r, i, soma);
        r = soma;
        i++;
    }

    printf("\nSoma dos numeros positivos de um a cem e: %i",soma);
    
    return 0;
}
