#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,
          altura,
          area = 0;
    printf("\n Informe a base: ");
    scanf("%f", &base);
    printf("\n Informe a altura: ");
    scanf("%f", &altura);

    area = (base * altura);

    printf("\n Area = %.2f", area);
}
