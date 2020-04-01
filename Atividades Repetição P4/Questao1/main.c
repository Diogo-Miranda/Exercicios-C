#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 1 - Amplitudade dos numeros ====");

    float numeros= 0.0;
    float maior,
          menor= 0.0;

    float amplitude = 0.0;

    printf("\n Informe um numero real: ");
    scanf("%f", &numeros);

    maior = numeros;
    menor = numeros;

    for(int i = 1; i < 10; i++)
    {
        printf("\n Informe um numero real: ");
        fflush(stdin);
        scanf("%f", &numeros);

        if(numeros > maior)
        {
            maior = numeros;
        }
        if(numeros < menor)
        {
            menor = numeros;
        }
    }
    amplitude = maior - menor;

    printf("\n Amplitude: %.0f", amplitude);

}
