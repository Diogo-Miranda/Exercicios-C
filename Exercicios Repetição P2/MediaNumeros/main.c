#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("=== Media dos numeros ===");

    int quantidadeNumeros = 0;
    float numeros = 0.0;
    float media = 0.0;
    bool ERRO;


    do
    {
        printf("\nInforme o valor [-1 p/ sair] :");
        fflush(stdin);
        scanf("%f", &numeros);
        ERRO = numeros < -1;
        if(ERRO) printf("\n\aValor invalido");
    }
    while(ERRO);

    while(numeros != -1)
    {
        if(numeros > 0)
        {
            quantidadeNumeros++;
            media = media + numeros;
        }

        do
        {
            printf("\nInforme o valor: [-1 p/ sair] :");
            fflush(stdin);
            scanf("%f", &numeros);
            ERRO = numeros < -1;
            if(ERRO) printf("\n\aValor invalido");
        }
        while(ERRO);

    }


    if(quantidadeNumeros > 0)
    {
        media = media/quantidadeNumeros;
        printf("\nA media dos numeros informados eh: %.2f", media);
    }
    else
    {
        printf("\n\aNenhuma media calculada");
    }
    return 0;
}
