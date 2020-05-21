#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 1 ====");

    float n1= 0;
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &n1);

    float n2= 0;
    printf("\nInforme o segundo numero: ");
    scanf("%f", &n2);

    float resto= 0;
    float aux;
    float MDC= 0;
    float auxDivisao;
    //confere o maior
    if(n2 > n1)
    {
        aux= n2;
        n2= n1;
        n1= aux;
    }

    float divisor= n2;
    resto= (int)n1%(int)divisor;

    auxDivisao= n2;

    if(resto == 0)
    {
        MDC = divisor;
    }

    while(resto != 0)
    {
        divisor= resto;
        resto = (int)auxDivisao%(int)divisor;
        if(resto == 0)
        {
            MDC = divisor;
        }
        auxDivisao= divisor;
        divisor= resto;
    }

    printf("\nMDC= %.1f", MDC);
    return 0;
}
