#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variáveis globais
const int NUM_LIN = 3;
const int NUM_COL = 2;

//Prototipação
void lerMatriz(int matriz[NUM_LIN][NUM_COL]);
void mostraMatriz(int matriz[NUM_LIN][NUM_COL]);

int main()
{
    int matriz[NUM_LIN][NUM_COL];
    
    lerMatriz(matriz);
    mostraMatriz(matriz);

    return 0;
}

void lerMatriz(int matriz[NUM_LIN][NUM_COL])
{
    for(int i= 0; i < NUM_LIN; i++)
    {
        for(int j= 0; j < NUM_COL; j++)
        {
            printf("\nInforme o valor na posicao [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

void mostraMatriz(int matriz[NUM_LIN][NUM_COL])
{
    for(int i =0; i < NUM_LIN; i++)
    {
        for(int j= 0; j < NUM_COL; j++)
        {
            printf("\nValor na posicao [%i][%i]: %i", i+1, j+1, matriz[i][j]);
        }
    }
}