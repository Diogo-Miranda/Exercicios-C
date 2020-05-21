#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void lerNumeros(int numeros[]);
int maiorValorInterativo(int numeros[]);
int maiorValorRecursivo(int numeros[], int i);

//Variáveis Globais
const int tamanho= 5;

int main()
{
    printf("\nQuestao 5: \n");
    int numeros[tamanho];
    lerNumeros(numeros);
    int maior= maiorValorInterativo(numeros);
    printf("\nMaior Iterativo: %i", maior);
    maior= maiorValorRecursivo(numeros, tamanho-1);
    printf("\nMaior Recursivo: %i", maior);

    return 0;
}

int maiorValorInterativo(int numeros[])
{
    int maior= numeros[0];

    for(int i= 0; i < tamanho; i++)
    {
        if(numeros[i] > maior)
        {
            maior= numeros[i];
        }
    }

    return maior;
}

int maiorValorRecursivo(int numeros[], int i)
{
    int maior;

    if(i == 0)
    {
        maior= numeros[i];
    }
    else
    {
        maior= maiorValorRecursivo(numeros, i-1); 
        if(numeros[i] > maior) 
        {
            maior= numeros[i];
        }
    }

    return maior;
}

void lerNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    {
        printf("\nInforme o %i.o valor: ", i+1);
        scanf("%i", &numeros[i]);
    }
}