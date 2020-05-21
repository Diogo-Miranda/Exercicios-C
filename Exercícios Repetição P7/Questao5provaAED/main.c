#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 5 ====");

    int num= 0;
    printf("\nInforme um numero: ");
    scanf("%i", &num);

    int produto=0;

    for(int i= 0; i <= 10; i++)
    {
        produto= num*i;
        printf("\n%ix%i= %i", num, i, produto);
    }

    return 0;
}
