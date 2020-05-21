#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variáveis Globais
const int lin = 3;
const int col = 2;

//Prototipação
void leMatriz(int matriz[][2]);
bool ehIgual(int matrizA[][2], int matrizB[][2]);

int main()
{
    int matrizA[lin][col];
    leMatriz(matrizA);

    int matrizB[lin][col];
    leMatriz(matrizB);

    bool matrizIgual = ehIgual(matrizA, matrizB);

    if(matrizIgual)
    {
        printf("\nAs matrizes sao iguais. ");
    } else
    {
        printf("\nAs matrizes sao diferentes. ");        
    }
    
    return 0;
}

void leMatriz(int matriz[][2])
{
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("\nInforme o valor da matriz na prosicao [%i][%i]: ", i+1 , j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

bool ehIgual(int matrizA[][2], int matrizB[][2])
{
    bool ehIgual = true;

    int i = 0,
        j = 0;
    while(ehIgual && i < lin)
    {
        while(ehIgual && j < col)
        {
            if(matrizA[i][j] != matrizB[i][j]) ehIgual = false; 
            j++;
        }
        i++;
    }
    
    return ehIgual;
}