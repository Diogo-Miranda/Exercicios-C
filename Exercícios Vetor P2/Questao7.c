#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void lerNumeros(int numeros[]);
int encontraNegativos(int numeros[]);

//Variáveis Globais
const int tamanho= 6;

int main()
{
    printf("\nQuestao 7: \n");

    int numeros[tamanho];
    lerNumeros(numeros);

    int qtNegativos= encontraNegativos(numeros);

    printf("\nO numero de numeros negativos eh: %i", qtNegativos);
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

int encontraNegativos(int numeros[])
{
    int numerosNegativos= 0;

    for(int i= 0; i < tamanho; i++)
    {
        if(numeros[i] < 0)
        {
            numerosNegativos++;
        }
    }

    return numerosNegativos;
}
