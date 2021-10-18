#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int M[3][4];
    int c, num;

    printf("Fator multiplicativo: ");
    scanf("%i", &num);

    while (c < 3)
    {        

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (c == 0)
                {
                    printf("n: ");
                    scanf("%i", &M[i][j]);
                }
                else if (c == 1)
                {
                    M[i][j] = num * M[i][j];
                }
                else
                {
                    printf("%3i", M[i][j]);
                }
                                
            }
            printf("\n");
            
        }
        
        c++;
        
    }
    
    return 0;
}
