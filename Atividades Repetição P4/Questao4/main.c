#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 4 - Valor de H (POSITIVO) ====");

    bool ERRO;
    int numeroTermos;
    do
    {
        printf("\n Informe a quantidade de termos: ");
        scanf("%i", &numeroTermos);
        ERRO = numeroTermos < 0;
        if (ERRO) printf("\nQuantidade termos invalida! ");
    }
    while(ERRO);


    int denominadorH = 100;
    float h= 0;
    int count;
    for(count= 0; count < numeroTermos; count++)
    {
        if(denominadorH > 0)
        {
            h = (1.0/denominadorH) + h;
            denominadorH = denominadorH - 3;
        }
    }

    if(count > 0)
    {
        printf("\nH= %.4f\n", h);
    }
    else
    {
        printf("\nNenhuma iteracao realizada");
    }

    return 0;
}
