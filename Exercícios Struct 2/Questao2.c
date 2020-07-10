#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromoIterativo(char str[100]);
bool ehPalindromoRecursivo(char str[100], int i);
void leString(char str[100]);

int main() {

    char str[100];
    leString(str);
    bool palindromo = ehPalindromoIterativo(str);
    if(palindromo) {
        printf("\nIterativo : Eh palindromo.");
    }  else {
        printf("\nIterativo: Nao eh palindromo");
    }
    palindromo = ehPalindromoRecursivo(str, 0);
    if(palindromo) {
        printf("\nRecursivo : Eh palindromo.");
    }  else {
        printf("\nRescursivo : Nao eh palindromo");
    }
    return 0;
}

void leString(char str[100]) {
    printf("\nInforme uma palavra: ");
    gets(str);
}

bool ehPalindromoIterativo(char str[100]) {
    bool palindromo = true;
    char strInvertido[100];

    for(int i = 0; i < strlen(str); i++) {
        strInvertido[i] = str[strlen(str)-1-i];
    }

    int i = 0;
    while(palindromo && i < strlen(str) - 1) {
        if(strInvertido[i] != str[i]) {
            palindromo = false;
        }
        i++;
    }

    return palindromo;
}

bool ehPalindromoRecursivo(char str[100], int i) {
    bool palindromo = true;

    if(i == strlen(str)-1) {
        if(str[i] != str[0]) {
            palindromo = false;
        }
    } else {
        palindromo = ehPalindromoRecursivo(str, i+1);
        if(str[i] != str[strlen(str)-1-i]) {
            palindromo = false;
        }
    }

    return palindromo;
}
