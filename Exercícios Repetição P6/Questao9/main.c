#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 9 ===");

    bool ERRO= false;
    int numeroMercadorias= 0;
    float precoMercadoria;
    float maiorPreco1= 0.0; //abaixo de 2000 reais
    float maiorPreco2= 0.0; //acima de 2000 reais

    do
    {
        printf("\nInforme o numero de mercadorias: ");
        scanf("%i", &numeroMercadorias);
        ERRO= numeroMercadorias < 0;
        if (ERRO) printf("\nValor de mercadorias invalido");
    }
    while(ERRO);



    if(numeroMercadorias > 0)
    {
        for(int i = 0; i < numeroMercadorias; i++)
        {
            do
            {
                printf("\nInforme o preco da mercadoria: ");
                scanf("%f", &precoMercadoria);
                ERRO= precoMercadoria < 0;
                if (ERRO) printf("\nPreco da mercadoria invalido");
            }
            while(ERRO);

            if(precoMercadoria < 2000)
            {
                if(precoMercadoria > maiorPreco1)
                {
                    maiorPreco1 = precoMercadoria;
                }
            }else
            {
                if(precoMercadoria >= 2000)
                {
                    if(precoMercadoria > maiorPreco2)
                    {
                        maiorPreco2 = precoMercadoria;
                    }
                }
            }
        }

        printf("\nMaior preco dentre as mercadoris com menos de 2000 reais: %.2f", maiorPreco1);
        printf("\nMaior preco dentre as mercadoris com mais de 2000 reais: %.2f", maiorPreco2);
    }else
    {
        printf("\nNenhuma mercadoria a ser lida.");
    }


    return 0;
}
