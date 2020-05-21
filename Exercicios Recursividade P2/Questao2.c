#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipação
long int funcaoAckerman(int m, int n);
int leitura();

int main()
{
    printf("\n Funcao Ackerman");

    int m = leitura();
    int n = leitura();

    printf("\nFuncao calculara o valor de A(%i,%i)", m, n);

    long int imagem= funcaoAckerman(m, n);

    printf("\nO valor de A(%i,%i) = %i", m, n, imagem);
    return 0;
}

long int funcaoAckerman(int m, int n)
{
    long int imagem;

    if ( (m > 0) && (n > 0) )
    {
        imagem= funcaoAckerman(m-1, funcaoAckerman(m, n-1));
    } else
    {
        if( (m > 0) && (n == 0) )
        {
            imagem= funcaoAckerman(m-1, 1);
        } else
        {
            if ( m == 0) 
            {
                imagem= n+1;
            }
        }
        
    }
    
    return imagem;
}

int leitura()
{
    bool ERRO= false;
    int num;

    do
    {
        printf("\nInforme um numero inteiro e positivo: ");
        scanf("%i", &num);
        ERRO= num < 0;
        if (ERRO) printf("\nO numero informado eh invalido. ");
    } 
    while (ERRO);

    return num;    
}

