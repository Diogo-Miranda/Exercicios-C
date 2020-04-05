#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 3 - Sequencia de Fibonacci");

    bool ERRO;
    int quantidadeTermos;
    do
    {
        printf("\nInforme a quantidade de termos: ");
        scanf("%i", &quantidadeTermos);
        ERRO= (quantidadeTermos < 0);
        if (ERRO) printf("\nQuantidade de termos invalida");
    }
    while(ERRO);

    int termo= 0,
        termoAnterior= 0,
        termoPosterior= 1;

    for(int i = 0; i < quantidadeTermos; i++)
    {
        printf("\n%i", termo);
        termoAnterior = termo;
        termo = termoPosterior;
        termoPosterior = termo + termoAnterior;
    }
    return 0;
}
