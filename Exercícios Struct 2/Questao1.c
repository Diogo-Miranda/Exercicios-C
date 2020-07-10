#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanhoStringIterativo(char str[10]);
int tamanhoStringRecursivo(char str[10], int i);
void leString(char str[100]);

int main() {
    char str[100];
    leString(str);
    int tam = tamanhoStringIterativo(str);
    int tamRecursivo = tamanhoStringRecursivo(str, 0);
    printf("\nTam Iterativo: %i", tam);
    printf("\nTam Recursivo: %i", tamRecursivo);
    return 0;
}

void leString(char str[100]) {
    printf("\nInforme uma palavra: ");
    gets(str);
}

int tamanhoStringIterativo(char str[100]) {
    int tam = 0;
    
    while(str[tam] != '\0') {
        tam++;
    }

    return tam;
}

int tamanhoStringRecursivo(char str[100], int i) {
    int tam = 0;

    if(str[i] != '\0') {
        tam = tamanhoStringRecursivo(str, i+1);
        tam++;
    }

    return tam;
}
