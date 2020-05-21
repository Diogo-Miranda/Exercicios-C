#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
float leituraBase();
float leituraAltura();
float calculaArea(float base, float altura);
void mostrarArea(float area);

int main()
{
    printf("=== Questao 2 ====");
    mostrarArea(calculaArea(leituraBase(), leituraAltura()));
    return 0;
}

float leituraBase()
{
    float base;
    bool ERRO;

    do
    {
        printf("\nInforme a base: ");
        scanf("%f", &base);
        ERRO = base < 0;
        if (ERRO) printf("\nValor da base invalido. ");
    }
    while(ERRO);

    return(base);
}

float leituraAltura()
{
    float altura;
    bool ERRO;

    do
    {
        printf("\nInforme a altura: ");
        scanf("%f", &altura);
        ERRO = altura < 0;
        if (ERRO) printf("\nValor da altura invalido. ");
    }
    while(ERRO);

    return(altura);
}

float calculaArea(float base, float altura)
{
    float area= base*altura;
    return(area);
}

void mostrarArea(float area)
{
    printf("\nA area calculada eh: %.2f", area);
}
