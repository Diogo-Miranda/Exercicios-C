#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
 * Assinatura da fun��o: Calcular perimetro de um quadrado
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Calcular o perimetro de um quadrado
 * Dados de entrada (argumentos): lado
 * Dado de sa�da (valor gerado pela fun��o): perimetro
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
 * Assinatura da fun��o: void apresentacao()
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Apresentar a solucao
 * Dados de entrada (argumentos): vazio
 * Dado de sa�da (valor gerado pela fun��o): mensagem de apresentacao
 ****************************************************************
 */

void apresentacao()
{
    printf("\nCalcular o perimetro de um quadrado. ");
}

/***************************************************************
 * Assinatura da fun��o: float leitura()
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Ler os valores
 * Dados de entrada (argumentos): vazio
 * Dado de sa�da (valor gerado pela fun��o): um valor real
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
 * Assinatura da fun��o: float calculaPerimetro(float lado)
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Calcular perimetro de um quadrado
 * Dados de entrada (argumentos): lado do quadrado
 * Dado de sa�da (valor gerado pela fun��o): perimetro do quadrado
 ****************************************************************
 */

float calculaPerimetro(float lado)
{
    float perimetro= lado*4;

    return perimetro;
}

/***************************************************************
 * Assinatura da fun��o: void mostraPerimetro(float perimetro)
 * Data da elabora��o: 17/04/2020
 * Autor: Diogo Araujo Miranda
 * Objetivo: Mostrar perimetro do quadrado
 * Dados de entrada (argumentos): perimetro do quadrado
 * Dado de sa�da (valor gerado pela fun��o): mensagem com o perimetro
 ****************************************************************
 */

void mostraPerimetro(float perimetro)
{
    printf("\nO perimetro do quadrado eh: %.2f", perimetro);
}

