#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
 * Assinatura da fun��o: Identifica impar ou par
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Verificar se um numero eh impar ou par
 * Dados de entrada (argumentos): Um numero inteiro
 * Dado de sa�da (valor gerado pela fun��o): Verificacao se eh par ou impar
 ****************************************************************
 */

void apresentacao();
int leitura();
bool verificar(int numero);
void mostrar(bool ehPar);
char opcao();

int main()
{
    char sair= false;

    apresentacao();

    do
    {
        mostrar(verificar(leitura()));
        sair = opcao();
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
    printf("\nIdentifica se um numero eh impar ou par. ");
}

/***************************************************************
* Assinatura da fun��o: int leitura()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler um inteiro
* Dados de entrada (argumentos): vazio
* Dado de sa�da (valor gerado pela fun��o): retorna um numero inteiro
****************************************************************
*/

int leitura()
{
    int numero= 0;
    printf("\nInforme um numero inteiro: ");
    scanf("%i", &numero);

    return numero;
}

/***************************************************************
* Assinatura da fun��o: bool verificar(int numero)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Verifica se um numero eh par
* Dados de entrada (argumentos): numero inteiro
* Dado de sa�da (valor gerado pela fun��o): booleano que mostra se eh par.
****************************************************************
*/

bool verificar(int numero)
{
    bool ehPar= false;

    if (numero%2 == 0) ehPar= true;

    return ehPar;
}

/***************************************************************
* Assinatura da fun��o: void mostrar(bool ehPar)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: mostra mensagem se um numero eh par ou nao
* Dados de entrada (argumentos): numero boleano
* Dado de sa�da (valor gerado pela fun��o): mensagem na tela
****************************************************************
*/

void mostrar(bool ehPar)
{
    if(ehPar) printf("\nO numero informado eh par. ");
    if(!ehPar) printf("\nO numero informado nao eh par. ");
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

