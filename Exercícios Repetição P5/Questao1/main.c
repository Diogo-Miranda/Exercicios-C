#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 1 - Informacoes da Turma ====");

    bool ERRO;
    int quantidadeAlunos;
    do
    {
       printf("\nInforme a quantidade de alunos da turma: ");
       scanf("%i", &quantidadeAlunos);
       ERRO = quantidadeAlunos < 0;
       if(ERRO) printf("\nNumero de alunos invalido");
    }
    while(ERRO);

    if(quantidadeAlunos > 0)
    {
        int idade= 0,
            maiorIdade= 0,
            menorIdade= 0,
            quantidadeMulheres= 0,
            quantidadeHomens= 0;
        char genero;

        float percentualMulheres= 0.0,
              percentualHomens= 0.0;

        do
        {
            printf("\nInforme o genero [m/f] : ");
            fflush(stdin);
            scanf("%c", &genero);
            genero = tolower(genero);
            ERRO = (genero != 'm') && (genero != 'f');
            if(ERRO) printf("\nGenero invalido");
        }
        while(ERRO);

        if(genero == 'm')
        {
            quantidadeHomens++;
        }
        if(genero == 'f')
        {
            quantidadeMulheres++;
        }

        do
        {
            printf("\nInforme a idade: ");
            scanf("%i", &idade);
            ERRO = (idade < 0) || (idade > 100);
            if (ERRO) printf("\nIdade fora do intervalo [0,100]");
        }
        while(ERRO);

        maiorIdade = idade;
        menorIdade = idade;

        for(int i = 0; i < (quantidadeAlunos - 1); i++)
        {
            do
            {
                printf("\nInforme o genero [m/f] : ");
                fflush(stdin);
                scanf("%c", &genero);
                genero = tolower(genero);
                ERRO = (genero != 'm') && (genero != 'f');
                if(ERRO) printf("\nGenero invalido");
            }
            while(ERRO);

            if(genero == 'm')
            {
                quantidadeHomens++;
            }

            if(genero == 'f')
            {
                quantidadeMulheres++;
            }

            do
            {
                printf("\nInforme a idade: ");
                scanf("%i", &idade);
                ERRO = (idade < 0) || (idade > 100);
                if (ERRO) printf("\nIdade fora do intervalo [0,100]");
            }
            while(ERRO);

            if(idade > maiorIdade)
            {
                maiorIdade = idade;
            }else
            {
                if(idade < menorIdade)
                {
                    menorIdade = idade;
                }
            }
        }
        printf("\n Idade da pessoa mais velha: %i", maiorIdade);
        printf("\n Idade da pessoa mais nova: %i", menorIdade);
        percentualMulheres = ((float)quantidadeMulheres/(float)quantidadeAlunos) *100;
        printf("\n Percentual de mulheres: %.2f", percentualMulheres);
        percentualHomens = ((float)quantidadeHomens/(float)quantidadeAlunos)*100;
        printf("\n Percentual de homens: %.2f", percentualHomens);
     }
     else
     {
         printf("\nNenhum aluno na turma");
     }

    return 0;
}
