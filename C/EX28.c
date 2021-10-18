#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A, B, r;

    A=1;
    while (A<=20)
    {

        for (B=0; B <= 10; B++)
        {
            r = A * B;
            printf("\n%i * %i = %i", A, B, r);
        }
        
        //printf("Pressione uma tecla para continuar.");
        printf("\n");
        system("PAUSE");
        A=A+1;
    
    }
    
    return 0;
}
