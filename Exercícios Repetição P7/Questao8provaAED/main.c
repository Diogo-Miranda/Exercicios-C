#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Questao 8 ====");

    float h= 0;
    int numerador= 1;
    int denominador = 1;
    float termo= 0;

    do
    {
        printf("\nTermo = %i/%i", numerador, denominador);
        termo= (float)numerador/(float)denominador;
        h= termo+h;
        numerador= numerador + 2;
        denominador= denominador + 1;

    }
    while( (numerador != 99) && (denominador != 50) );

    printf("\nTermo = %i/%i", numerador, denominador);

            int f= 0;
    for(f; f > 0; f--)
    {
        printf("%i", f);
    }
    printf("\nH= %f", h);
    return 0;
}
