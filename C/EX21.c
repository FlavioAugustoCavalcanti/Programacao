/*programa calcula o valor mínimo da nota P2 para ser aprovado*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float p1, p2;

    printf("Informe:\n\nNota P1: ");
    scanf("%f", &p1);

    p2 = (15 - p1) / 2;     // o valor 15 é a multiplicação de 3 pela média que é 5

    printf("\nPara ser aprovado nota P2 deve ser igual ou maior que: %0.2f\n", p2);
    
    return 0;
}
