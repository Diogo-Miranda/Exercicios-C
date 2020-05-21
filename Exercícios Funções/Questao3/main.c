#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void mostrarPrograma();
char lerGenero();
float lerAltura();
float calculaPeso(char genero, float altura);
void mostrarPeso(float peso);

int main()
{
    mostrarPrograma();
    mostrarPeso(calculaPeso(lerGenero(), lerAltura()));
    return 0;
}

void mostrarPrograma()
{
    printf("==== Questao 3 =====");
    printf("\nPeso ideal;");
}

char lerGenero()
{
    char genero;
    bool ERRO;

    do
    {
        printf("\nInforme seu genero: [M/F] ");
        fflush(stdin);
        scanf("%c", &genero);
        genero= toupper(genero);
        ERRO= (genero != 'F' && genero != 'M');
        if (ERRO) printf("\nValor de genero invalido. ");
    }
    while(ERRO);

    return(genero);
}

float lerAltura()
{
    float altura;
    bool ERRO;

    do
    {
        printf("\nInforme sua altura: ");
        scanf("%f", &altura);
        ERRO = altura < 0;
        if (ERRO) printf("\nAltura invalida. ");
    }
    while(ERRO);

    return(altura);
}

float calculaPeso(char genero, float altura)
{
    float peso;
    if(genero == 'M')
    {
        peso= (72.7*altura) - 58;
    }else
    {
        if(genero == 'F')
        {
            peso= (62.1*altura) - 44.7;
        }
    }

    return(peso);
}

void mostrarPeso(float peso)
{
    printf("\nO seu peso Ideal eh: %f", peso);
}
