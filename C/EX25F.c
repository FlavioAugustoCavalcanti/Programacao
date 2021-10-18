#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, r;

    printf("Tabuada do 5 com laco FOR");

    for ( i = 0; i <= 10; i++)
    {
        r = 5 * i;
        printf("\n5 x %i = %i", i , r);
    }
    
    return 0;
}
