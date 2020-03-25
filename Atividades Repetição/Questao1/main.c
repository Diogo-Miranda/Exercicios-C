#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== A + B e menor do que C ===");

    float a,
          b,
          c = 0;

    printf("\n Informe o valor de A: ");
    scanf("%f", &a);

    printf("\n Informe o valor de B: ");
    scanf("%f", &b);

    printf("\n Informe o valor de C: ");
    scanf("%f", &c);

    bool ehMenor = a + b < c;

    if(ehMenor)
    {
        printf("A soma de A + B e menor que C");
    }else
        {
            printf("A soma de A + B nao e menor que C");
        }
    return 0;
}
