#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void escrever(int limiteInferor, int limiteSuperior); 
void leitura(int *limiteInferior, int *limiteSuperior); //Ler por passagem por referência

int main()
{
    printf("\n Questao recursiva 3 \n");
    int limiteInferior= 0, 
        limiteSuperior= 0;

    leitura(&limiteInferior, &limiteSuperior);   
    escrever(limiteInferior, limiteSuperior);

    return 0;
}

void leitura(int *limiteInferior, int *limiteSuperior)
{
    printf("\nInforme o primeiro limite: ");
    scanf("%i", limiteInferior);

    printf("\nInforme o segundo limite: ");
    scanf("%i", limiteSuperior);

    if(*limiteInferior > *limiteSuperior)
    {
        int aux = *limiteInferior;
        *limiteInferior= *limiteSuperior;
        *limiteSuperior= aux;
    }
}

void escrever(int limiteInferior, int limiteSuperior)
{
    if(limiteInferior <= limiteSuperior)
    {
        printf("%i,", limiteInferior);
        escrever(limiteInferior+1, limiteSuperior);
        printf("%i, ", limiteInferior); 
    }
}
