#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==== Questao 2 ====\n");

    int i = 10;

    do
    {
        printf("%i ", i); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
        i--;
    }
    while(i > 0);
    return 0;
}
