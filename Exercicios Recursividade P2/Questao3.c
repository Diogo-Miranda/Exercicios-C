#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//Prototipação
void hanoi(int n, int pinoInicial, int pinoFinal, int pinoArmazenamento);

int main()
{
    printf("\nTorre de Hanoi");
    hanoi(3, 1, 3, 2); // 3 pinos I = 1 F = 2 A = 2
    printf("\n");
    return 0;
}

/***************************************************************
 * Assinatura da função: void hanoi(int n, int pinoInicial, int pinoFinal, int pinoArmazenamento)
 * Data da elaboração: 08/05/2020
 * Autor: Diogo Araujo Miranda  
 * Objetivo: Mostrar movimento dos discos na torre de Hanoi
 * Dados de entrada (argumentos): int n, int pinoInicial, int pinoFinal, int pinoArmazenamento
 * Dado de saída (valor gerado pela função): Vazio
 ****************************************************************
 */
void hanoi(int n, int pinoInicial, int pinoFinal, int pinoArmazenamento)
{
    if( n == 1)
    {
        printf("\n %i --> %i ", pinoInicial, pinoFinal);
    }else
    {
        hanoi(n-1, pinoInicial, pinoArmazenamento, pinoFinal );
        printf("\n %i --> %i", pinoInicial, pinoFinal);
        hanoi(n-1, pinoArmazenamento, pinoFinal, pinoInicial);
    }
    
}