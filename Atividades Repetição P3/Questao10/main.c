#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    printf("===== Questao10 - Eleicao DA ======");

    int voto = 0;
    bool ERRO;

    int chapa1 = 0;
    int chapa2 = 0;
    int nulo = 0;

    float totalVotos;

    do
    {
        do
        {
            printf("\n 0 - Sair do programa");
            printf("\n 1 - Chapa 1");
            printf("\n 2 - Chapa 2");
            printf("\n 3 - Branco ou nulo");
            printf("\n Informe seu voto: ");
            scanf("%i", &voto);
            ERRO = (voto != 1) && (voto != 2) && (voto != 3) && (voto != 0);
            if (ERRO) printf("\n Resposta fora do dominio");
        }
        while(ERRO);

        if(voto != 0)
        {
            switch(voto)
            {
                case 1 :
                    chapa1++;
                    break;
                case 2 :
                    chapa2++;
                    break;
                case 3 :
                    nulo++;
                    break;
            }
            totalVotos++;
        }
    }
    while(voto != 0);

    if( (chapa1 > 0) || (chapa2 > 0) || (nulo > 0 ))
    {
        printf("\n Chapa 1: %i", chapa1);
        printf("\n Chapa 2: %i", chapa2);
        printf("\n Brancos/Nulos: %i", nulo);

        if( (chapa1 == chapa2) && (chapa1 > nulo) )
        {
            printf("\n Houve empate");
        }else
        {
            if( (chapa1 > chapa2) && (chapa1 > nulo) )
            {
                totalVotos = (chapa1/totalVotos)*100;
                printf("\n Chapa 1 vencedera com a porcentagem de votos: %.2f", totalVotos);
            }else
            {
                if( (chapa2 > chapa1) && (chapa2 > nulo) )
                {
                    totalVotos = (chapa2/totalVotos)*100;
                    printf("\n Chapa 1 vencedera com a porcentagem de votos: %.2f", totalVotos);
                }else
                {
                    printf("\n Houveram mais votos nulos");
                }
            }

        }
    }else
    {
        printf("\n Não houveram votos");
    }
    return 0;
}
