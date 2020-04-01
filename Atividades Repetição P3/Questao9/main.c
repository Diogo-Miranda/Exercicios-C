#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 9 - Notas dos alunos ====\n");

    int quantidadeAlunos;
    bool ERROR;
    do
    {
            printf("\nInforme a quantidade de alunos da turma: ");
            scanf("%i", &quantidadeAlunos);

            ERROR = quantidadeAlunos <= 0;
            printf("\nQuantidade de alunos invalida");
    }
    while(ERROR);

    ERROR = 0;
    float nota,
          media,
          maior = 0;
    float menor = 100;
    for(int i = 0; i < quantidadeAlunos; i++)
    {
        do
        {
            printf("\nInforme a nota do aluno: ");
            scanf("%f", &nota);

            ERROR = (nota < 0) || (nota > 100);
            if(ERROR) printf("\nValor fora de intervalo [0,100]");
        }
        while(ERROR);

        if(nota >= 60)
        {
            printf("\n Aprovado!");
        }
        else
        {
            printf("\n Reprovado!");
        }

        if(nota > maior)
        {
            maior = nota;
        }
        if(nota < menor)
        {
            menor = nota;
        }
        media = media + nota;
    }

    media = media/quantidadeAlunos;

    printf("\nMedia= %.2f", media);
    printf("\nMaior nota= %.2f", maior);
    printf("\nMenor nota = %.2f", menor);
    return 0;
}
