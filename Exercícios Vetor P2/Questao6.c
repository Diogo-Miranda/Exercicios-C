#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//Prototipação
void fibonacci(int numeros[], int tamanho);
void mostraNumeros(int numeros[], int tamanho);

int main()
{
    printf("\nQuestao 6: \n");
    
    int tamanho;
    bool ERRO= false;

    do
    {
        printf("\nInforme o tamanho da sequencia: ");
        scanf("%i", &tamanho);
        ERRO= tamanho <= 0;
        if (ERRO) printf("\nInforme um numero dentro do dominio dos nao negativos, nao nulos (0,infinito)");
    }
    while(ERRO);

    const int tamanhoVetor= tamanho;

    int numeros[tamanhoVetor];
    fibonacci(numeros, tamanho);
    mostraNumeros(numeros, tamanho);

    return 0;
}

void fibonacci(int numeros[], int tamanho)
{
    numeros[0] = 0;
    numeros[1] = 1;
    for(int i= 2; i < tamanho; i++)
    {
        numeros[i] = numeros[i-1] + numeros[i-2];
    }
}

void mostraNumeros(int numeros[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i ", numeros[i]);
    }
    printf("\n");
}

