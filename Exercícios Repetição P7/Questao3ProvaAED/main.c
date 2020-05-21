#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Questao 3 =====");

    int num= 1;
    int produto= num;
    for(int i= num; i <= 15; i++)
    {
        if(i%2 != 0)
        {
            produto = produto*i;
        }
    }

    printf("\nProduto Impares [1,15]= %i", produto);
    return 0;
}
