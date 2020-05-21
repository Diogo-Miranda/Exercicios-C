#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

//Prototipação
void lerNumeros(int numeros[]);
void trocaValores(int numeros[]);
void mostraNumeros(int numeros[]);

//Variáveis globais
const int tamanho= 5;

int main()
{
    printf("\nQuestao 1 : \n");

    int numeros[tamanho];

    lerNumeros(numeros);
    mostraNumeros(numeros);
    trocaValores(numeros);
    mostraNumeros(numeros);

    return 0;
}

void lerNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    {
        printf("\nInforme o %i.o valor: ", i+1);
        scanf("%i", &numeros[i]);
    }
}

void trocaValores(int numeros[])
{
    int i= tamanho-1; //pega a ultima posição
    int primeiroValor= numeros[0];
    int ultimoValor= numeros[i];
    numeros[0]= ultimoValor;
    numeros[i]= primeiroValor;
}

void mostraNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    { 
        printf("%i ", numeros[i]);
    }
    printf("\n");
}