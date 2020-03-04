#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("\nCalcular Triangulo\n");

    float lado1,
          lado2,
          lado3 = 0;
    bool verificaTriangulo = 0;

    printf("Informe o primeiro lado: ");
    scanf("%f", &lado1);

    printf("\nInforme o segundo lado: ");
    scanf("%f", &lado2);

    printf("\nInforme o terceiro lado: ");
    scanf("%f", &lado3);

    if( (lado1 != 0) && (lado2 != 0) && (lado3 != 0) )
    {
        if(lado3 > lado2)
        {
            if( ( lado1 > (lado3 - lado2) ) && ( lado1 < (lado2 + lado3) ) )
            {
                verificaTriangulo = 1;
            }
        }else
            if( ( lado1 > (lado2 - lado3) ) && ( lado1 < (lado2 + lado3) ) )
            {
                verificaTriangulo = 1;
            }
    }

    if(verificaTriangulo == 1)
    {
        printf("\nO triangulo existe");
    }else
    {
        printf("\nO triangulo nao existe");
    }


    if(verificaTriangulo == 1)
    {
        if( (lado1 == lado2) && (lado1 == lado3))
        {
            printf("\nEquilatero");
        }else if( (lado1 != lado2 ) && (lado1 != lado3) )
        {
            printf("\nEscaleno");
        }else
        {
            printf("\nIsosceles");
        }
    }
    return 0;
}
