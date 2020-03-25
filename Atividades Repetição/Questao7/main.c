#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("=== Questao IMC ===");

    float peso_kg,
          altura_metro,
          imc = 0;

    printf("\n Informe seu peso em quilos: ");
    scanf("%f", &peso_kg);

    printf("\n Informe sua altura em metros: ");
    scanf("%f", &altura_metro);

    imc = peso_kg / pow(altura_metro,2);

    if(imc < 16)
    {
        printf("\n Magreza Grave");
    }else
        {
            if(imc >= 16 && imc < 17)
            {
                printf("\n Magreza Moderada");
            }else
                {
                    if(imc >= 17 && imc < 18.5)
                    {
                        printf("\n Magreza Leve");
                    }else
                        {
                            if(imc >= 18.5 && imc < 25)
                            {
                                printf("\n Saudavel");
                            }else
                                {
                                    if(imc >= 25 && imc < 30)
                                    {
                                        printf("\n Sobrepeso");
                                    }else
                                        {
                                            if(imc >= 30 && imc < 35)
                                            {
                                                printf("\n Obesidade Grau I");
                                            }else
                                                {
                                                    if(imc >= 35 && imc < 40)
                                                    {
                                                        printf("\n Obesidade Grau II (severa)");
                                                    }else
                                                        {
                                                            if(imc >= 40)
                                                            {
                                                                printf("\n Obesidade Grau III (morbida)");
                                                            }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }

        printf("\n Imc = %f", imc);
    return 0;
}
