/*programa preenche a matriz e procura o numero*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    //declaração da matriz e das variáveis e inicialização
    int i, j, num = 0, vezes = 0;
    char continuar;
    int M[10][10];

    //pede quantidade de linhas
    printf("Informe a quantidade de linhas.\nn: ");
    scanf("%i", &i);

    //dimensão maxima da matriz é 10x10
    while ((i<=0)||(i>10))
    {
        printf("Informe um numero valido para as linhas.\n: ");
        scanf("%i", &i);
    }

    //pede quantidade de colunas
    printf("Informe a quantidade de colunas.\nn: ");
    scanf("%i", &j);

    //dimensão maxima da matriz é 10x10
    while ((j<=0)||(j>10))
    {
        printf("Informe um numero valido para as colunas.\n: ");
        scanf("%i", &j);
    }
    

    //preenchimento da matriz
    printf("Informe os numeros da matrix.\n");

    for (int l = 0; l < i; l++)
    {
        for (int c = 0; c < j; c++)
        {
            printf("n: ");
            scanf("%i", &M[l][c]);
        }
        
    }


    //Apresenta a matriz digitada apenas para testar o funcionamento 
    printf("\nMatriz digitada:\n");

    for (int l = 0; l < i; l++)
    {
        for (int c = 0; c < j; c++)
        {
            printf("%4i", M[l][c]);
        }
        printf("\n");
    }

    //inicializa a variável para poder entrar no looping de verificação
    continuar = 's';

    //1º looping - verifica se numero pedido existe na matriz
    while (continuar == 's')
    {
        //pede numero a ser procurado
        printf("\nNumero a ser pesquisado.\nn: ");
        scanf("%i", &num);

        
        for (int l = 0; l < i; l++)
        {
            for (int c = 0; c < j; c++)
            {
                //testa cada numero em cada posição com o numero procurado
                if (num == M[l][c])
                {
                    printf("\nPosicao do Numero %i: linha:%i e coluna:%i\n", num, l, c);
                }

                //conta as vezes que o teste acima não foi feito.
                else
                {
                    vezes++;
                }                
            }                       
        }

        //verifica se o valor do contador 'vezes' é igual ao numero de posições da matriz        
        if ( (i*j) == vezes)
                {
                    printf("\nNumero nao encontrado!\n");
                }
        
        //pergunta se quer nova busca
        printf("\nContinuar: s-sim ou n-nao: ");
        scanf("%s", &continuar);


        //reinicializa o contador vezes
        vezes = 0;
        
    }
    
    printf("\nFim do programa!");
    
    return 0;
}


/*
NOTA: 

LINHA 83:
- o 'ELSE' conta a quantidade de posições lidas e que não foi encontrato o numero procurado. Seu valor
é utilizado na linha 91.


LINHA 91:
- 'i*j' é o produto ente o nº de linhas e o de colunas da matriz

- O 'IF' verifica se o valor do contador 'vezes' é igual ao produto 'i*j'. Em caso positivo significa
que o numero procurado não foi encontrado em nenhuma posição e que o comando da LINHA 79 não foi executado
nenhuma vez.

*/