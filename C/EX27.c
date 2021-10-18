#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n, A, B, r;

    printf("Digite um numero qualquer positivo: ");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("Digite um numero positivo: ");
        scanf("%i", &n);
    }

    printf("Informe o intervalo.\nInicia em: ");
    scanf("%i", &A);

    printf("Termina em: ");
    scanf("%i", &B);
    
    while (B<=A)
    {
        printf("Informe um valor valido pra termino!\nTermina em: ");
        scanf("%i", &B);
    }

    printf("Tabuado do %i no intervalo de %i a %i", n, A, B);

    for (B; B >= A; B--)
    {
        r = n * B;
        printf("\n%i * %i = %i", n, B, r);
    }
    
    
    return 0;
}
