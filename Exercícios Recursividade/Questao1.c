#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototipação
void escrever(int x); // Escreve de 1 até 10 : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

int main()
{
    printf("\n Exercicio recursidade - 1, 2, 3, 4, 5, 6, 7, 8, 9, 10\n");

    int x= 1;
    escrever(x);
    return 0;
}

void escrever(int x)
{
    if(x <= 10)
    {
        printf("%i, ", x);
        escrever(x+1);
    }
}