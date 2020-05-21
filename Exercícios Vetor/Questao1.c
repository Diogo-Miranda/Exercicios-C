#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Variáveis Globais
const int tamanhoTurma= 10;

//Prototipação
void lerIdades(int idades[]);
int somaIdades(int idades[]);
float mediaIdades(int idades[]);
int qtAcimaIdadeMedia(int idades[]);
void escreverResultado(int quantidade);

int main()
{
    int idades[tamanhoTurma];
    lerIdades(idades);

    int acima= qtAcimaIdadeMedia(idades);
    escreverResultado(acima);

    return 0;
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: void lerIdades(int idades[])
   Função: Ler valores inteiros e guarda-los em vetor
   Valores de entrada: int idades[]
   Valores de saída: vazio
   --------------------------------------------- */
void lerIdades(int idades[]) //Não retorna nada pois a passagem é por referência
{
    bool ERRO;
    for(int i= 0; i < tamanhoTurma; i++)
    {
        do
        {
            printf("\nInforme a idade do %i.o aluno: ", i+1);
            scanf("%i", &idades[i]);
            ERRO= idades[i] <= 0;
            if(ERRO) printf("\nInforme um numero inteiro positivo");
        }
        while(ERRO);
    }
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: int somaIdades(int idades[])
   Função: Somar os valores das idades em um vetor idade
   Valores de entrada: int idades[]
   Valores de saída: int soma
   --------------------------------------------- */
int somaIdades(int idades[])
{
    int soma= 0;

    for(int i= 0; i < tamanhoTurma; i++)
    {
        soma = soma + idades[i];
    }

    return soma;
}


/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: int mediaIdades(int idades[])
   Função: Calcular a media das idades
   Valores de entrada: int idades[]
   Valores de saída: float media
   --------------------------------------------- */
float mediaIdades(int idades[])
{
    float media;

    media = somaIdades(idades) / tamanhoTurma;

    return media;
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: int qtAcimaIdadeMedia(int idades[])
   Função: Calcular quantidade de alunso tem idade acima da media da turma
   Valores de entrada: int idades[]
   Valores de saída: int quantidade
   --------------------------------------------- */
int qtAcimaIdadeMedia(int idades[])
{
    int quantidade= 0;

    for(int i= 0; i < tamanhoTurma; i++)
    {
        if(idades[i] > mediaIdades(idades))
        {
            quantidade ++;
        }

    }
    return quantidade;
}

/* ---------------------------------------------
   Autor: Diogo Araujo Miranda
   Data: 11/05/2020
   Assinatura: void escreverResultado(int quantidade)
   Função: Escrever o numero de alunos com idade acima da idade media da turma
   Valores de entrada: int quantidade
   Valores de saída: vazio
   --------------------------------------------- */
void escreverResultado(int quantidade)
{
    printf("\nO numero de alunos com a idade acima da media da turma eh: %i", quantidade);
}
