#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("==== Questao 5 =====");

    bool ehMaior= 0;

    float num= 0.0;
    printf("\nInforme o 1o numero: ");
    scanf("%f", &num);
    int i = 0;
    float media = num,
          maior = num;
    if(num != 0)
    {
        do
        {
            i++;
            printf("\nInforme o %io numero: ", i+1);
            scanf("%f", &num);

            if(num != 0)
            {
                media += num;
                ehMaior = num > maior;
                if(ehMaior)
                {
                    maior = num;
                }
            }
        }
        while(num != 0);
    }
    if(i > 0)
    {
            media = media/10;

            printf("\nMedia= %.2f", media);
            printf("\nMaior= %.2f", maior);
    }else
    {
        printf("\nNenhuma leitura realizada");
    }
    return 0;
}
