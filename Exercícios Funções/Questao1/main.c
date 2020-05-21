#include <stdio.h>
#include <stdlib.h>

//Prototipação
void mostrar();
float entrada();
float somar(float numero1, float numero2);
void imprimir(float soma);

int main()
{
    mostrar();
    float soma= somar(entrada(), entrada());
    imprimir(soma);
    return 0;
}

void mostrar()
{
    printf("==== Questao 1 =====");
}

float entrada()
{
    float n1= 0;

    printf("\nInforme um numero: ");
    scanf("%f", &n1);

    return(n1);
}

float somar(float numero1, float numero2)
{
    float soma= (numero1 + numero2);

    return(soma);
}


void imprimir(float soma)
{
    printf("\nA soma dos valores eh: %f", soma);
}


