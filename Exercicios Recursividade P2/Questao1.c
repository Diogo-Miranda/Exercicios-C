#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipação;
int fibonacciRecursivo(int k);

int main()
{
    int k;
    int num= 0;
    bool ERRO= false;

    do
    {
        printf("\n Sequencia de Fibonacci ");
        printf("\nInforme o k= ");
        scanf("%i", &k);
        ERRO= k <= 0;
        if (ERRO) printf("\nInforme um numero inteiro positivo");
    } 
    while (ERRO);

    for(int i= 0; i < k; i++)
    {
        printf("%i ", num);
        num= fibonacciRecursivo(i+1);
    }

}


/***************************************************************
 * Assinatura da função: int fibonacciRecursivo(int k)
 * Data da elaboração: 07/05/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Criar uma sequência de fibonacci utilizando recurso da recursividade
 * Dados de entrada (argumentos): inteiro k 
 * Dado de saída (valor gerado pela função): um numero inteiro com o valor naquela posição da sequência
 ****************************************************************
 */
int fibonacciRecursivo(int k)
{
    int num;

    if ( (k == 1) || (k == 2) )
    {
        num= 1;
    } 
    else
    {
        num = fibonacciRecursivo(k-1) + fibonacciRecursivo (k-2);
    }

    return num;
}