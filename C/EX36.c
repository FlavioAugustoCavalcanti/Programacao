/*preenchimento de um vetor com o resultado de sucessivas multiplicações*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    //declaração da variável e dos vetores
    int num;
    int v[20], u[20];


    printf("Digite 20 numeros.\n");

    //preencimento do vetor 'v'
    for (int i = 0; i < 20; i++)
    {
        printf("n: ");
        scanf("%i", &v[i]);
    }


    printf("Digite o fator multicativo: ");
    scanf("%i", &num);

    //preenchimento do vetor 'u' que recebe os valores da multiplicação
    for (int i = 0; i < 20; i++)
    {
        u[i] = num * v[i];
    }
    

    //apresentação dos resultados armazenados no vetor 'u'
    for (int i = 0; i < 20; i++)
    {
        printf("%3i", u[i]);
    }
    
       
    return 0;
}
