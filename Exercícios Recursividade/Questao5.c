#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Prototipação
void leitura(int *n, int *m); // n = Limite Infeiror m = Limite Suprior
float calculaSoma(int n, int m); // n = Limite Infeiror m = Limite Suprior

int main()
{
    printf("\n Questao recursiva 5");
    int n,
        m;
    leitura(&n, &m);
    int soma = calculaSoma(n, m);

    printf("\nResultado da soma de [%i,%i]= %i", n, m, soma);

    return 0;
}

void leitura(int *n, int *m)
{
    printf("\nInforme o primeiro limite: ");
    scanf("%i", n);

    printf("\nInforme o segundo limite: ");
    scanf("%i", m);

    if(*n > *m)
    {
        int aux = *n;
        *n = *m;
        *m = *n;
    }
}

float calculaSoma(int n, int m)
{
    int soma = 0;
    if(n <= m)
    {
        soma = n + calculaSoma(n+1, m);
    }
    else
    {
        soma= 0;
    }

    return soma;
}

