#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, i;

    printf("Digite os numeros:\nN1:");
    scanf("%i", &n1);

    printf("\nN2:");
    scanf("%i", &n2);

    for(i=0; n2 <= n1; i++)
    {
        printf("Invalido. Digite novamente:\nN2:");
        scanf("%i", &n2);
    }

    printf("Obrigado!");
    
    return 0;
}
