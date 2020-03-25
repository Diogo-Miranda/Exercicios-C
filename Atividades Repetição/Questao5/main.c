#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("=== Dias dos meses ===");

    int yearMonth,
        daysMonth = 0;
    bool error = 0;

    do
    {
        printf("\n Informe o mes: ");
        printf("\n 1 : Janeiro");
        printf("\n 2 : Fevereiro");
        printf("\n 3 : Marco");
        printf("\n 4 : Abril");
        printf("\n 5 : Maio");
        printf("\n 6 : Junho");
        printf("\n 7 : Julho");
        printf("\n 8 : Agosto");
        printf("\n 9 : Setembro");
        printf("\n 10 : Outubro");
        printf("\n 11 : Novembro");
        printf("\n 12 : Decembro \n");

        scanf(" %i", &yearMonth);

        error = (yearMonth < 1) || (yearMonth > 12);
    }
    while(error);

    switch(yearMonth)
    {
        case 1:
            daysMonth = 31;
            break;
        case 2:
            daysMonth = 28;
            break;
        case 3:
            daysMonth = 31;
            break;
        case 4:
            daysMonth = 30;
            break;
        case 5:
            daysMonth = 31;
            break;
        case 6:
            daysMonth = 30;
            break;
        case 7:
            daysMonth = 31;
            break;
        case 8:
            daysMonth = 31;
            break;
        case 9:
            daysMonth = 30;
            break;
        case 10:
            daysMonth = 31;
            break;
        case 11:
            daysMonth = 30;
            break;
        case 12:
            daysMonth = 31;
            break;
        default:
            break;
    }

    printf("Quantidade de dias = %i", daysMonth);
    return 0;
}
