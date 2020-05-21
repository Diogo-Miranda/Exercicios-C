#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipação
void lerNumeros(int numeros[]);
void mostraNumeros(int numeros[]);
void deslocaMaiorParaFinal(int numeros[]);

//Variáveis globais;
const int tamanho = 6;

int main()
{
    printf("\nQuestao 3: \n");
    
    int A[] = {6, 5, 4, 3, 2, 1};
    int B[] = {3, 1, 6, 4, 2, 5};
    int C[tamanho];
    lerNumeros(C);
    deslocaMaiorParaFinal(A);
    deslocaMaiorParaFinal(B);
    deslocaMaiorParaFinal(C);
    mostraNumeros(A);
    mostraNumeros(B);
    mostraNumeros(C);

    return 0;
}

void deslocaMaiorParaFinal(int numeros[])
{
    int maior= numeros[0];
    int posicaoMaior= 0;
    for(int i= 1; i < tamanho; i++)
    {
        if(numeros[i] > maior)
        {
            maior= numeros[i];
            posicaoMaior= i;
        }
    }

    int ultimoNumero= numeros[tamanho-1];
    numeros[tamanho-1]= maior; //manda o maior pra ultima posicao
    numeros[posicaoMaior]= ultimoNumero;
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