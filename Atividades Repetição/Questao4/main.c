#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("==== Dias Semana ====");

    int weekDay = 0;
    bool Error = 0;
    do
    {
        printf("\n Informe o dia da semana : ");
        printf("\n 1 : domingo");
        printf("\n 2 : segunda");
        printf("\n 3 : terca");
        printf("\n 4 : quarta");
        printf("\n 5 : quinta");
        printf("\n 6 : sexta");
        printf("\n 7 : sabado \n");

        scanf(" %i", &weekDay);

        Error = (weekDay < 0) || (weekDay > 7);
    }
    while(Error);

    if(weekDay == 1)
    {
        printf("\n Domingo");
    }else
        {
            if(weekDay == 2)
            {
                printf("\n Segunda");
            }else
                {
                    if(weekDay == 3)
                    {
                        printf("\n Terca");
                    }else
                        {
                            if(weekDay == 4)
                            {
                                printf("\n Quarta");
                            }else
                                {
                                    if(weekDay == 5)
                                    {
                                        printf("\n Quinta");
                                    }else
                                        {
                                            if(weekDay == 6)
                                            {
                                                printf("\n Sexta");
                                            }else
                                                {
                                                    printf("\n Sabado");
                                                }
                                        }
                                }
                        }
                }
        }
    return 0;
}
