#include <stdio.h>
#include <stdlib.h>

//prototipa��o
void leitura(float *X);
void maiorValor(float *X, float *Y, float *maior);
 void mostraMaior(float *maior);

int main()
{
    printf("==== Maior de dois Numeroas ====");

    float n1, n2;
    leitura(&n1);
    leitura(&n2);
    float maior;
    maiorValor(&n1, &n2, &maior);
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

void leitura(float *X)
{
    float num;
    printf("\nInforme um numero real: ");
    scanf("%f", &num);

    *X = num;
}

/***************************************************************
 * Assinatura da fun��o: void maiorValor(float *X, float *Y, float *PonteiroMaior)
 * Data da elabora��o: 24/04/2020
 * Autor: Diogo Araujo
 * Objetivo: ver o maior valor dentre dois numeros
 * Dados de entrada (argumentos): tres ponteiro do tipo float,
 * Dado de sa�da (valor gerado pela fun��o): vazio
 ****************************************************************
 */

 void maiorValor(float *X, float *Y, float *PonteiroMaior)
 {
     float maiorValor;
     maiorValor = *X;

     if(maiorValor < *Y) maiorValor = *Y;

     *PonteiroMaior = maiorValor;
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

 void mostraMaior(float *PonteiroMaior)
 {
     printf("\n O maior valor eh: %f", *PonteiroMaior);
 }
