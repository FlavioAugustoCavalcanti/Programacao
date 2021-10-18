#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int M[2][3];
    
    printf("Digite os numeros da matriz 2x3\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("n: ");
            scanf("%i", &M[i][j]);
        }        
    }
    
    printf("Os numeros digitados:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2i", M[i][j]);
        } 

        printf("\n");       
    }
    

    return 0;
}
