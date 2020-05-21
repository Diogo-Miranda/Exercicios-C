#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variáveis Globais
const int lin = 3;
const int col = 3;

//Prototipação
void leMatriz(float matriz[][3]);
float somaDiagonal(float matriz[][3]);

int main()
{
    float matriz[lin][col];
    leMatriz(matriz);

    float soma = somaDiagonal(matriz);

    printf("\nA soma da diagonal da matriz eh : %.1f", soma);

    return 0;
}

void leMatriz(float matriz[][3])
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

float somaDiagonal(float matriz[][3])
{
    float soma;

    int j = 0;
    for(int i = 0; i < lin; i++)
    {
        soma += matriz[i][j];
        j = i + 1; 
    }

    return soma;
}
