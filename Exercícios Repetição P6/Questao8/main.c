#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 8 ====");

    bool flag;
    bool ERRO;
    float salario= 0;
    float mediaSalarial= 0;
    int count= 0;

    do
    {
        do
        {
            printf("\nInforme seu salario: ");
            scanf("%f", &salario);
            ERRO = salario < 0;
            if (ERRO) printf("\nValor se salario invalido");
        }
        while(ERRO);

        if(salario != 0)
        {
            if(salario <= 1000)
            {
                salario = salario*1.10; // +10%
                printf("\nSalario apos reajuste: %.2f\n", salario);
            }else
            {
                if( (salario > 1000) && (salario <= 2000) )
                    {
                        salario = salario*1.08; // +8%
                        printf("\nSalario apos reajuste: %.2f\n", salario);
                    }else
                    {
                        if(salario > 2000)
                        {
                            salario = salario*1.07; // +7%
                            printf("\nSalario apos reajuste: %.2f\n", salario);
                        }
                    }
            }
            count++;
            mediaSalarial += salario;
        }
    }
    while(salario != 0);

    if(count > 0)
    {
        mediaSalarial = mediaSalarial/count;
        printf("\nMedia dos salarios= %.2f", mediaSalarial);
    }else
    {
        printf("\nNenhum salario executado. ");
    }


    return 0;
}
