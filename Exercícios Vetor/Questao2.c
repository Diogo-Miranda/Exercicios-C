#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


// Prototipação
int verificaNumeroZero(float vetor[], int tamanho);
void lerVetor(float vetor[], int tamanho);
void escreveQuantidadeZeros(int quantidaDeZeros);

int main ()
{
    float vetor1[] = {1.5, 9.6, 0.0, 3.8};
    int quantidadeZeros= verificaNumeroZero(vetor1, 4);
    escreveQuantidadeZeros(quantidadeZeros);

    float vetor2[] = {0.0, 0.0, 0.0};
    quantidadeZeros= verificaNumeroZero(vetor2, 3);
    escreveQuantidadeZeros(quantidadeZeros);

    float vetor3[] = {3.7, 2.2};
    quantidadeZeros= verificaNumeroZero(vetor3, 2);
    escreveQuantidadeZeros(quantidadeZeros);

    int tamanho;
    printf("\nInforme o tamanho do proximo vetor: ");
    scanf("%i", &tamanho);
    float vetor4[tamanho];
    lerVetor(vetor4, tamanho);
    quantidadeZeros= verificaNumeroZero(vetor4, tamanho);
    escreveQuantidadeZeros(quantidadeZeros);

    return 0;
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: int verificaNumeroZero(float vetor[], int tamanho)
   Função: Verificar valores nulos em um vetor
   Valores de entrada: float vetor[], int tamanho
   Valores de saída: int quantidadeZeros
   --------------------------------------------- */
int verificaNumeroZero(float vetor[], int tamanho)
{
    int quantidadeZeros= 0;

    for(int i= 0; i < tamanho; i++)
    {
        if(vetor[i] == 0.0)
        {
            quantidadeZeros++;
        }
    }

    return quantidadeZeros;
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: void lerVetor(float vetor[], int tamanho)
   Função: Ler valores de um vetor
   Valores de entrada: float vetor[], int tamanho
   Valores de saída: vazio
   --------------------------------------------- */
void lerVetor(float vetor[], int tamanho)
{
    for(int i= 0; i < tamanho; i++)
    {
        printf("\nInforme o valor do vetor na posicao %i.o :", i+1);
        scanf("%f", &vetor[i]);
    }
}

void escreveQuantidadeZeros(int quantidaDeZeros)
{
    printf("\nQuantidade de zeros: %i", quantidaDeZeros);
}