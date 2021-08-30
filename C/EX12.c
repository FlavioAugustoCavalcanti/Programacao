/*Calcula área e compara se é maior ou menor que 100*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Valor da base: ");
    scanf("%d", &base);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = (base * altura);
    
    if (area > 100)
    {
        printf("Terreno grande.");
    }
    
    return 0;
}
