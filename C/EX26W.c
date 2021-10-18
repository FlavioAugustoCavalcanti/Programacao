#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r, i, n;

    printf("Digite um numero:\nN:");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("Digite um numero maior que zero:\nN:");
        scanf("%i", &n);
    }

    while (i <= 10)
    {
        r = n * i;
        printf("\n%i x %i = %i", n, i, r);
        i++;
    }

    printf("\nTabuada do %i", n);
    
    
    return 0;
}
