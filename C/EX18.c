/*Calcula IMC baseado no sexo feminino ou masculino*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float peso, altura, imc;
    char sexo;

    printf("Informe \nPeso:");
    scanf("%f", &peso);

    printf("\nInforme \nAltura:");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    printf("Informe \nSexo:");
    scanf("%s", &sexo);

   // imc = peso / (altura*altura);

    if (sexo == 'f')  
    {
        if (imc >= 24)
        {
            printf("acima do peso");
        }
        
        else if (imc < 19)
        {
            printf("Abaixo do peso");
        }
        
        else
        {
            printf("Peso ideal");
        }
        
        
    }
    
    else
    {
        if (imc >= 25)
        {
            printf("acima do peso");
        }
        
        else if (imc < 20)
        {
            printf("Abaixo do peso");
        }
        
        else
        {
            printf("Peso ideal");
        }
    }
    
    
    return 0;
}
