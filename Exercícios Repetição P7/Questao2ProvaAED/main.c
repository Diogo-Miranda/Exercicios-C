#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 2 =====");

    int quantidade= 0;
    bool ERRO= false;
    do
    {
        printf("\nInforme o numero de valores: ");
        scanf("%i", &quantidade);
        ERRO= quantidade < 0;
        if (ERRO) printf("\nQuantidade invalida");
    }
    while(ERRO);

    float num= 0;
    float maior=0;

    if(quantidade > 0)
    {
        printf("\nInforme um numero: ");
        scanf("%f", &num);
        maior = num;
    }

    while(quantidade > 1)
    {
        printf("\nInforme um numero: ");
        scanf("%f", &num);

        if(num > maior)
        {
            maior= num;
        }
        quantidade--;
    }

    printf("\nMaior= %.1f", maior);
    return 0;
}
