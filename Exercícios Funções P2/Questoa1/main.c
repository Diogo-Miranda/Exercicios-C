#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
float leitura(char posicao[]);
float calculaMaior(float numero1, float numero2);
void mostraMaior(float maior);

/***************************************************************
* Assinatura da função: int main()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Calcular o maior entre dois valores reais
* Dados de entrada (argumentos): Dois numeros reais
* Dado de saída (valor gerado pela função): O maior entre dois numeros
****************************************************************
*/

int main()
{
    apresentacao();
    float maior;
    float numero1 = leitura("primeiro");
    float numero2 = leitura("segundo");
    maior= calculaMaior(numero1,numero2);
    mostraMaior(maior);

    return 0;
}

/***************************************************************
* Assinatura da função: apresentacao()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Apresentar o problema
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função): Calcular o maior entre dois valores reais
****************************************************************
*/

void apresentacao()
{
    printf("\nCalcular o maior entre dois valores reais");
}

/***************************************************************
* Assinatura da função: float leitura(char posicao[])
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler numeros reais
* Dados de entrada (argumentos): char posicao[]
* Dado de saída (valor gerado pela função): numero real
****************************************************************
*/

float leitura(char posicao[])
{
    float numero= 0;
    printf("\nInforme o %s numero: ", posicao);
    scanf("%f", &numero);

    return numero;
}

/***************************************************************
* Assinatura da função: float calculaMaior(float numero1, float numero2)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Calcular o maior entre dois numeros
* Dados de entrada (argumentos): Dois numeros reais
* Dado de saída (valor gerado pela função): O maior numero entre esses
****************************************************************
*/

float calculaMaior(float numero1, float numero2)
{
    float maior;
    if(numero1 > numero2)
    {
        maior= numero1;
    }else
    {
        if(numero2 > numero1)
        {
            maior= numero2;
        }
    }

    return maior;
}

/***************************************************************
* Assinatura da função: void mostraMaior(float maior)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Mostrar o maior numero
* Dados de entrada (argumentos): O numero maior
* Dado de saída (valor gerado pela função): mensagem o maior numero
****************************************************************
*/

void mostraMaior(float maior)
{
        printf("\nO numero %.2f eh o maior. ", maior);
}
