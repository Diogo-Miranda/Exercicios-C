#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Idenficiar o maior entre dois numeros \n");

    float n1,
          n2 = 0;

    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);

    printf("\nInforme o segundo numero: ");
    scanf("%f", &n2);

    if(n1 > n2)
    {
        printf("\n O maior numero e: %.2f", n1);
    }else
    {
        printf("\n O maior numero e: %.2f", n2);
    }
    return 0;
} //Fim algoritmo
