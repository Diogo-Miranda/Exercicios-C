#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variáveis Globais
const int lin = 3;
const int col = 2;

//Prototipação
void leMatriz(float matriz[][2]);
int numeroOcorrencias(float matriz[][2], int chave);

int main()
{
    float matriz[lin][col];
    leMatriz(matriz);

    float chave;
    printf("\nInforme a chave: ");
    scanf("%f", &chave);

    int ocorrencias = numeroOcorrencias(matriz, chave);

    printf("\nO numero de ocorrencias da matriz eh = %i\n", ocorrencias);

    return 0;
}

void leMatriz(float matriz[][2])
{
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("\nInforme o valor da matriz na prosicao [%i][%i]: ", i+1 , j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

int numeroOcorrencias(float matriz[][2], int chave)
{
    int ocorrencias;

    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matriz[i][j] == chave) ocorrencias++; 
        }
    }

    return ocorrencias;
} 