#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nPeso Ideal");

    char sexo = ' ';
    float altura,
          peso_ideal = 0;

    printf("\nInforme seu sexo: (m/f) ");
    scanf("%c", &sexo);

    printf("\nInforme sua altura: ");
    scanf("%f",&altura);

    if(sexo == 'm')
    {
        peso_ideal = (72.7*altura) - 58;
    }else if (sexo == 'f')
    {
        peso_ideal = (62.1*altura) - 44.7;
    }

    printf("\nO seu peso ideal e: %.2f", peso_ideal);
    return 0;
}
