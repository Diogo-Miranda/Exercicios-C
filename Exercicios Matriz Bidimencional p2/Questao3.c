#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Vairáveis Globais
const int lin = 3;
const int col = 2;

//Prototipação 
void leMatriz(float matriz[][2]);
bool pesquisaMatriz(float matriz[][2], float chave);

int main()
{
    float matriz[lin][col];
    leMatriz(matriz);

    float chave;
    printf("\nInforme a chave a ser pesquisada: ");
    scanf("%f", &chave);
    
    bool chaveExiste = pesquisaMatriz(matriz, chave);

    if(chaveExiste)
    {
        printf("\nA chave esta presente na matriz indicada. ");
    } else
    {
        printf("\nA matriz nao existe na matriz indicada");
    }
    
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

bool pesquisaMatriz(float matriz[][2], float chave)
{
    int i = 0,
        j = 0;

    bool achou = false;

    while(!achou && i < lin)
    {
        while(!achou && j < col)
        {
            if(matriz[i][j] == chave) achou = true;
            j++;
        }
        i++;
    }

    return achou;
}