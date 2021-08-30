#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int aresta, area;

    printf("Digite a aresta do quadrado:");
    scanf("%i", &aresta);

    area = aresta * aresta;

    printf("Área do quadrado igual a: %i", area);
    return 0;
}
