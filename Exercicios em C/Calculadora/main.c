#include <stdio.h>
#include <stdlib.h>

int main()
{
    int controle = 0;

    printf("\n ---------------- Calculadora matematica --------------------- \n");
    printf("-------------------------------------------------------------\n");

    printf("Opcoes:\n");
    printf("--------------\n");
    printf("0 - Sair     |");
    printf("\n1 - Areas    |");
    printf("\n2 - Funcoes  |");
    printf("\n3 - Diversos |\n");
    printf("--------------\n");
    do
    {
       scanf("%d", &controle);
       switch( controle )
        {
            case 1:
                funcAreas();
                break;
            case 2:
                funcFuncoes();
                break;
            case 3:
                funcDiversos();
                break;
            case 0:
                break;
        }
    } while (controle =! 0);
}

void funcAreas()
{
    int controle = 0;
    do
    {
        printf("\n Opcoes:\n");
        printf("--------------\n");
        printf("0 - Sair     |");
        printf("\n1 - Triangulo|");
        printf("\n2 - Quadrado |");
        printf("\n3 - Hexagono |\n");
        printf("--------------\n");

        scanf("%d", &controle);

        switch (controle)
        {
            case 1:
                funcTriangulo();
                break;
            case 2:
                funcQuadrado();
                break;
            case 3:
                funcHexagono();
                break;
            case 0:
                break;
        }
    } while (controle != 0);
}

void funcFuncoes()
{
    int controle = 0;
    do
    {
        printf("Opcoes:\n");
        printf("----------------\n");
        printf("0 - Sair       |");
        printf("\n1 - Linear     |");
        printf("\n2 - Quadratica |");
        printf("\n3 - Exponencial|\n");
        printf("----------------\n");

        scanf("%d", &controle);
           switch ( controle )
            {
                case 1:
                    funcLinear();
                    break;
                case 2:
                    funcQuadratica();
                    break;
                case 3:
                    funcExponencial();
                    break;
                case 0:
                    break;

            }

    }  while (controle != 0);
}

void funcDiversos()
{
    printf(" \n Opcoes:\n");
    printf("----------------\n");
    printf("0 - Sair       |");
    printf("\n1 - IMC        |");
    printf("\n2 - Peso Ideal |\n");
    printf("----------------\n");
}

void funcTriangulo()
{
    float base,
          altura,
          area = 0;
    printf("\n Informe a base do triangulo : ");
    scanf("%f", &base);
    printf("\n Informe a altura do triangulo : ");
    scanf("%f", &altura);

    area = ( base * altura)/2;

    printf("\n Area : %.2f", area, "\n");
}

void funcQuadrado()
{
    float lado,
          area = 0;
    printf("\n Informe o lado do quadrado : ");
    scanf("%f", &lado);

    area = lado * lado;

    printf(" Area : %.2f", area, "\n");
}

void funcHexagono()
{
    float lado,
          area = 0;
    printf("\n Informe o lado do hexagono : ");
    scanf("%f", &lado);

    area = 6 * ((lado * lado * 1.732) / 4);

    printf(" Area : %.2f", area, "\n");
}


void funcLinear()
{
    float a,
          x,
          b,
          resultado;
          a = 0;
          x = 0;
          b = 0;
          resultado = 0;
          printf("\nInforme o valor de A :\n");
          scanf("%f", &a);
          printf("\nInforme o valor de X :\n");
          scanf("%f",&x);
          printf("Informe o valor de B :\n");
            scanf("%f",&b);
            resultado = a*x+b;
            printf("O resultado e : %f", resultado);
void funcFuncoes()
{
    int controle = 0;
    do
    {
        printf("Opcoes:\n");
        printf("----------------\n");
        printf("0 - Sair       |");
        printf("\n1 - Linear     |");
        printf("\n2 - Quadratica |");
        printf("\n3 - Exponencial|\n");
        printf("----------------\n");

        scanf("%d", &controle);
           switch ( controle )
            {
                case 1:
                    funcLinear();
                    break;
                case 2:
                    funcQuadratica();
                    break;
                case 3:
                    funcExponencial();
                    break;
                case 0:
                    break;

            }

    }  while (controle != 0);
}void funcFuncoes()
{
    int controle = 0;
    do
    {
        printf("Opcoes:\n");
        printf("----------------\n");
        printf("0 - Sair       |");
        printf("\n1 - Linear     |");
        printf("\n2 - Quadratica |");
        printf("\n3 - Exponencial|\n");
        printf("----------------\n");

        scanf("%d", &controle);
           switch ( controle )
            {
                case 1:
                    funcLinear();
                    break;
                case 2:
                    funcQuadratica();
                    break;
                case 3:
                    funcExponencial();
                    break;
                case 0:
                    break;

            }

    }  while (controle != 0);
}
}
