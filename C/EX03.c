#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Base do triangulo: ");
    scanf("%i", &base);

    printf("Altura do triangulo: ");
    scanf("%i", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %i", area);

    return 0;
}
