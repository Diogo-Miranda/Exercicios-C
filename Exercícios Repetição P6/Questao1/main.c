#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===== Questao 1 - Valor de H ====");

    int denominador= 1;
    float h= 0.0;
    float aux= 0.0;
    printf("\nn: ");
    for(int i = 0; i < 4; i++)
    {
        printf("1/%i + ", denominador);
        aux = 1.0 / denominador;
        h = h + aux;
        denominador = denominador * 3;
    }
    printf("...");
    printf("\nValor de H: %f", h);

    return 0;
}
