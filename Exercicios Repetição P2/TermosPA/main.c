#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("\n=== Primeiros termos de uma PA ===");

    float primeiroTermo = 0.0;
    printf("\nInforme o primeiro termo da P.A.: ");
    scanf("%f", &primeiroTermo);

    float razao = 0.0;
    printf("\nInforme a razao: ");
    scanf("%f", &razao);

    int quantidadeTermos = 0;
    bool ERRO;
    do
    {
        printf("\nInforme a quantidade de termos desejada: ");
        scanf("%i", &quantidadeTermos);
        ERRO = quantidadeTermos < 1;
        if(ERRO) printf("\nQuantidade Invalida");
    }
    while(ERRO);

    printf("\nA Progressao Aritmetica serah composta pelos seguintes termos: ");

    printf("\n%.1f", primeiroTermo);

    float termoAux = primeiroTermo;

    int count = 1;

    while(count < quantidadeTermos)
    {
        termoAux = termoAux + razao;
        printf("\n%.1f", termoAux);
        count++;
    }

    return 0;
}
