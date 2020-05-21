#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 2 ====");
    printf("\nDigite -1 para sair");

    float nota= 0.0,
          menorNota= 0.0,
          maiorNota= 0.0;

    int count= 0;

    bool ERRO= false,
         foiAprovado= false;

    do
    {
        printf("\nInforme a nota do aluno: ");
        scanf("%f", &nota);
        ERRO =  (nota < -1 || nota > 100);
        if (ERRO) printf("\nValor de nota invalido");
    }
    while(ERRO);

    foiAprovado = nota >= 60.0;
    if(nota != -1) count++;

    if(foiAprovado)
    {
        menorNota= nota;
    }else
    {
        maiorNota= nota;
    }

    while(!foiAprovado && nota != -1)
    {
        do
        {
            printf("\nInforme a nota do aluno: ");
            scanf("%f", &nota);
            ERRO =  nota < -1;
            if (ERRO) printf("\nValor de nota invalido");
        }
        while(ERRO);
        foiAprovado= nota >= 60.0;

        if(nota != -1)
        {
            if(foiAprovado)
            {
                menorNota= nota;
            }else{
                if(nota > maiorNota)
                {
                    maiorNota= nota;
                }
            }
        }
    }

    while(nota != -1)
    {
        if(foiAprovado)
        {
            if(nota < menorNota)
            {
                menorNota= nota;
            }
        }else
        {
            if(nota > maiorNota)
            {
                maiorNota= nota;
            }
        }
        do
        {
            printf("\nInforme a nota do aluno: ");
            scanf("%f", &nota);
            ERRO =  (nota < -1) || (nota > 100);
            if (ERRO) printf("\nValor de nota invalido");
        }
        while(ERRO);
        foiAprovado= nota >= 60.0;
    }

    if(count == 0)
    {
        printf("\nNenhum valor informado");
    }else
    {
        printf("\nMenor nota obtida por um aluno aprovado: %f", menorNota);
        printf("\nMaior nota obtida por um aluno reprovado: %f", maiorNota);
    }
    return 0;
}
