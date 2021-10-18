#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, i;

    printf("Serie de Bergamaschi");

    a = 1;
    b = 1;
    c = 1;
    d = 1;
    i = 0;

    for ( i = 0; i < 3; i++)
    {
        printf("\n%i", d);
    }
    
    d = 0;
    i = 0;

    while (i<20)
    {
        d = a + b + c;
        a = b;
        b = c;
        c = d;

        printf("\n%i", d);
        i++;
    }
    
    return 0;
}
