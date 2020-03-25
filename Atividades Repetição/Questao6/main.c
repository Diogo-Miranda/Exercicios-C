#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("=== Aluno Aprovado ===");

    float nota1,
          nota2,
          notaFinal = 0;
    bool foiAprovado = 0;
    bool foiReavaliado = 0;
    bool error = 0;

    do
    {
        printf("\n Informe a primeira nota: ");
        scanf("%f", &nota1);

        printf("\n Informe a segunda nota: ");
        scanf("%f", &nota2);

        error = (nota1 < 0 || nota2 > 50);
    }
    while(error);

    notaFinal = (nota1+nota2);
    foiAprovado = notaFinal >= 60;
    foiReavaliado = (notaFinal > 40) && (notaFinal < 60);

    if(foiAprovado)
    {
        printf("\n Aprovado!!!");
    }

    if(foiReavaliado)
    {
        printf("\n Reavaliado");
    }

    if(!foiAprovado && !foiReavaliado)
    {
        printf("\n Reprovado");
    }

    return 0;
}
