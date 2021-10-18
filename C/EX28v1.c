/*Apresenta a tabuada e pergunta se usuário quer ou não continuar*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    //declaração de variáveis
    int a, b, r;
    char continuar;

    
    //inicialização de variáveis
    continuar = 's';
    
    
    //looping - continua se usuário digitar 's' e encerra se digitar 'n'
    while (continuar == 's')
    {
        //calcula até a tabuada do 20 se 'a' for menor ou igual a 20
        if(a <= 20)
        {
            
            //calcula e apresenta a tabuada do 'a'
            for(b=0; b <=10; b++)
            {
                r = a * b;
                printf("\n%i * %i = %i", a, b, r);
            }

            a++;
        }

        // quanto 'a' for maior que 20 encerra o looping
        else
        {
            break;
        }
        
        //pergunta se usuário deseja continuar
        printf("\nDeseja continuar: s-sim ou n-nao.\n");
        scanf("%s", &continuar);
    }

    return 0;
}
