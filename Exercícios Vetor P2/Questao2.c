#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void lerNumeros(int numeros[]);
void mostraNumeros(int numeros[]);
void trocaValores(int numeros[], int posicaoUm, int posicaoDois);
int lerPosicao();

//Variáveis globais
const int tamanho= 5;

int main()
{
    printf("\nQuestao2: \n");
    int numeros[tamanho];

    lerNumeros(numeros);
    mostraNumeros(numeros);
    int posicaoUm = lerPosicao();
    int posicaoDois= lerPosicao();
    trocaValores(numeros, posicaoUm, posicaoDois);
    mostraNumeros(numeros);

    return 0;
}

void trocaValores(int numeros[], int posicaoUm, int posicaoDois)
{
    int posicaoUmNumero= numeros[posicaoUm];
    int posicaoDoisNumero= numeros[posicaoDois];
    numeros[posicaoUm]= posicaoDoisNumero;
    numeros[posicaoDois]= posicaoUmNumero;
}

void lerNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    {
        printf("\nInforme o %i.o valor: ", i+1);
        scanf("%i", &numeros[i]);
    }
}

void mostraNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    { 
        printf("%i ", numeros[i]);
    }
    printf("\n");
}

int lerPosicao()
{   
    bool ERRO= false;
    int posicao;
    do
    {
        printf("\nInforme a posicao a ser trocada: ");
        scanf("%i", &posicao);
        ERRO = posicao < 0 || posicao >= tamanho;    
        if(ERRO) printf("\nInforme um numero dentro do dominio [0,%i]", tamanho-1);
    } 
    while (ERRO);
    
    return posicao;
}