#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 7 =====");

    float X;
    printf("\nInforme um numero: ");
    scanf("%f", &X);

    int Z = 1;
    for( int i = 1;  i <= 10;  i++)
    {
       Z = Z * X;
    }
    printf("\n%i", Z);

    printf("\nInforme um numero: ");
    scanf("%f", &X);

    Z = 1;
    int i= 1;
    while(i <= 10)
    {
        Z = Z* X;
        i++;
    }
    printf("\n%i", Z);

    return 0;
}
