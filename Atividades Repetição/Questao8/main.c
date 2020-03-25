#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("==== Peso em planetas ====");

    float peso = 0;

    int escolhaPlaneta = 0;

    bool error = 0;

    printf("\n Informe o seu peso na Terra: ");
    scanf("%f", &peso);
    do
    {
        printf("\n 1 : Mercurio");
        printf("\n 2 : Venus");
        printf("\n 3 : Marte");
        printf("\n 4 : Jupiter");
        printf("\n 5 : Saturno");
        printf("\n 6 : Urano \n");
        scanf("%i", &escolhaPlaneta);

        error = escolhaPlaneta < 1 || escolhaPlaneta > 6;
    }
    while(error);

    switch(escolhaPlaneta)
    {
        case 1:
            peso = peso * 0.37;
            break;
        case 2:
            peso = peso * 0.88;
            break;
        case 3:
            peso = peso * 0.38;
            break;
        case 4:
            peso = peso * 2.64;
            break;
        case 5:
            peso = peso * 1.15;
            break;
        case 6:
            peso = peso * 1.17;
            break;
        default:
            break;
    }

    printf("\n Peso = %.2f", peso);
    return 0;
}
