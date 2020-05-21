#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void lerNumeros(int numeros[]);
void encontraNegativosRecursivo(int numeros[], int i, int *quantidade);

//Variáveis Globais
const int tamanho= 6;

int main()
{
    printf("\nQuestao 8 \n");

    int numeros[tamanho];
    
    lerNumeros(numeros);
    int quantidade= 0;

    encontraNegativosRecursivo(numeros, tamanho-1, &quantidade);

    printf("\nQuantidade de numeros negativos: %i", quantidade);
    return 0;
}

void encontraNegativosRecursivo(int numeros[], int i, int *quantidade)
{
    if(i == 0)
    {
        if(numeros[i] < 0)
        {
            *quantidade= *quantidade + 1;
        }
    }else
    {   
        encontraNegativosRecursivo(numeros, i-1, quantidade);
        if(numeros[i] < 0)
        {
            *quantidade= *quantidade + 1;
        }
    }
    
}

void lerNumeros(int numeros[])
{
    for(int i= 0; i < tamanho; i++)
    {
        printf("\nInforme o %i.o valor: ", i+1);
        scanf("%i", &numeros[i]);
    }
}