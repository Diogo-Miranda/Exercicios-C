#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n == Conversor de idade == ");

    int anoNascimento,
        idadeAnos,
        idadeMeses,
        idadeSemanas,
        idadeDias = 0;

    printf("\n Informe o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idadeAnos = 2020 - anoNascimento;
    idadeMeses = idadeAnos * 12;
    idadeSemanas = idadeMeses * 4;
    idadeDias = idadeSemanas * 7;

    printf("\n Sua idade em anos e: %d", idadeAnos);
    printf("\n Sua idade em meses e: %d", idadeMeses);
    printf("\n Sua idade em semanas e: %d", idadeSemanas);
    printf("\n Sua idade em dias e: %d", idadeDias);

    return 0;
}
