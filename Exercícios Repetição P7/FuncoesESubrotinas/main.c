#include <stdio.h>
#include <stdlib.h>

void apresentacao(int y)
{
    printf("\nPosicao: %i", y);
}

int main()
{
    for(int i= 0; i < 10; i++)
    {
        apresentacao(i);
    }
    return 0;
}

