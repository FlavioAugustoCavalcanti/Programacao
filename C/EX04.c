/* Programa que calcula a média simples de 4 numeros quaisquer */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, media;

    printf("Digite o numero n1: ");
    scanf("%f", &n1);

    printf("Digite o numero n2: ");
    scanf("%f", &n2);

    printf("Digite o numero n3: ");
    scanf("%f", &n3);

    printf("Digite o numero n4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4) / 4;

    printf("Valor da média: %f", media);


    return 0;
}
