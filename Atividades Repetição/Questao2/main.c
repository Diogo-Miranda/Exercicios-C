#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Valores decrescentes ===");

    int n1,
        n2,
        n3 = 0;

    printf("\n Informe o primeiro valor: ");
    scanf(" %i", &n1);

    printf("\n Informe o segundo valor: ");
    scanf(" %i", &n2);

    printf("\n Informe o terceiro valor: ");
    scanf(" %i", &n3);

    int maior = 0;
    int menor = 0;
    int meio = 0;

    //maior
    if(n1 >= n2 && n1 >= n3)
    {
        maior = n1;
    }else
        {
            if(n2 >= n1 && n2 >= n3)
            {
                maior = n2;
            }else
                {
                    maior = n3;
                }
        }

    //menor
    if(n1 <= n2 && n1 <= n3)
    {
        menor = n1;
    }else
        {
            if(n2 <= n1 && n2 <= n3)
            {
                menor = n2;
            }else
                {
                    menor = n3;
                }
        }

    //meio
    if(n1 > menor && n1 < maior)
    {
        meio = n1;
    }else
        {
            if(n2 > menor && n2 < maior)
            {
                meio = n2;
            }else
                {
                    meio = n3;
                }
        }

    printf("\n %i", maior);
    printf(",%i", meio);
    printf(",%i", menor);
    return 0;
}
