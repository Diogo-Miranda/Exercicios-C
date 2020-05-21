#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void escrever(int x); // Escreve 1, 2, 3, 4, 5, 5, 4, 3, 2, 1

int main()
{
    printf("\n Questao recursiva: Escreve 1, 2, 3, 4, 5, 5, 4, 3, 2, 1\n");
    int x= 1;
    escrever(x);

    return 0;
}

void escrever(int x)
{   
    if(x <= 5)
    {
        printf("%i, ", x);
        escrever(x+1);
        printf("%i, ", x);
    }
}


