#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n == Calculador Medida de Escada == ");

    float anguloEscada,
          distanciaParede,
          tamanhoEscada = 0;

    printf("\n Informe o angulo formado pela escada: ");
    scanf("%f", &anguloEscada);

    printf("\n Informe a distancia ate a parede: ");
    scanf("%f", &distanciaParede);

    //converte em radianos
    anguloEscada = anguloEscada*3.14/180;
    tamanhoEscada = distanciaParede/cos(anguloEscada);

    printf("\n O tamanho da escada tera que ser: %.2f", tamanhoEscada);

    return 0;
}
