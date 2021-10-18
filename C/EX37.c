/*Programa preenche um vetor delimitado pelo usuário e, em seguida faz a pesquisa do numero indicado*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração de variáveis e do vetor
    int n, num, continuar;
    int vetor[20];

    printf("informe a quantidade de valores(max 20 numeros)\n: ");
    scanf("%i", &n);

    //1° looping - pede um nº maior que 0 e menor que 20
    while ((n<0)||(n>20))
    {
        printf("informe um valor valido: ");
        scanf("%i", &n);
    }

    printf("\nInforme os numeros.\n");

    //Preenche o vetor com os nºs digitados
    for (int i = 0; i < n; i++)
    {
        printf("n:");
        scanf("%i", &vetor[i]);
    }

    //inicializa a variável continuar para entrar no 2º looping
    continuar = 's';

    //2º looping - pesquisa nº informado pelo usuário
    while (continuar == 's')
    {
        printf("\nInforme o numero a ser pesquisado: ");
        scanf("%i", &num);

        for (int i = 0; i < n; i++)
        {
            //verifica o numero e se encontrado sai do looping através do BREAK
            if (num == vetor[i])
            {
                printf("\nPosicao do numero: %i\n", i);
                break;
            }
            
            //verifica se completou as posições. Se verdadeiro imprime msg
            else if (i == (n-1))
            {
                printf("\nValor nao encontrado!\n");
            }
            
        }

        //Pede que informe intenção de continuar ou encerrar
        printf("\nDeseja continuar: s-sim ou n-nao.\n:");
        scanf("%s", &continuar);      
    }
    
    printf("\nFim do programa.");
    
    return 0;
}

/*
NOTA: 
Na linha 49 temos:  else if (i == (n-1)) 

A condição verifica se a variável 'i', que indica as posições do vetor, é igual a (n-1). 

As posições são contadas de 0 até n. Logo 4 posições, por exemmplo indicam que temos as posições 0, 1, 2 e 3. 

Para que a igualdade seja feita foi subtraído 1 de n. Sendo assim o numero da última posição 'i' coincidirá com 
o valor de 'n' indicado pelo usuário.  

Quando essa igualdade for verificada pelo 'else if' teremos certeza de que foi percorrida todas as posições
do vetor indicado!
*/