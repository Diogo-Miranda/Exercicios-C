#include <stdio.h>
#include <stdlib.h>

void lerValor(float *X);
float maiorValor(float *X, float*Y);
void mostraMaior(float *ponteiroMaior);

int main()
{
    printf("==== Questao 3 ====");
    float num1,
          num2;

    lerValor(&num1);
    lerValor(&num2);

    float maior = maiorValor(&num1,&num2);

    mostraMaior(&maior);

    return 0;
}

/***************************************************************
 * Assinatura da função: Leitura de Valores
 * Data da elaboração: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: Ler valores por meio de funcoes void
 * Dados de entrada (argumentos): X do tipo ponteiro
 * Dado de saída (valor gerado pela função): vazio
 ****************************************************************
 */

void lerValor(float *X)
{
    float num;
    printf("\nInforme um numero real: ");
    scanf("%f", &num);

    *X = num;
}

/***************************************************************
 * Assinatura da função: float maiorValor(float *X, float*Y)
 * Data da elaboração: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: ver o maior valor dentre dois numeros
 * Dados de entrada (argumentos): dois ponteiro do tipo float,
 * Dado de saída (valor gerado pela função): real com o maior valor
 ****************************************************************
 */

float maiorValor(float *X, float*Y)
{
    float maior = *X;
    if(maior < *Y) maior = *Y;

    return maior;
}

 /***************************************************************
 * Assinatura da função: void mostraMaior(float *PonteiroMaior)
 * Data da elaboração: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: Mostrar maior valor
 * Dados de entrada (argumentos): um ponteiro do tipo real com o maior valor
 * Dado de saída (valor gerado pela função): vazio
 ****************************************************************
 */

void mostraMaior(float *ponteiroMaior)
{
    printf("\nO maior valor eh: %f", *ponteiroMaior);
}
