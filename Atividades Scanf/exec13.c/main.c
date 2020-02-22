#include <stdio.h>
#include <stdlib.h>

int main()
{
    float graus_celsius,
          graus_farenheit = 0.0;
    printf("Informe a temperatura em Farenheit: ");
    scanf("%f", &graus_farenheit);

    graus_celsius = (5.0 / 9.0) * (graus_farenheit - 32);
    printf(" Graus Celsius = %.2f ", graus_celsius);
}
