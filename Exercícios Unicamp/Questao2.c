#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prototipação
void primo(int m, int *p1, int *p2);

int main()
{
    int n;
    bool ERRO= false;
    do
    {
        printf("\nInforme o valor de m: ");
        scanf("%i", &n);     
        ERRO = n < 0;
        if (ERRO) printf("\nValor de entrada invalido. "); 
    } 
    while(ERRO);
    


    int num1 = 0,
        num2 = 0;

    primo(n, &num1, &num2);

    printf("\nMenor primo eh: %i", num1);
    printf("\nMaior primo eh: %i", num2);

    return 0;
}

void primo(int m, int *p1, int *p2)
{
    int menorPrimo = m - 1;
    bool ehPrimo;
    int divisor = 3;
    
    do
    {
        ehPrimo = true;

        if (menorPrimo%2 == 0 && menorPrimo != 2)
        {
            ehPrimo = false;
            menorPrimo = menorPrimo - 1;
        }

        while (ehPrimo && divisor <= menorPrimo / 2)
        {
            if (menorPrimo%divisor == 0)
            {
                ehPrimo = false;
                menorPrimo = menorPrimo - 1;
            }
            divisor++;
        }
    }
    while(ehPrimo == false);

    *p1 = menorPrimo;
    

    int maiorPrimo = m+1;
    divisor = 3;

    do
    {
        ehPrimo = true;

        if (maiorPrimo%2 == 0 && maiorPrimo != 2)
        {
            ehPrimo = false;
            maiorPrimo = maiorPrimo + 1;
        }

        while (ehPrimo && divisor <= maiorPrimo / 2)
        {
            if (maiorPrimo%divisor == 0)
            {
                ehPrimo = false;
                maiorPrimo = maiorPrimo + 1;
            }
            divisor++;
        }
    }
    while(ehPrimo == false);

    *p2 = maiorPrimo;
}