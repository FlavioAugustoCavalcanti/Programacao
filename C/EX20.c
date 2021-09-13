/*Calculo da média das notas - classifica em aprovado ou reprovado*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float p1, p2, media;

    printf("Informe:\n\nnota P1: ");
    scanf("%f", &p1);

    printf("\nnota P2: ");
    scanf("%f", &p2);

    media = (p1 + (2 * p2)) / 3;

    if (media >= 5 )
    {
        printf("\nAprovado");
    }

    else
    {
        printf("\nReprovado");
    }
        
    return 0;
}
