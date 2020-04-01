#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 4 ====\n");

    int valorInferior,
        valorSuperior,
        AUX = 0;

    bool ehNegativo = 0;

    printf("Informe o primeiro limite: ");
    scanf("%i", &valorInferior);
    printf("Informe o segundo limite: ");
    scanf("%i", &valorSuperior);

    ehNegativo = (valorInferior < 0) && (valorSuperior < 0);

    if(valorInferior > valorSuperior) // Inverte Se for o caso
    {
        AUX = valorSuperior;
        valorSuperior = valorInferior;
        valorInferior = AUX;
    }

    if(!ehNegativo)
    {
        for(int i = valorSuperior; i >= valorInferior; i--)
        {
            printf("%i ", i);
        }
    }

    if(ehNegativo)
    {
       for(int i = valorSuperior; i >= valorInferior; i--)
        {
            printf("%i ", i);
        }
    }



    return 0;
}
