#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 5 ====");

    bool ERRO= false;

    float salarioMinimo= 0;
    do
    {
        printf("\nInforme o valor do salario minimo: ");
        scanf("%f", &salarioMinimo);
        ERRO= salarioMinimo < 0;
        if (ERRO) printf("\nValor de salario invalido.");
    }
    while(ERRO);

    int numeroFuncionarios= 0;
    do
    {
        printf("\nInforme a quantidade de funcionarios: ");
        scanf("%i", &numeroFuncionarios);
        ERRO= numeroFuncionarios < 0;
        if (ERRO) printf("\nNumero de funcionarios invalido.");
    }
    while(ERRO);

    float salario= 0,
          menorSalario= 0;
    int count= 0,
        i= 0;

    bool inseriu_menorSalario= false;

    while(i < numeroFuncionarios && inseriu_menorSalario==false)
    {
        do
        {
            printf("\nInforme o salario de %io funcionario: ", (i+1) );
            scanf("%f", &salario);
            ERRO= salario < 0;
            if (ERRO) printf("\nSalario invalido");
        }
        while(ERRO);

        if(salario == salarioMinimo)
        {
            count++;
        }

        if(salario > salarioMinimo)
        {
            menorSalario= salario;
            inseriu_menorSalario= true;
        }
        i++;
    }

    for(i; i < numeroFuncionarios; i++)
    {
        do
        {
            printf("\nInforme o salario de %io funcionario: ", (i+1) );
            scanf("%f", &salario);
            ERRO= salario < 0;
            if (ERRO) printf("\nSalario invalido");
        }
        while(ERRO);

        if(salario == salarioMinimo)
        {
            count++;
        }

        if(salario < menorSalario && salario > salarioMinimo)
        {
            menorSalario = salario;
        }
    }

    printf("\nQuantidade de funcionarios que recebem o salario minimo: %i", count);
    printf("\nMenor salario dentre os salarios superiores ao salario minimo: %.2f", menorSalario);

    return 0;
}
