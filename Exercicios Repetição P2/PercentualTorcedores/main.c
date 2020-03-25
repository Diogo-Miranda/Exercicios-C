#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("=== Calcula percentual de torcedores ===");

    char time = ' ';
    bool ERRO;
    float cruzeiro,
        atletico,
        outros = 0;
    int count = 0;

    do
    {
        do
        {
            printf("\nInforme seu time [C/A/O] 'S' [Sair]");
            fflush(stdin);
            scanf("%c", &time);
            time = toupper(time); //converte em maiusculo
            ERRO = (time != 'C' && time != 'A' && time != 'O' && time != 'S');
            if(ERRO) printf("\nInformacao invalida");
        }
        while(ERRO);

        switch(time)
        {
            case 'C' :
                cruzeiro++;
            case 'A' :
                atletico++;
            case 'O' :
                outros++;
        }

        if(time != 'S')
        {
            count++;
        }
    }
    while(time != 'S');

    if(count > 0)
    {
        cruzeiro = (cruzeiro/count) * 100;
        atletico = (atletico/count) * 100;
        outros = (outros/count) * 100;

        printf("\nCruzeiro:%.1f", cruzeiro);
        printf("\nAtletico:%.1f", atletico);
        printf("\nOutros:%.1f", outros);
    }

    return 0;
}
