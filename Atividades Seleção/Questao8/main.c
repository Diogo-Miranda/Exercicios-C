#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Segundo maior valor ");

    float n1,
          n2,
          n3,
          maior,
          segundoMaior = 0;

    printf("\nInforme o primeiro numero: ");
    scanf("%f", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f", &n3);

    if((n1 > n2) && (n1 > n3))
    {
        maior = n1;
    }else if ((n2 > n1) && (n2 > n3))
    {
        maior = n2;
    }else
    {
        maior = n3;
    }

    if((n1 < maior) && ( (n1 > n2) || (n1 > n3)))
    {
        segundoMaior = n1;
    } else if( (n2 < maior) && ( (n2 > n1) || (n2 > n3)))
       {
           segundoMaior = n2;
       } else
        {
            segundoMaior = n3;
        }
    printf("\n O segundo maior numero e = %.2f", segundoMaior);
    return 0;
}
