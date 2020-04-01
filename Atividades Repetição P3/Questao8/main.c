#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("====== Questao 8 - Fatorial =======\n");

    bool ERRO;
    int numero;
    do
    {
        printf("\nInforme o valor a ser calculado: ");
        scanf("%i", &numero);
        ERRO = numero < 0;
        if(ERRO) printf("\nInsira um valor positivo! ");
    }
    while(ERRO);


    int fatorial = numero; // fatorial j� recebe a primeira verifica��o
    int AUX = numero;
    if(numero == 0)
    {
        printf("\nFatorial= 1");
    }else
    {
        for(int i = 1; i < numero; i++) //come�a de 1 pq a primeira verifica��o ja foi feita
        {
            AUX = AUX - 1;
            fatorial = fatorial * AUX;
        }
        printf("\nResultado= %i", fatorial);
    }
    return 0;
}
