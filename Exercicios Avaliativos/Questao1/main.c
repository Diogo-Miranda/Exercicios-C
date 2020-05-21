#include <stdio.h>
#include <stdlib.h>

int teste(int *a, int b);

int main()
{
    int x= 8;

    int y= 19;

    int z= teste(&y, x);

    z= z + x + y;

    printf("%i", z);
    return 0;
}


int teste(int *a, int b) {

     *a = *a * 2;

     b = b * 2;

     return (*a + b);
}
