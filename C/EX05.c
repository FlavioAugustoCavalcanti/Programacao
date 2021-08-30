/* Programa que faz conversão de graus °C (Celsius) para graus °F (Fahrenheit)*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float celsius, f;

    printf("Temperatura em Celsius:");
    scanf("%f", &celsius);

    f = ( (9 * celsius) / 5 ) + 32;

    printf("Equivalente em Fahrenheit: %f", f);

    return 0;
}
