#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
float leitura(char posicao[]);
float calculaMaior(float numero1, float numero2);
void mostraMaior(float maior);

/***************************************************************
* Assinatura da fun��o: int main()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Calcular o maior entre dois valores reais
* Dados de entrada (argumentos): Dois numeros reais
* Dado de sa�da (valor gerado pela fun��o): O maior entre dois numeros
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
* Assinatura da fun��o: apresentacao()
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Apresentar o problema
* Dados de entrada (argumentos): vazio
* Dado de sa�da (valor gerado pela fun��o): Calcular o maior entre dois valores reais
****************************************************************
*/

void apresentacao()
{
    printf("\nCalcular o maior entre dois valores reais");
}

/***************************************************************
* Assinatura da fun��o: float leitura(char posicao[])
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler numeros reais
* Dados de entrada (argumentos): char posicao[]
* Dado de sa�da (valor gerado pela fun��o): numero real
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
* Assinatura da fun��o: float calculaMaior(float numero1, float numero2)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Calcular o maior entre dois numeros
* Dados de entrada (argumentos): Dois numeros reais
* Dado de sa�da (valor gerado pela fun��o): O maior numero entre esses
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
* Assinatura da fun��o: void mostraMaior(float maior)
* Data da elabora��o: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Mostrar o maior numero
* Dados de entrada (argumentos): O numero maior
* Dado de sa�da (valor gerado pela fun��o): mensagem o maior numero
****************************************************************
*/

void mostraMaior(float maior)
{
        printf("\nO numero %.2f eh o maior. ", maior);
}
