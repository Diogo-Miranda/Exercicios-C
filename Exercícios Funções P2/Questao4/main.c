#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
 * Assinatura da função: Calcula fatorial de um numero natural
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Calcular o fatorial de um numero
 * Dados de entrada (argumentos): Numero Natural
 * Dado de saída (valor gerado pela função): fatorial deste numero
 ****************************************************************
 */


void apresentacao();
int leitura();
int fatorial(int numero);
void mostraFatorial();
char opcao();

int main()
{
    apresentacao();
    char sair;
    do
    {
        mostraFatorial(fatorial(leitura()));
        sair = opcao();
    }
    while(sair == 's');
    return 0;
}

/***************************************************************
* Assinatura da função: void apresentacao()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Apresentar o problema
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função): mensagem de apresentacao
****************************************************************
*/

void apresentacao()
{
    printf("\nCalcula fatorial de um numero natural.");
}

/***************************************************************
* Assinatura da função: int leitura()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: ler um inteiro
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função):um numero inteiro
****************************************************************
*/

int leitura()
{
    int numero= 0;
    bool ERRO= false;

    do
    {
        printf("\nInforme um numero natural. ");
        scanf("%i", &numero);
        ERRO = numero < 0;
        if (ERRO) printf("\nNumero invalido. ");
    }
    while(ERRO);

    return numero;
}

/***************************************************************
* Assinatura da função: int fatorial(int numero)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: calcula fatorial de um numero
* Dados de entrada (argumentos): um numero inteiro
* Dado de saída (valor gerado pela função): fatorial inteiro desse numero
****************************************************************
*/


int fatorial(int numero)
{
    int fatorial= 1;
    int i= numero;

    while(i != 0)
    {
        for(i; i > 0; i--)
        {
            fatorial= fatorial*i;
        }
    }

    if(numero == 0) fatorial = 0;

    return fatorial;
}

/***************************************************************
* Assinatura da função: void mostraFatorial(int fatorial)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Mostrar o resultado do fatorial
* Dados de entrada (argumentos): uma numero inteiro (fatorial)
* Dado de saída (valor gerado pela função): Mostra mensagem na tela do fatorial de um numero
****************************************************************
*/


void mostraFatorial(int fatorial)
{
    printf("\nO fatorial de numero informado eh: %i", fatorial);
}

/***************************************************************
* Assinatura da função: char opcao()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler um caractere que sera crucical para verificar se quer sair ou nao do programa
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função): um caractece s ou n
****************************************************************
*/

char opcao()
{
    char opcao;
    bool ERRO= false;

    do
    {
        printf("\nDeseja continuar? [s/n] ");
        fflush(stdin);
        scanf("%c", &opcao);
        opcao = tolower(opcao);
        ERRO= (opcao != 's' && opcao != 'n');
        if (ERRO) printf("\nOpcao invalida");
    }
    while(ERRO);

    return opcao;
}
