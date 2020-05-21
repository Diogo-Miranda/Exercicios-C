#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
float leitura(char parte[]);
float calcularPotencia(float base, float expoente);
bool confereExpoente(float expoente);
void mostraPotencia(float potencia);
char opcao();

int main()
{
    char sair;
    apresentacao();
    do
    {
        bool ERRO= false;
        float base= leitura("base");
        float expoente= leitura("expoente");
        ERRO= confereExpoente(expoente);
        if (!ERRO)
        {
            mostraPotencia(calcularPotencia(base, expoente));
        }else
        {
            printf("\nOcorreu algum erro com o expoente");
        }

        sair= opcao();
    }
    while(sair == 's');
    return 0;

}

/***************************************************************
* Assinatura da função: void apresentacao()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Apresentar o problema
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função): mensagem de apresentacao
****************************************************************
*/

void apresentacao()
{
    printf("\n=== Potenciacao de um numero ===");
}

/***************************************************************
* Assinatura da função: float leitura(char parte[])
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: ler um real
* Dados de entrada (argumentos): um conjunto de caracteres que informa oq quer ser lido
* Dado de saída (valor gerado pela função): um numero real
****************************************************************
*/

float leitura(char parte[])
{
    float numero;

    printf("\nInforme a/o %s desejada: ", parte);
    scanf("%f", &numero);

    return numero;
}

/***************************************************************
* Assinatura da função: bool confereExpoente(float expoente)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: confere se o expoente eh um numero inteiro
* Dados de entrada (argumentos): um expoente real
* Dado de saída (valor gerado pela função): boleano com bit de erro ou !erro
****************************************************************
*/

bool confereExpoente(float expoente)
{
    bool ERRO= false;

    int expoenteInteiro= (int)expoente;

    if(expoenteInteiro != expoente)
    {
        ERRO= true;
    }

    return ERRO;
}

/***************************************************************
* Assinatura da função: float calcularPotencia(float base, float expoente)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: calcular potencia de um numero
* Dados de entrada (argumentos): numero real
* Dado de saída (valor gerado pela função): potencia do numero real
****************************************************************
*/

float calcularPotencia(float base, float expoente)
{
    float potencia= 1;

    for(int i= 1; i <= expoente; i++)
    {
        potencia= potencia*base;
    }

    return potencia;
}

/***************************************************************
* Assinatura da função: void mostraPotencia(float potencia)
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: mostrar a potencia calculada
* Dados de entrada (argumentos): real com o valor da potencia
* Dado de saída (valor gerado pela função): mensagem mostrando a potencia
****************************************************************
*/

void mostraPotencia(float potencia)
{
    printf("\nA potencia do numero informado em tal base eh: %.2f", potencia);
}


/***************************************************************
* Assinatura da função: char opcao()
* Data da elaboração: 17/04/2020
* Autor: Diogo Araujo Miranda
*  Objetivo: Ler um caractere que sera crucical para verificar se quer sair ou nao do programa
* Dados de entrada (argumentos): vazio
* Dado de saída (valor gerado pela função): um caractece s ou n
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
