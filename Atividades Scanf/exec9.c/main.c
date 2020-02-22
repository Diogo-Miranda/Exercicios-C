#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio,
        area = 0;

    printf("\n Informe o raio do circulo: ");
    scanf("%f", &raio);

    area = ((raio*raio)*3.14);

    printf(" Area = %.2f", area);
}
