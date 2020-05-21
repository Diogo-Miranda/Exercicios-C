#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

double media(double vet[], int n, int *i);

int main()
{
    int i,
        n = 4; //tamanho do vetor
    double vet[4];

    double num= 0;

    for (i= 0; i < n; i++)
    {
        printf("\nInforme um numero:");
        scanf("%lf", &num);
        vet[i]= num;
    }

    double mediaNumeros;
    mediaNumeros= media(vet, n, &i);

    printf("\nA media eh: %lf", mediaNumeros);
    printf("\nA posicao do elemento mais proximo a media eh: %i", i);
}

double media(double vet[], int n, int *i)
{
    double media= 0;

    for(int count= 0; count < n; count++)
    {
        media = vet[count] + media;
    }

    media= media/n;


    if (n == 1)
    {
        *i= 0; // Se tiver apenas um numero retorna ele mesmo
    }
    else
    {

        if (n % 2 == 0) // verifica se o numero de elementos eh par
        {
            int posicao = n / 2; // retorna o valor do meio;
            *i= posicao - 1;    // posicao levando em conta que i começa de 0 pegando o valor de mais significancia
        }
        else // Se for ímpar: posicao vai ser a do meio
        {
            *i = *i/2;
        }
    }

    return media;
}