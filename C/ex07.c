/* código que informa valor total de produtos e troco a ser devolvido*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float p1, p2, p3, p4, p5, soma, troco;

    printf("Valor do produto1: ");
    scanf("%f", &p1);

    printf("Valor do produto2: ");
    scanf("%f", &p2);

    printf("Valor do produto3: ");
    scanf("%f", &p3);

    printf("Valor do produto4: ");
    scanf("%f", &p4);

    printf("Valor do produto5: ");
    scanf("%f", &p5);

    soma = p1+p2+p3+p4+p5;

    printf("\nValor total: %0.2f reais \n\nInforme valor pago: ", soma);
    scanf("%f", &troco);

    troco = troco - soma;

    printf("\nTroco: %0.2f reais", troco);

    return 0;
}
