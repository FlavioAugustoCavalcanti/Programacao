#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int M[3][4];
    int num;

    printf("Digite os numeros da matriz 3x4.\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("n: ");
            scanf("%i", &M[i][j]);
        }        
    }

    printf("Fator multiplicativo: ");
    scanf("%i", &num);

    
    
    printf("Matriz digitada\n", num);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4i", M[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            M[i][j] = num * M[i][j];
        }
        
    }
    

    printf("Matriz multiplicada por %i\n", num);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4i", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
