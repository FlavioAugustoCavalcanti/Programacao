#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int r, i;
    i = 0;
    printf("\nTabuada do 5 com laco WHILE");

    while (i <= 10)
    {
        r = 5 * i;
        printf("\n5 x %i = %i", i, r);
        i++;
    }

       
    return 0;
}
