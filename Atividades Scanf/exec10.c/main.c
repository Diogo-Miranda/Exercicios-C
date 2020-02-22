#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio,
          perimetro = 0;

    printf("\n Informe o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2*3.14*raio;

    printf("\n Perimetro = %.2f", perimetro);
}
