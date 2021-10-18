#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero positivo: ");
    scanf("%i", &n);

    while (n <=0 )
    {
        printf("Numero menor que zero. Por favor digite um numero positivo: ");
        scanf("%i", &n);
    }
    

    printf("Obrigado!");

    return 0;
}
