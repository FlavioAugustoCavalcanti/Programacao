/*Calcula o valor do imc*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float imc, peso, altura;

    printf("Informe sua: \nAltura:");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 20)
    {
        printf("Abaixo do peso.");
    }

    else if (imc >= 25)
    {
        printf("Acima do peso.");
    }

    else
    {
        printf("Peso ideal.");
    }
       
    return 0;
}
