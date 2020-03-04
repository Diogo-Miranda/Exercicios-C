#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("\nEquacao 2o grau");

    float a,
          b,
          c,
          delta,
          x,
          valorX = 0;

    bool verificaEquacao = 1;

    printf("\nInforme o 'A' da equacao: ");
    scanf("%f", &a);

    if(a == 0)
    {
        verificaEquacao = 0;
    }

    printf("\nInforme o 'B' da equacao: ");
    scanf("%f", &b);

    printf("\nInforme o 'C' da equacao: ");
    scanf("%f", &c);

    delta = pow(b,2) - (4*a*c);

    if(delta < 0)
    {
        verificaEquacao = 0;
    }

    printf("\nf(x) = %.2f", a);
    printf("x2 +");
    printf("%.2f", b);
    printf("x + ");
    printf("%.2f", c);

    printf("\nInforme o 'X' a ser calculado nos valores reais: ");
    scanf("%f", &x);
    if(verificaEquacao == 1)
    {
        valorX = a*(pow(x,2)) + b*x + c;

        printf("\nf(%.2f", x);
        printf(")= %.3f", valorX);
    }else
    {
        printf("\nEssa equacao do 2o grau nao existe, ou nao esta definida com valores reais de X");
    }

    return 0;
}
