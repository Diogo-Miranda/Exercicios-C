#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("===== Calculadora ======");
    printf("\n========================");
    float n1,
          n2,
          resultado = 0;

    char operacao = ' ';

    bool ERRO;

    do
    {
        do
        {
            printf("\n[+] para Soma");
            printf("\n[-] para Subtracao");
            printf("\n[*] para Multiplicacao");
            printf("\n[/] para Divisao");
            printf("\n[^] para Potenciacao");
            printf("\n[s] para Sair");
            printf("\nInforme a operacao desejada: ");
            fflush(stdin);
            scanf("%c", &operacao);
            operacao = tolower(operacao);
            ERRO = (operacao != '+') && (operacao != '-') && (operacao != '*') && (operacao != '/') && (operacao != '^') && (operacao != 's');
            if (ERRO) printf("\nOperacao Invalida");
        }
        while(ERRO);

        ERRO = 0; // reseta a variavel erro

        if(operacao != 's')
        {
            printf("\n Informe o primeiro numero: ");
            scanf("%f", &n1);
            printf("\n Informe o segundo numero: ");
            scanf("%f", &n2);

            switch(operacao)
            {
                case '+' : resultado = n1 + n2; break;
                case '-' : resultado = n1 - n2; break;
                case '*' : resultado = n1 * n2; break;
                case '/' :
                    if(n2 != 0)
                    {
                        resultado = n1 / n2;
                    }else
                    {
                        ERRO = 1; // erro de divisao por 0
                        printf("\n Opercao Invalida");
                    }
                    break;
                case '^' : resultado = pow(n1,n2);

            }
            if (!ERRO) printf("\nResultado= %.2f\n", resultado); // se NAO houver erro mostra o resultado
            ERRO = 0;
        }
    }
    while(operacao != 's');

    printf("\nObrigado por usar meu programa!");

    return 0;
}
