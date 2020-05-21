#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Prototipação
void ler(int *N);
void escrever(int N);

int main()
{
    printf("\n Questao recursiva 3");
    int N;
    ler(&N);
    escrever(N);

    return 0;
}

void ler(int *N)
{
    printf("\n Informe um numero: ");
    scanf("%i", N);
}

void escrever(int N)
{
    if(N >= 0)
    {
        printf("%i, ", N);
        escrever(N-1);
    }
}