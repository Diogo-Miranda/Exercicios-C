#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Variáveis Globais
    const int MAX = 100;
    int TAM = 0;

//Variáveis Compostas
    struct Agenda{
        char nome[30];
        int diaNascimento; // Domínio [1,31]
        int mesNascimento; // Domínio [1,12]
    };

    typedef struct Agenda Pessoa;
//Prototipação Funções
    int menu();
    void cadastrarPessoa(Pessoa p[], int i);
    void pesquisarAniversarianteMes(Pessoa Pessoas[]) ;
    void listaAniversariantes(int chave, Pessoa Pessoas[]);

int main() {
    bool sair;
    int opcao;
    int i = 0;

    Pessoa Pessoas[MAX];

    do {
        opcao = menu();

        switch (opcao) {
            case 0:
                sair = true;
                break;
            case 1:
                if(TAM <= MAX) {
                    cadastrarPessoa(Pessoas, i);
                    sair = false;
                    i++;
                } else {
                    printf("\nNao eh possivel cadastrar mais do que %i pessoas. ", MAX);
                }
                break;
            case 2:
                pesquisarAniversarianteMes(Pessoas);
                sair = false;
                break;
       }
    } while(!sair);

    return 0;
}

int menu() {
    int opcao;
    bool ERRO;

    do {
        printf("\n0 - Sair do Programa");
        printf("\n1 - Cadastrar uma pessoa");
        printf("\n2 - Pesquisar por aniversariante do mes:\n");
        printf("\nInforme a opcao desejada: ");
        scanf("%i", &opcao);
        ERRO = opcao != 0 && opcao != 1 && opcao != 2;
        if(ERRO) printf("\nOpcao informada invalida!");
    } while(ERRO);

    return opcao;
}

void cadastrarPessoa(Pessoa p[], int i) {
    bool ERRO;
    printf("\nInforme o nome: ");
    fflush(stdin);
    gets(p[i].nome);

    //Ler dia
    do {
        printf("\nInforme o dia de nascimento: ");
        fflush(stdin);
        scanf("%i", &p[i].diaNascimento);
        ERRO = p[i].diaNascimento < 1 || p[i].diaNascimento > 31;
        if(ERRO) printf("\nInforme um dia dentro do dominio [1,31]");
    } while(ERRO);

    //Ler Mes
    do {
        printf("\nInforme o mes de nacimento: ");
        fflush(stdin);
        scanf("%i", &p[i].mesNascimento);
        ERRO = p[i].mesNascimento < 1 || p[i].mesNascimento > 12;
        if(ERRO) printf("\nInforme o mes dentro do dominio [1,12]");
    } while(ERRO);

    TAM++;
}


void pesquisarAniversarianteMes(Pessoa Pessoas[]) {
    bool ERRO;
    int mes;

    do {
        printf("\nInforme o mes de nacimento: ");
        fflush(stdin);
        scanf("%i", &mes);
        ERRO = mes < 1 || mes > 12;
        if(ERRO) printf("\nInforme o mes dentro do dominio [1,12]");
    } while(ERRO);

    listaAniversariantes(mes, Pessoas);

}

void listaAniversariantes(int chave, Pessoa Pessoas[]) {
    
    for(int i = 0; i < TAM; i++) {
        if(chave == Pessoas[i].mesNascimento) {
            printf("\n=========================");
            printf("\nNome: %s", Pessoas[i].nome);
            printf("\nDia aniversario: %i", Pessoas[i].diaNascimento);
            printf("\n=========================");
        }
    }
}
