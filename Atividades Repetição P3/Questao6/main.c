#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Questao 6 - Calcula PA ====\n");

    float primeiroTermo,
          razao,
          termo = 0.0;

    int numeroTermos;

    printf("\nInforme o primeiro termo: ");
    scanf("%f", &primeiroTermo);

    printf("\nInforme a razao: ");
    scanf("%f", &razao);

    printf("\nInforme ate que termo ira mostrar: ");
    scanf("%i", &numeroTermos);

    for(int i = 0; i < numeroTermos; i++)
    {
        termo = primeiroTermo + razao * i;
        printf("%.1f ", termo);
    }



    return 0;
}
