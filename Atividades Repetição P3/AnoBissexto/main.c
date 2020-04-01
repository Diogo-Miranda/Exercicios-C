#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Verifica ano Bissexto ====");

    int ano;
    bool ERRO;

    bool ehBissexto;

    char opcao = ' ';

    do
    {
        do
        {
            printf("\nInforme o ano a ser testado: ");
            scanf("%i", &ano);

            ERRO = ano < 0;
            if(ERRO) printf("\nAno Invalido");
        }
        while(ERRO);

        if(ano%4 == 0)
        {
            ehBissexto = 1;
        }
        if(ano%100 == 0)
        {
            ehBissexto = 0;
        }
        if(ano%400 == 0)
        {
            ehBissexto = 1;
        }

        if(ehBissexto)
        {
            printf("\nO ano eh bissexto");
        }else
        {
            printf("\nO ano nao eh bissexto");
        }

        do
        {
            printf("\nDeseja Continuar? [s/n] : ");
            fflush(stdin);
            scanf("%c", &opcao);
            ERRO = (opcao != 's') && (opcao != 'n');
            if (ERRO) printf("\nOpcao Invalida");
        }
        while(ERRO);

        ERRO = 0;
    }
    while(opcao != 'n');

    printf("\nObrigado por usar meu programa!");
    return 0;
}
