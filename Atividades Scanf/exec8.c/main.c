#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado,
          area = 0;
    printf("\n Informe o lado do quadrado: ");
    scanf("%f", &lado);

    area = (lado * lado);

    printf("Area = %.2f ", area);
}
