/* Solicita valores de base e altura do terreno
e indica se o mesmo é grande ou pequeno */

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

    else
    {
        printf("Terreno pequeno.");
    }
    
    
    return 0;
}