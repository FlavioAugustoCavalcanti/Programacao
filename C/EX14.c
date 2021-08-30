//compara 3 numeros quaisquer e indica qual o maior

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Informe os numeros: \nn1:");
    scanf("%d", &n1);
    
    printf("n2:");
    scanf("%d", &n2);
    
    printf("n3:");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("O maior numero e n1: %d", n1);
        }
        else
        {
            printf("O maior numero e n3: %d", n3);
        }
        
        
    }

    else if (n2 > n3)
    {
        printf("O maior numero e n2: %d", n2);
    }

    else
    {
        printf("O maior numero e n3: %d", n3);
    }
        
    return 0;
}
