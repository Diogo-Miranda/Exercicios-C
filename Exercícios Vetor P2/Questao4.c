#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipação
void lerNumeros(int numeros[]);
void mostraNumeros(int numeros[]);
void ordena(int numeros[]);

//Variáveis globais;
const int tamanho = 6;

int main()
{
    printf("\nQuestao 4: \n");
    
    int A[] = {6, 5, 4, 3, 2, 1};
    int B[] = {3, 1, 6, 4, 2, 5};
    int C[tamanho];
    lerNumeros(C);
    ordena(A);
    ordena(B);
    ordena(C);
    mostraNumeros(A);
    mostraNumeros(B);
    mostraNumeros(C);

    return 0;
}

void ordena(int numeros[])
{
    int aux;
    for(int i= 0; i < tamanho; i++)
    {
        for(int j= i+1; j < tamanho; j++) //Testa com o numero da posicao a frente
        {
            if(numeros[i] > numeros[j])
            {
                aux= numeros[i];
                numeros[i]= numeros[j];
                numeros[j]= aux;
            }
        }
    }
}

void lerNumeros(int numeros[])
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nInforme o %i.o valor: ", i + 1);
        scanf("%i", &numeros[i]);
    }
}

void mostraNumeros(int numeros[])
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i ", numeros[i]);
    }
    printf("\n");
}