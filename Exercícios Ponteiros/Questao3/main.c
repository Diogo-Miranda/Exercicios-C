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
 * Assinatura da fun��o: Leitura de Valores
 * Data da elabora��o: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: Ler valores por meio de funcoes void
 * Dados de entrada (argumentos): X do tipo ponteiro
 * Dado de sa�da (valor gerado pela fun��o): vazio
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
 * Assinatura da fun��o: float maiorValor(float *X, float*Y)
 * Data da elabora��o: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: ver o maior valor dentre dois numeros
 * Dados de entrada (argumentos): dois ponteiro do tipo float,
 * Dado de sa�da (valor gerado pela fun��o): real com o maior valor
 ****************************************************************
 */

float maiorValor(float *X, float*Y)
{
    float maior = *X;
    if(maior < *Y) maior = *Y;

    return maior;
}

 /***************************************************************
 * Assinatura da fun��o: void mostraMaior(float *PonteiroMaior)
 * Data da elabora��o: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: Mostrar maior valor
 * Dados de entrada (argumentos): um ponteiro do tipo real com o maior valor
 * Dado de sa�da (valor gerado pela fun��o): vazio
 ****************************************************************
 */

void mostraMaior(float *ponteiroMaior)
{
    printf("\nO maior valor eh: %f", *ponteiroMaior);
}
