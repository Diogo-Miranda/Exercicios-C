#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 2 ====");

    int quantidade = 0;
    bool ERRO;
    do
    {
        printf("\n Informe a quantidade de numeros a ser analisado: ");
        scanf("%i", &quantidade);
        ERRO = quantidade < 0;
        if (ERRO) printf ("\nQuantidade invalida");
    }
    while(ERRO);


    int count;
    float numero= 0.0;
    float maior= 0.0;
    float menor= 0.0;
    float amplitude= 0.0;
    for(count= 0; count < quantidade; count++)
    {
        printf("\n Informe um numero: ");
        scanf("%f", &numero);

        if(count == 0)
        {
            maior = numero;
            menor = numero;
        }

        if(numero > maior)
        {
            maior = numero;
        }

        if(numero < menor)
        {
            menor = numero;
        }
    }

    amplitude= maior - menor;

    printf("\nAmplitude: %.1f", amplitude);

    return 0;
}
