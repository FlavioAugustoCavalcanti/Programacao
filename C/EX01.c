#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Digite a base do retângulo:");
    scanf("%i", &base);

    printf("Digite a altura do retãngulo:");
    scanf("%i", &altura);

    area = base * altura;

    printf("A área do retângulo é: %i", area);
    
    return 0;
}
