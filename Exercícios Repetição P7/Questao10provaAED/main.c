#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Questao 10 ===");

    int limite1= 0;
    printf("\nInforme o primeiro limite: ");
    scanf("%i", &limite1);

    int limite2= 0;
    printf("\nInforme o segundo limite: ");
    scanf("%i", &limite2);

    //confere o menor limite
    int aux= 0;
    if(limite1 > limite2)
    {
        aux= limite1;
        limite1= limite2;
        limite2= aux;
    }

    for(int i= limite1; i <= limite2; i++)
    {
        if(i%2 != 0)
        {
            printf("\nNumero impar: %i", i);
        }
    }
    return 0;
}
