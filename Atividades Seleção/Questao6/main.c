#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nCalculadora");

    int controle = 0;

    float n1,
          n2,
          resultado = 0;

    printf("Opcoes:\n");
    printf("--------------\n");
    printf("0 - Sair     |");
    printf("\n1 - Adicao    |");
    printf("\n2 - Subtracao  |");
    printf("\n3 - Multiplicacao |");
    printf("\n4 - Divisao |\n");
    printf("--------------\n");
    do
    {
       printf("\nInforme a opcao: ");
       scanf("%d", &controle);

       switch( controle )
        {
            case 1:
                  printf("\nEntre com o primeiro numero: ");
                  scanf("%f", &n1);

                  printf("\nEntre com o segundo numero: ");
                  scanf("%f", &n2);

                  resultado = n1 + n2;

                  printf("\n Resultado = %.2f", resultado);
                  break;
            case 2:
                  printf("\nEntre com o primeiro numero: ");
                  scanf("%f", &n1);

                  printf("\nEntre com o segundo numero: ");
                  scanf("%f", &n2);

                  resultado = n1 - n2;
                  printf("\n Resultado = %.2f", resultado);
                  break;
            case 3:
                  printf("\nEntre com o primeiro numero: ");
                  scanf("%f", &n1);

                  printf("\nEntre com o segundo numero: ");
                  scanf("%f", &n2);

                  resultado = n1 * n2;
                  printf("\n Resultado = %.2f", resultado);
                  break;
            case 4:
                  printf("\nEntre com o primeiro numero: ");
                  scanf("%f", &n1);

                  printf("\nEntre com o segundo numero: ");
                  scanf("%f", &n2);

                  resultado = n1 / n2;
                  printf("\n Resultado = %.2f", resultado);
                  break;
            case 0:
                  break;
        }
    } while (controle != 0);

    return 0;
}

