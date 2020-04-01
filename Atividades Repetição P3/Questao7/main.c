#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 7 - Potenciacao ====/n");

    float base,
          AUX = 0.0;
    int expoente = 0;

    bool ERRO;

    printf("\nInforme o valor da base: ");
    scanf("%f", &base);

    do
    {
        printf("\nInforme o valor do expoente: ");
        scanf("%i", &expoente);

        ERRO = expoente < 0;
        if (ERRO) printf ("\nExpoente invalido, informe um valor positivo ou nulo! ");
    }
    while(ERRO);

    AUX = base;

    for(int i = 1; i < expoente; i++)
    {
        base = base*AUX;
    }

    printf("\nResultado=%.2f", base);

    return 0;
}
