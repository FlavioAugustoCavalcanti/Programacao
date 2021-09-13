/*Código pra conversão de Dólares em Reais baseado na cotação do dia*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float dolar, real, cotacao;         // declaração de variáveis

    printf("Cotação do dia: ");         // solicita cotação do dia em Reais
    scanf("%f", &cotacao);              // armazena cotação na variável de mesmo nome

    printf("Quantidade de Dolares: ");  // solicita a quantidade de Dólares a ser comprado
    scanf("%f", &dolar);                // armazena a quantidade na variável "dolar"

    real = cotacao * dolar;             //atribui valor da conversão para a variável "real"
    
    printf("Valor em reais: %f", real); //apresenta valor da conversão
    
    return 0;
}
