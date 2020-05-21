#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Prototipação
void leitura(int *N); // Lê um número natural
int fatorial(int N); // Calcula fatorial de N

int main()
{
    printf("\n Questao 6 Recursiva - Fatorial ");
    
    int N;
    leitura(&N);
    int fat= fatorial(N);

    printf("\nFatorial de %i eh= %i", N, fat);

    return 0;
}

void leitura(int *N)
{
    bool ERRO= false;

    do
    {
        printf("\nInforme um numero: ");
        scanf("%i", N);
        ERRO = *N < 0;
        if (ERRO) printf("\nInforme um numero natural. ");
    } 
    while(ERRO);
}

int fatorial(int N)
{
    int fat= 0;

    if(N > 0)
    {
        fat= N * fatorial(N-1);
    } else
    {
       fat= 1; 
    }

    return fat;  
}