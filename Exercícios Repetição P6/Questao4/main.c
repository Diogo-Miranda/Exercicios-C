#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("==== Questao 4 =====");

    bool ehMaior= 0;

    float num= 0.0;
    printf("\nInforme o 1o numero: ");
    scanf("%f", &num);

    float media = num,
          maior = num;
    for(int i = 1; i < 10; i++)
    {
        printf("\nInforme o %io numero: ", i+1);
        scanf("%f", &num);
        media += num;

        ehMaior = num > maior;
        if(ehMaior)
        {
            maior = num;
        }
    }

    media = media/10;

    printf("\nMedia= %.2f", media);
    printf("\nMaior= %.2f", maior);
    return 0;
}
