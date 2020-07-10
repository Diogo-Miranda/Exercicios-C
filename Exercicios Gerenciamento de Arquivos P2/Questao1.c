#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prototipação
void cadastrarSalario();
void listarSalario();
void calcularMedia();
void maiorSalario();
void menorSalario();
void corrigirSalario();

int main()
{

    bool sair = false;
    int opcao;
    do {
        printf("\n0 - Fechar o programa");
        printf("\n1 - Cadastrar salarios");
        printf("\n2 - Listar salarios");
        printf("\n3 - Calcular media dos salarios");
        printf("\n4 - Calcular o maior salario");
        printf("\n5 - Calcacular o menor salarios");
        printf("\n6 - Corrigir salarios");
        printf("\nInforme a opcao desejada: ");
        scanf("%i", &opcao);

        switch (opcao) {
            case 0 :
                sair = true;
                break;
            case 1 : 
                cadastrarSalario();
                break;
            case 2 :
                listarSalario();
                break;
            case 3 :
                calcularMedia();
                break;
            case 4 :
                maiorSalario();
                break;
            case 5 :
                menorSalario();
                break;
            case 6 : 
                corrigirSalario();
                break;
            default : 
                printf("\nOpcao invalida, tente novamente");
                break;
        }

    } while (!sair);
    return 0;
}

void cadastrarSalario(){
    FILE *arq = fopen("salarios.dat", "a");

    float salario = 0;
    printf("\nInforme o salario a ser cadastrado: ");
    scanf("%f", &salario);
    fprintf(arq, "%.2f\n", salario);
    fclose(arq);
}

void listarSalario(){
    FILE *arq = fopen("salarios.dat", "r");

    float salario = 0;
    fscanf(arq, "%f", &salario);
    int i = 1;
    while(!feof(arq)) {
        printf("\n%i - %.2f\n", i, salario);
        i++;
        fscanf(arq, "%f", &salario);
    }
    fclose(arq);
}

void calcularMedia() {
    FILE *arq = fopen("salarios.dat", "r");

    float media = 0;
    float salario = 0;
    int i = 0;
    fscanf(arq, "%f", &salario);

    while( !feof(arq) ) {
        i++;
        media += salario;
        fscanf(arq, "%f", &salario);
    }

    media = media/i;
    printf("Media : %f", media);
    fclose(arq);
}

void maiorSalario() {
    FILE *arq = fopen("salarios.dat", "r");
    float maiorSalario;
    fscanf(arq, "%f", &maiorSalario);
    float salario = maiorSalario;
    while( !feof(arq) ) {  
        if(salario > maiorSalario) {
            maiorSalario = salario;
        }
        fscanf(arq, "%f", &salario);
    }
    fclose(arq);
    printf("\nO maior salario eh: %f", maiorSalario);
}

void menorSalario() {
    FILE *arq = fopen("salarios.dat", "r");
    float menorSalario;
    fscanf(arq, "%f", &menorSalario);
    float salario = menorSalario;
    while( !feof(arq) ) {    
        if(salario < menorSalario) {
            menorSalario =  salario;
        }
        fscanf(arq, "%f", &salario);
    }
    fclose(arq);
    printf("\nO menor salario eh: %f", menorSalario);
}

void corrigirSalario() {
    FILE *arq = fopen("salarios.dat", "r");
    FILE *arqTEMP = fopen("salariosTEMP.dat", "w");
    float correcao;
    printf("\nPercentual de acrescimo a ser corrigido: ");
    scanf("%f", &correcao);

    float salario;
    fscanf(arq, "%f", &salario);
   
    while ( !feof(arq) ) {
        salario += salario*(correcao/100);
        fprintf(arqTEMP, "%f\n", salario);
        fscanf(arq, "%f", &salario);
    }

    fclose(arq);
    fclose(arqTEMP);

    arq = fopen("salarios.dat", "w");
    arqTEMP = fopen("salariosTEMP.dat", "r");

    fscanf(arqTEMP, "%f", &salario);
    while ( !feof(arqTEMP) ) {
        fprintf(arq, "%f\n", salario);
        fscanf(arqTEMP, "%f", &salario);
    }

    fclose(arq);
    fclose(arqTEMP);

}