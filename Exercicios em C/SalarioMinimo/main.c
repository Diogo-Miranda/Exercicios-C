#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n == Calculadora Salarios Mínimos == ");

    float salario,
          salariosMinimos = 0;

    printf("\n Informe o seu salario: ");
    scanf("%f", &salario);

    salariosMinimos = salario/998.00;

    printf("\n Seu salario equivale a %.1f", salariosMinimos);
    printf(" salarios minimos.");
    return 0;
}
