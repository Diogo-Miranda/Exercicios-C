#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 2 - Numeros Divisiveis ====");

    bool ERRO,
         ehDivisivel;

    char opcao;

    float primeiroTermo= 0.0,
          razao= 0.0,
          numeroTermos= 0.0,
          valorTeste= 0.0,
          valorProgressao= 0.0;
    int resto= 0;
    int count= 0;

    do
    {

        printf("\nInforme o primeiro termo: ");
        scanf("%f", &primeiroTermo);

        printf("\nInforme a razao: ");
        scanf("%f", &razao);

        printf("\nInforme o numero de termos: ");
        scanf("%f", &numeroTermos);

        printf("\nInforme o valor a ser testado: ");
        scanf("%f", &valorTeste);

        for(int i = 0; i < numeroTermos; i++)
        {
            valorProgressao = (primeiroTermo) + (razao*i);
            resto = (int)valorProgressao%(int)valorTeste;
            ehDivisivel = resto == 0;
            if (ehDivisivel) count++;
        }

        printf("\nO numero de termos divisiveis por %.2f eh: %i", valorTeste, count);

        do
        {
            printf("\nDeseja realizar um novo calculo? [s/n] : ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = tolower(opcao);
            ERRO = (opcao != 's') && (opcao != 'n');
            if (ERRO) printf("\nOpcao invalida");
        }
        while(ERRO);
    }
    while(opcao != 'n');

    return 0;
}
