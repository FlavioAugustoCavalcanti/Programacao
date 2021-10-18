#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração da variavel e do vetor
    int num;
    int vetor[20];

    printf("Digite 20 numeros.\n");

    //preenchimento do vetor
    for (int i = 0; i < 20; i++)
    {
        printf("n: ");
        scanf("%i", &vetor[i]);
    }
    
    printf("Digite o fator multiplicativo: ");
    scanf("%i", &num);

    //multiplivação de 'num' por cada um dos elementos do vetor
    for (int i = 0; i < 20; i++)
    {
        vetor[i] = num * vetor[i];
    }

    //apresentação do vetor com os resultados das multiplicações
    for (int i = 0; i < 20; i++)
    {
        printf("%3i", vetor[i]);
    }
    
    

    return 0;
}
