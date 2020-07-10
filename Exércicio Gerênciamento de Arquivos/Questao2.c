#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void lerIdade();
int calculaMediaIdades();

int main()
{
    lerIdade();
    int alunosAcimaMedia = calculaMediaIdades();
    printf("\nQuantidade alunos acima da media = %i", alunosAcimaMedia);

    return 0;
}

void lerIdade()
{
    FILE *arq;
    arq = fopen("idades.dat", "w");
    int idade;
    bool sair;
    bool ERRO;

    do
    {
        printf("\nInforme a idade: ");
        scanf("%i", &idade);
        ERRO = idade < 0;
        if (ERRO)
            printf("\nInforme uma idade que exista!");
    } while (ERRO);

    while (!sair)
    {
        fprintf(arq, "%i", idade);
        do
        {
            printf("\nInforme a idade: ");
            scanf("%i", &idade);
            ERRO = idade < 0;
            if (ERRO)
                printf("\nInforme uma idade que exista!");
        } while (ERRO);
        
        sair = idade == 0;
        if(!sair) {
            fprintf(arq, "\n");
        }
    }

    fclose(arq);
}

int calculaMediaIdades()
{
    FILE *arq;
    arq = fopen("idades.dat", "r");
    int idade = 0;
    int media = 0;
    int i = 0;

    while (!feof(arq))
    {
        fscanf(arq, "%i", &idade);
        media += idade;
        i++;
    }
    
    fclose(arq);
    media = media / (i);

    arq = fopen("idades.dat", "r");
    int alunosAcimaMedia = 0;
    for(int j = 0; j < i; j++) {
        fscanf(arq, "%i", &idade);
        if(idade > media) {
            alunosAcimaMedia++;
        }
    }

    fclose(arq);

    return alunosAcimaMedia;
}