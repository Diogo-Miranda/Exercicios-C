#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {

    bool sair = false;
    int opcao;
    do {    
        printf("\n0 - Sair do programa");
        printf("\n1 - Cadastrar Senha");
        printf("\n2 - Validar Senha");
        printf("\nInforme uma opcao: ");
        scanf("%i", &opcao);

        switch (opcao) { 
            case 1 : 
                cadastrarSenha();
                break;
            case 2 :
                validarSenha();
                break;
            case 0 :
                sair = true;
                break;
            default :
                printf("\nOpcao Invalida, tente novamente");
                break;
        }
    } while(!sair);

    return 0;
}

void cadastrarSenha() {
    FILE *arq;
    arq = fopen("senha.dat", "w");

    char senha[100];
    
    printf("\nCadastrar Senha [0,100] caracteres: ");
    
    int i = 0;
    senha[i] = getch();
    printf("%c", '*');
    while(senha[i] != 13) {    
        i++; 
        senha[i] = getch();
        printf("%c", '*');
    }
    senha[i] = '\0';

    fprintf(arq, "%s", senha);

    fclose(arq);
}

void validarSenha() {
    FILE *arq;
    arq = fopen("senha.dat", "r");
    char arqSenha[100];
    //Pega uma cadeia de ate 100 caracteres do arquivo e salva na cadeia senha
    fgets(arqSenha, sizeof(arqSenha), arq);
    arqSenha[strlen(arqSenha)] = '\0';
    printf("\nSenha : ");
    int i = 0;
    char senha[100];

    senha[i] = getch();
    printf("%c", '*');
    while(senha[i] != 13) {
        i++;
        senha[i] = getch();
        printf("%c", '*');
    }
    senha[i] = '\0';

    if(strcmp(senha, arqSenha) == 0) {
        printf("\nSenha Correta.");
    } else {
        printf("\nSenha Incorreta.");
    }    
}