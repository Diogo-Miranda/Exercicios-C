#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== QUESTAO 4 ====");

    int numero_int= 0,
        maiorPar= 0,
        maiorImpar= 0,
        quantidadeValores= 0;

    float numero_float=0.0;

    bool ehInteiro= true,
         ERRO= false;

    char opcao;

    do
    {
        printf("\nInforme a quantidade de valores a serem lidos: ");
        scanf("%i", &quantidadeValores);

        for(int i= 0; i < quantidadeValores; i++)
        {
            do
            {
                printf("\nInforme um numero: ");
                scanf("%f", &numero_float);

                numero_int= (int)numero_float;

                if(numero_int != numero_float)
                {
                    ehInteiro= false;
                }else
                {
                    ehInteiro= true;
                }

                ERRO= (numero_int < 0) || (ehInteiro == false);
                if (ERRO) printf("\nValor Invalido");
            }
            while(ERRO);

            if(numero_int%2 == 0)
            {
                if(numero_int > maiorPar) maiorPar= numero_int;
            }else
            {
                if(numero_int > maiorImpar) maiorImpar= numero_int;
            }
        }

        printf("\nMaior par: %i", maiorPar);
        printf("\nMaior impar: %i", maiorImpar);

        do
        {
            printf("\nDeseja continuar? [S/N] ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao= toupper(opcao);
            ERRO= (opcao != 'S' && opcao != 'N');
            if (ERRO) printf("\nOpcao Invalida");
        }
        while(ERRO);
    }
    while(opcao == 'S');
    return 0;
}
