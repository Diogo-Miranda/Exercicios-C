#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,
          peso_ideal = 0;
    char genero;

    printf("\n f = Feminimo \n");
    printf("\n m = Masculino\n ");
    printf("\n Informe o genero: ");
    scanf("%s", &genero);
    printf("\n Informe sua altura: ");
    scanf("%f", &altura);

    if(genero == 'm')
    {
        peso_ideal = (72.7 * altura) - 58;
    }else
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }

    printf("\n Peso ideal = %.2f", peso_ideal);
}
