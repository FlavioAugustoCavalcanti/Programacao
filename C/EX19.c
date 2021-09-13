/*Calcula velocidade final e classifica entre lento e rápido*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a, vi, t, vf;

    printf("Informe:\n\nAceleracao(m/s^2): ");
    scanf("%f", &a); 

    printf("\nVelocidade inicial(m/s): ");
    scanf("%f", &vi);

    printf("\nTempo(s): ");
    scanf("%f", &t);

    vf = vi + (a*t);

    if (40 < vf && vf <= 60)
    {
        printf("Velocidade permitida.");
    }
    
    else if (60 < vf && vf <= 80)
    {
        printf("Velodidade de cruzeiro.");
    }

    else if (80 < vf && vf <=120)
    {
        printf("Veiculo rapido.");
    }

    else if (vf > 120)
    {
        printf("Veiculo muito rapido.");
    }
    
    else
    {
        printf("Veiculo muito lento");
    }
    
    return 0;
}
