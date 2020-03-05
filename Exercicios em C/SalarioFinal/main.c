#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n == Calcula Salario Final == ");

    float horasTrabalhadas,
          horasExtras,
          salarioMinimo,
          salarioReceber,
          valorHora,
          salarioComExtra,
          valorHoraExtra,
          salarioBruto = 0;

    printf("\n Informe o salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("\n Informe as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("\n Informe as horas extras: ");
    scanf("%f", &horasExtras);

    valorHora = salarioMinimo/8;
    valorHoraExtra = salarioMinimo/4;
    salarioBruto = valorHora*horasTrabalhadas;
    salarioComExtra = valorHoraExtra*horasExtras;
    salarioReceber = salarioBruto + salarioComExtra;

    printf("\n O seu salario sera: %.2f", salarioReceber);

    return 0;
}
