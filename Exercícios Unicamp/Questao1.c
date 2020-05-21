#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//Prototipação
void teste(int n, int *pointerB, int *pointerK);

int main()
{
    int n;
    printf("\nInforme o valor de n: ");
    scanf("%i", &n);
    int base,
        expoente;
    
    teste(n,&base,&expoente);

    printf("\nValor de b: %i", base);
    printf("\nValor de k: %i", expoente);
}

/* 
   Assinatura: void teste(int n, int *pointerB, int *pointerK)
   Autor: Diogo Araujo Miranda
   Data: 26/04/2020
   Função: Função que irá decompor os fatores em primos e retornar para
           b e k por meio de referência 
*/
void teste(int n, int *pointerB, int *pointerK)
{
    int div= 2;       // Primeiro fator primo possível de decompor um número
    bool sair= false; // Variável responsável por controlr o fluxo
    int k= 0;         // Valor do expoente K
    int b= 0;         // Valor da base B
    int num= n;       // Cópia do valor passado em parâmetro

    if(num == 0 || num == 1) sair= true; //Não precisa decompor em fatores primos se o numero for 0 ou 1

    while(sair == false)
    {
        if(num%div == 0)
        {
            k++;            // Indica encontrou-se um valor possível de decompor
            num= num/div;   // Seta o valor de num para o valor depois de decompo-lo pela primera vez
        }else
        {
            div++;          // Se ele não foi divisível por esse número tenta-se com o próximo divisor
        }
        
        sair= (div >= n/2) || (num == 1); /* Indica que: Se o divisor atual for maior ou igual ao número passado
                                            por parâmetro, não existe um dividor inteiro. Ou se o número chegar à 1
                                            significa que a decomposição do número N acabou.
                                          */
    }

    b= div; // A base será o divisor que dividou o numero k vezes
    int numeroTeste= pow(div,k); // Tentativa de criação do numero passado por parâmetro
    bool verificaNumero=  numeroTeste == n; // Verifica se o numero passando eh igual ao número que saiu do while

    if(verificaNumero)
    {
        *pointerB= b; //Base
        *pointerK= k; //Expoente
    }else //Se o numero nao puder ser decomposto em valores primos, retornará o proximo numero elevado a 1
    {
        *pointerB= n;
        *pointerK= 1;
    }
    
}