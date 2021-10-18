/*programa apresenta a sequencia de números: 2, 5, 10, 17, 26, 37*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, n, i;

    printf("Informe o valor limite da sequencia.\nN: ");
    scanf("%i", &n);

    
    //1° looping - verifica se 'n' é maior que 0 e menor que 100
    while ((n<=0) || (n>=100))      
    {
        printf("Digite um numero positivo menor que 100.\nN: ");
        scanf("%i", &n);
    }
    

    //inicialização das variáveis
    i = 0;
    a = 2;
    b = 3;

    //2° looping - imprime os primeiros nºs da sequencia 
    while (i<=n)
    {
        printf("\n%i", a);  // imprime resultado na tela
        a = a + b;          // guarda em 'a' os nºs da sequencia
        b = b + 2;          // guarda em 'b' a sequência dos numeros ímpares
        i++;                // incremente o contador 'i'
    }


    return 0;
}
