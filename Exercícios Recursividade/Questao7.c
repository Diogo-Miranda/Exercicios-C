#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

//Prototipação
void leitura(int *base, int *expoente); // Base inteira e expoente inteiro positivo
int potenciacao(int base, int expoente);

int main()
{
    int base,
        expoente;
    leitura(&base, &expoente);

    int pot= potenciacao(base, expoente);

    printf("\nO valor de %i^%i eh: %i", base, expoente, pot);
    return 0;
}

void leitura(int *base, int *expoente)
{
    bool ERRO= false;
    printf("\nInforme o valor da base: ");
    scanf("%i", base);
    do
    {
        printf("\nInforme o valor do expoente: ");
        scanf("%i", expoente);
    }   
    while (ERRO);
}

int potenciacao(int base, int expoente)
{
    int pot;

    if(expoente > 0)
    {
        pot = base * potenciacao(base, expoente-1);
    } else
    {
        pot= 1;
    }
    
    return pot;
}