#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
 * Assinatura da função: Calcular perimetro de um quadrado
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Calcular o perimetro de um quadrado
 * Dados de entrada (argumentos): lado
 * Dado de saída (valor gerado pela função): perimetro
 ****************************************************************
 */

void apresentacao();
float leitura();
float calculaPerimetro(float lado);
void mostraPerimetro(float perimetro);

int main()
{
    apresentacao();
    mostraPerimetro(calculaPerimetro(leitura()));
    return 0;
}

/***************************************************************
 * Assinatura da função: void apresentacao()
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Apresentar a solucao
 * Dados de entrada (argumentos): vazio
 * Dado de saída (valor gerado pela função): mensagem de apresentacao
 ****************************************************************
 */

void apresentacao()
{
    printf("\nCalcular o perimetro de um quadrado. ");
}

/***************************************************************
 * Assinatura da função: float leitura()
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Ler os valores
 * Dados de entrada (argumentos): vazio
 * Dado de saída (valor gerado pela função): um valor real
 ****************************************************************
 */

float leitura()
{
    float lado= 0;
    bool ERRO= false;

    do
    {
        printf("\nInforme o lado do quadrado: ");
        scanf("%f", &lado);
        ERRO= lado < 0;
        if (ERRO) printf("\nValor de lado invalido. ");
    }
    while(ERRO);

    return lado;
}

/***************************************************************
 * Assinatura da função: float calculaPerimetro(float lado)
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Calcular perimetro de um quadrado
 * Dados de entrada (argumentos): lado do quadrado
 * Dado de saída (valor gerado pela função): perimetro do quadrado
 ****************************************************************
 */

float calculaPerimetro(float lado)
{
    float perimetro= lado*4;

    return perimetro;
}

/***************************************************************
 * Assinatura da função: void mostraPerimetro(float perimetro)
 * Data da elaboração: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Mostrar perimetro do quadrado
 * Dados de entrada (argumentos): perimetro do quadrado
 * Dado de saída (valor gerado pela função): mensagem com o perimetro
 ****************************************************************
 */

void mostraPerimetro(float perimetro)
{
    printf("\nO perimetro do quadrado eh: %.2f", perimetro);
}

