#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    printf("\nAno Bissexto");
    int ano;
    printf("\nInforme o ano � ser analisado: ");
    scanf("%i", &ano);

    bool bissexto = 0;

    if(ano%4 == 0){
        bissexto = 1;
        if(ano%100 == 0)
        {
            bissexto = 0;
            if(ano%400 == 0)
            {
                bissexto = 1;
            }
        }
    }


    if(bissexto)
    {
        printf("\n O ano � bissexto.");
    }else
    {
        printf("\n O ano n�o � bissexto.");
    }
}
