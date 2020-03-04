#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Maior tres valores ");

    float n1,
          n2,
          n3,
          maior = 0;

    printf("\nInforme o primeiro valor: ");
    scanf("%f", &n1);
    printf("\nInforme o segundo valor: ");
    scanf("%f", &n2);
    printf("\nInforme o terceiro valor: ");
    scanf("%f", &n3);

    if( (n1 > n2) && (n1 > n3))
    {
        maior = n1;
    }else if ( (n2 > n1) && (n2 > n3))
    {
        maior = n2;
    }else if( (n3 > n1) && (n3 > n2))
    {
        maior = n3;
    }

    printf("\n O maior numero e : %.2f ", maior);

    return 0;
}
