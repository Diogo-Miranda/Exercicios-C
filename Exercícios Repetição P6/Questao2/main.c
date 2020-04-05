#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===== Questao 2 - Valor de H ====");

    int quantidade= 0;

    printf("\nInforme ate qual numero da sequencia: ");
    scanf("%i", &quantidade);

    int denominador= 1;
    float h= 0.0;
    float aux= 0.0;
    printf("\nn: ");
    for(int i = 0; i < quantidade; i++)
    {
        printf("1/%i + ", denominador);
        aux = 1.0 / denominador;
        h = h + aux;
        denominador = denominador * 3;
    }
    printf("0");
    printf("\nValor de H: %f", h);

    return 0;
}
