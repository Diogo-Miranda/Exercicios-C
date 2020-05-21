#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Variáveis Globais
const int lin = 3;
const int col = 2;

//Prototipação
bool comparaMatriz(int MatrizA[lin][col], int MatrizB[lin][col]);
void lerMatriz(int matriz[lin][col]);

int main()
{
    int MatrizA[lin][col];
    lerMatriz(MatrizA);
    int MatrizB[lin][col];
    lerMatriz(MatrizB);
    
    bool ehIgual = comparaMatriz(MatrizA, MatrizB);

    if(ehIgual) 
    {
        printf("\nAs matrizes sao iguais");
    }else 
    {
        printf("\nAs matrizes sao diferentes");
    }
    return 0;
}

bool comparaMatriz(int MatrizA[lin][col], int MatrizB[lin][col])
{
    bool ehIgual= true;
    
    for(int i= 0; i < lin; i++)
    {
        for(int j= 0; j < col; j++)
        {
            if(MatrizA[i][j] != MatrizB[i][j]) ehIgual= false;
            printf("%d", ehIgual);
        }
    }

    return ehIgual;
}

void lerMatriz(int matriz[lin][col])
{
    for(int i= 0; i < lin; i++)
    {
        for(int j= 0; j < col; j++)
        {
            printf("\nInforme o valor da matriz na posicao [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

