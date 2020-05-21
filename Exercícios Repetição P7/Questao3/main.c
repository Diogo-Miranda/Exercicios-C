#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 3 ====");

    int numero1_int= 0,
        numero2_int= 0;

    float numero1_float=0.0,
          numero2_float=0.0;

    bool ERRO= false,
         ehNatural= true,
         ehPrimo= true;

    char opcao;

    do
    {
        do
        {

            printf("\nInforme o primeiro numero: ");
            scanf("%f", &numero1_float);

            printf("\nInforme o segundo numero: ");
            scanf("%f", &numero2_float);

            numero1_int= numero1_float;
            numero2_int= numero2_float;

            if( (numero1_int != numero1_float) || (numero2_int != numero2_float))
            {
                ehNatural= false;
            }else
            {
                ehNatural= true;
            }

            ERRO= (numero1_int < 0) || (numero2_int < 0) || (ehNatural == false);
            if (ERRO) printf("\nValores fora do dominio natural.");
        }
        while(ERRO);

        if( (numero1_int < 2) || (numero2_int < 2) || (numero1_int%2 == 0 && numero2_int%2 == 0) )
        {
            ehPrimo= false;
        }

        int divisor = 3;

        while( ehPrimo && ( divisor <= numero1_int/2 || divisor <= numero2_int/2) )
        {
            if( (numero1_int%divisor == 0) && (numero2_int%divisor == 0) ) ehPrimo= false;
            divisor++;
        }

        if (ehPrimo) printf("\nSao primos entre si");
        else printf("\nNao sao primos entre si");

        do
        {
            printf("\nDeseja continuar? [S/N]");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);
            ERRO = (opcao != 'S' && opcao != 'N');
            if(ERRO) printf("\nOpcao Invalida");
        }
        while(ERRO);
    }
    while(opcao == 'S');

    return 0;
}
