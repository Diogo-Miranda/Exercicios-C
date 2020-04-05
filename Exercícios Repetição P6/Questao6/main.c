#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 6 ===");

    bool ehPrimo= 0;
    bool ERRO= 0;

    float numero= 0;
    float aux= 0.0;
    int intNumero= 0;

    do
    {
        printf("\nInforme um numero: ");
        scanf("%f", &numero);
        aux = numero;
        if(aux == (int)numero)
        {
            ERRO= 0;
            ERRO= numero < 0;
        }else
        {
            ERRO= 1;
        }
        if (ERRO) printf("\nValor fora do dominio Natural");
    }while(ERRO);

    intNumero = (int)numero;

    float resto= 0;
    int numeroDivisores=0;

    for(int i = 1; i <= intNumero; i++)
    {
        resto = intNumero%i;

        if(resto == 0)
        {
            numeroDivisores++;
        }
    }

    if( (numeroDivisores <= 2) && (intNumero != 0) )
    {
        ehPrimo= true;
    }

    if(ehPrimo)
    {
        printf("\nO numero %i eh primo", intNumero);
    }
    else
    {
         printf("\nO numero %i nao eh primo", intNumero);
    }

}
