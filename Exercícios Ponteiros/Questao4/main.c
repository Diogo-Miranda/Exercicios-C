#include <stdio.h>
#include <stdlib.h>

void lerNumero(float *X);
float ordenarValores(float *A, float *B, float *C);
void mostraSegundoMaior(float segundoMaior);

int main()
{
    printf("==== Questao 4 ====");

    float num1,
          num2,
          num3;

    float segundoMaior;

    lerNumero(&num1);
    lerNumero(&num2);
    lerNumero(&num3);

    segundoMaior = ordenarValores(&num1, &num2, &num3);

    mostraSegundoMaior(segundoMaior);

    return 0;
}

void lerNumero(float *X)
{
    float num;
    printf("\nInforme um numero real: ");
    scanf("%f", &num);

    *X = num;
}

float ordenarValores(float *A, float *B, float *C)
{
    float aux;

    if(*B > *A)
    {
        aux = *B;
        *B = *A;
        *A = aux;
    }

    if(*C > *B)
    {
        aux = *C;
        *C = *B;
        *B = aux;
    }

    if(*B > *A)
    {
        aux = *B;
        *B = *A;
        *A = aux;
    }

    float segundoMaior = *B;

    return segundoMaior;
}

void mostraSegundoMaior(float segundoMaior)
{
    printf("\nO segundo maior eh: %f", segundoMaior);
}
