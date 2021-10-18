#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Digite os numeros:\nN1:");
    scanf("%i", &n1);

    printf("\nN2:");
    scanf("%i", &n2);

    while (n2 <= n1)
    {
        printf("\nInvalido. Informe outro numero para:\nN2:");
        scanf("%i", &n2);
    }

    printf("Obrigado!");
        
    return 0;
}
