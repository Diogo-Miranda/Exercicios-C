#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void mostrarPrograma();
int leituraAnos();
int calculaDias(int anos);
void mostrarDias(int quantidadeDias);

int main()
{
    mostrarPrograma();
    mostrarDias(calculaDias(leituraAnos()));
    return 0;
}

void mostrarPrograma()
{
    printf("=== Questao 4 ====");
    printf("\nDias Vividos");
}

int leituraAnos()
{
    int anos;
    bool ERRO;

    do
    {
        printf("\nInforme quantos anos voce tem: ");
        scanf("%i", &anos);
        ERRO = anos < 0;
        if (ERRO) printf("\nIdade invalida");
    }
    while(ERRO);

    return(anos);
}

int calculaDias(int anos)
{
    int quantidadeDias= anos*365;

    return(quantidadeDias);
}

void mostrarDias(int quantidadeDias)
{
    printf("\nVoce viveu %i dias", quantidadeDias);
}



