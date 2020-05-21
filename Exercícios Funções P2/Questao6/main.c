#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int leitura();
bool verificaPrimo(int numero);
void mostraPrimo(bool ehPrimo);
char opcao();

int main()
{
    apresentacao();
    char sair;

    do
    {
        mostraPrimo(verificaPrimo(leitura()));
        sair= opcao();
    }
    while(sair == 's');


    return 0;
}

/***************************************************************
* Assinatura da fun��o: void apresentacao()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Apresentar o problema
* Dados de entrada (argumentos): vazio
* Dado de sa�da (valor gerado pela fun��o): mensagem de apresentacao
****************************************************************
*/

void apresentacao()
{
    printf("\n=== Verifica Primo ===");
}

/***************************************************************
* Assinatura da fun��o: int leitura()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: ler um inteiro
* Dados de entrada (argumentos): vazio
* Dado de sa�da (valor gerado pela fun��o):um numero inteiro
****************************************************************
*/

int leitura()
{
    int numero= 0;
    bool ERRO= false;

    do
    {
        printf("\nInforme um numero natural: ");
        scanf("%i", &numero);
        ERRO = numero < 0;
        if (ERRO) printf("\nNumero invalido. ");
    }
    while(ERRO);

    return numero;
}

/***************************************************************
* Assinatura da fun��o: bool verificaPrimo(int numero)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: verificar se um numero eh primo
* Dados de entrada (argumentos): numero inteiro
* Dado de sa�da (valor gerado pela fun��o): valor boleano com bit verdadeiro ou !verdadeiro
****************************************************************
*/

bool verificaPrimo(int numero)
{
    bool ehPrimo= true;

    if(numero < 2 || (numero%2 == 0 && numero != 2)) ehPrimo= false;

    int divisor= 3;

    while(ehPrimo && (divisor <= numero/2))
    {
        if(numero%divisor == 0) ehPrimo= false;
    }

    return ehPrimo;
}

/***************************************************************
* Assinatura da fun��o: void mostraPrimo(bool ehPrimo)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Mostrar se um numero eh primo ou nao
* Dados de entrada (argumentos): valor boleano
* Dado de sa�da (valor gerado pela fun��o): mensagem na tela do usuario se o numero eh primo ou n
****************************************************************
*/

void mostraPrimo(bool ehPrimo)
{
    if (ehPrimo) printf("\nO numero informado eh primo. ");
    if (!ehPrimo) printf("\nO numero informado nao eh primo. ");
}

/***************************************************************
* Assinatura da fun��o: char opcao()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler um caractere que sera crucical para verificar se quer sair ou nao do programa
* Dados de entrada (argumentos): vazio
* Dado de sa�da (valor gerado pela fun��o): um caractece s ou n
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
