#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, i, n, soma;

    printf("Informe quantos numeros tera a sequencia.\nN: ");
    scanf("%i", &n);

    //inicialização das variáveis
    a = 2;
    b = 3;
    i = 0;
    soma = 0;

    //1° looping - verifica se 'n' está entre 0 e 100
    while ((n<=0) || (n>=100))
    {
        printf("Digite um limite positivo e menor que 100.\nN: ");
        scanf("%i", &n);
    }

    //calcula e apresenta a sequencia: 2, 5, 10, 17, 26, ..., n
    while (i < n)
    {
        printf("\n%i", a);
        soma = soma + a;
        a = a + b;
        b = b + 2;
        //soma = soma + a;
        i++;
    }
    
    //apresenta a soma dos 'N' primeiros nºs da sequencia
    printf("\nSoma: %i", soma);

    return 0;
}

/* Nota: A 'linha 31' foi transformada em comentário. Se essa linha ficar ativa ela apressentará erro na soma.
Pois ao invés de iniciar a soma com o valor inicial da sequencia que é 2, a soma iniciaria a partir do 
segundo elemento da sequencia que é 5. Isto porque a o programa executaria a atualização de 'a' na 'linha 29'
para depois começar a 'soma'. A solução foi mudar a soma da 'linha 31' para 'linha 28', assim a soma começa 
com o valor inicial da sequencia proposta. */