/*programa que identifica qual o maior numero digitado*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração de variáveis e do vetor
    int num;
    int vetor[10];

    printf("Digite 10 numeros.");

    //preenchimento do vetor
    for (int i = 0; i < 10; i++)
    {
        printf("\nn: ");
        scanf("%i", &vetor[i]);
    }
    
    //inicialização da variável 'num' com o primeiro valor do vetor, no caso 'vetor[0]'
    num = vetor[0];


    //identificação do maior número
    for (int i = 0; i < 10 ; i++)
    {
        if (num > vetor[i]) 
        {
            num;
        }
        
        else
        {
            num = vetor[i];
        }
        
    }
    
    printf("\nO maior numero digitado: %i", num);

    return 0;
}
