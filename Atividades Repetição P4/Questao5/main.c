#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 5 - n primeiros termos ====");

    bool ERRO;
    int numeroTermos;
    do
    {
        printf("\nInforme a quantidade de termos: ");
        scanf("%i", &numeroTermos);
        ERRO = numeroTermos < 0;
        if (ERRO) printf("\nQuantidade invalida");
    }
    while(ERRO);

    int count;
    float numerador= 1;
    int denominador= 100;
    float numero= 0.0;

    for(count= 0; count < numeroTermos; count++)
    {
        if(denominador > 0)
        {
            printf("\n%.0f",numerador);
            printf("\\");
            printf("%i",denominador);
            numero = (numerador/denominador) + numero;
            numerador++;
            denominador -= 3;
        }
    }

    if(count > 0) //pelo menos uma iteracao
    {
        printf("\nSoma= %f", numero);
    }
    else
    {
        printf("\nNao ocorreu nenhuma iteracao");
    }

    return 0;
}
