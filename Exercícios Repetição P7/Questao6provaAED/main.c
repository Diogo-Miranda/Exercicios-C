#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 6 ====");

    int base = 2;
    int expoente = 4;
    int resultado= 1;

    while(expoente > 0)
    {
        resultado= resultado*base;
        expoente--;
    }
    printf("\n%i", resultado);

    base = 5;
    expoente= 3;
    resultado= 1;

    do
    {
        resultado= resultado*base;
        expoente--;
    }
    while(expoente > 0);
    printf("\n%i", resultado);

    base = 2;
    expoente= 10;
    resultado= 1;

    for(int i= 0; i < expoente; i++)
    {
        resultado= resultado*base;
    }
    printf("\n%i", resultado);

    return 0;
}
