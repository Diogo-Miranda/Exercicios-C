#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Questao 1 ====");
    printf("\nPara sair digite 0");
    bool ERRO;
    float preco;

    do
    {
        printf("\nInforme o preco do produto: ");
        scanf("%f", &preco);
        ERRO = preco < 0;
        if (ERRO) printf("\nValor de preco invalido");
    }
    while(ERRO);

    while(preco != 0)
    {
        if(preco < 500)
        {
            preco = preco*0.3; // -70%
        }else
        {
            if( (preco >= 500)&&(preco <= 3000) )
            {
                preco = preco*0.4; //-60%
            }else
            {
                if( (preco > 3000) )
                {
                    preco = preco*0.5; //-50%
                }
            }
        }
        printf("\nValor promocional com o desconto: %0.2f", preco);


        do
        {
            printf("\nInforme o preco do produto: ");
            scanf("%f", &preco);
            ERRO = preco < 0;
            if (ERRO) printf("\nValor de preco invalido");
        }
        while(ERRO);
    }

    return 0;
}
