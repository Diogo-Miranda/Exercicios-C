#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipação

int main() {

    FILE *arq;
    arq = fopen("exemplo.dat", "w");
    int idade = 19;
    fprintf(arq, "%i\n", idade);
    fclose(arq);

    arq = fopen("exemplo.dat", "a");
    int idadePai = 45;
    int idadeMae = 47;

    fprintf(arq, "%i\n", idadeMae);
    fprintf(arq, "%i", idadePai);
    fclose(arq);

    arq = fopen("exemplo.dat", "r");
    while(!feof(arq)) {
        fscanf(arq, "%i", &idade);
        printf("Idade: %i\n", idade);
    }
    fclose(arq);

    return 0;
}