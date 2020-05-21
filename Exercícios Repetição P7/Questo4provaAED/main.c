#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 4 ====");

    float num= 0;
    printf("\nInforme um numero: ");
    scanf("%f", &num);

    int negativos= 0,
        positivos= 0;

    while(num != 0)
    {
        if(num < 0)
        {
            negativos++;
        }else
        {
            if(num > 0)
            {
                positivos++;
            }
        }

        printf("\nInforme um numero: ");
        scanf("%f", &num);
    }

    printf("\nQuantidade de negativos: %i", negativos);
    printf("\nQuantidade de positivos: %i", positivos);
    return 0;
}
