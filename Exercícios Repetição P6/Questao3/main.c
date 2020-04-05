#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 3 =====");

    float denominador = 100;
    float numerador = 10;
    float aux;
    bool tahInvertido = 0;
    float num;
    for(int i = 0; i < 10; i++)
    {
        num = numerador / denominador;
        printf("\n%.0f/%.0f", numerador, denominador);
        if(tahInvertido)
        {
            numerador--;
            denominador++;
        }else
        {
            numerador++;
            denominador--;
        }

        aux = numerador;
        numerador = denominador;
        denominador = aux;
        tahInvertido = !tahInvertido;
    }
    printf("\nN= %f", num);
    return 0;
}
