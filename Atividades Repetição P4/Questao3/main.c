#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Questao 3 - Amplitude flag 0 ===");

    printf("\n 0 - Para Sair");

    float numero,
          maior,
          menor,
          amplitude = 0.0;
    int count= 0;
    do
    {
        printf("\nInforme um numero real: ");
        scanf("%f", &numero);

        if(numero != 0)
        {

            if(count == 0)
            {
                maior = numero;
                menor = numero;
            }
            if(numero > maior)
            {
                maior = numero;
            }
            if(numero < menor)
            {
                menor = numero;
            }
            count++; //verificar se houveu alguma iteração
        }
    }
    while(numero != 0);
    if(count > 0)
    {
        amplitude = maior - menor;
        printf("%.1f", amplitude);
    }else
    {
        printf("\n Nenhuma iteracao realizada");
    }

    return 0;
}
