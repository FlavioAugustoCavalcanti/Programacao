#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char sexo;

    printf("Informe o sexo do usuario (f/m): ");
    scanf("%s", &sexo);

    while ((sexo != 'f') && (sexo != 'm'))
    {
       printf("Informe o sexo do usuario (f/m): ");         
       scanf("%s", &sexo);
    }
    
    printf("Sexo: %c", sexo);

    return 0;
}
