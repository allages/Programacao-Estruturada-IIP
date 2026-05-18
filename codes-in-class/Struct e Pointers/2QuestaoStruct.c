#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARACTERES 100
#define TAM 40

struct Produto {
    int codigo;
    char descricao[CARACTERES];
    double v_unitario;
    int qtd_estoque;
};

int qtdStr(char texto[]){
    int tam = 0;
    while(texto[tam] != '\0'){
        tam += 1;
    }
    return tam;
}

void lerStr(char texto[], int max){
    fgets(texto, max, stdin);
    int tam = qtdStr(texto);
    if (tam > 0 && texto[tam - 1] == '\n'){
        texto[tam - 1] = '\0';
    }
}

void preencherStruct(struct Produto *p, int i){
    printf("\n——————CADASTRO DE PRODUTO——————\n");
    printf("\nDigite o código do produto: ");
    scanf("%d", &p[i].codigo);
    printf("\nDigite a descrição do produto");
    lerStr(p[i].descricao, CARACTERES);
    lerStr(p[i].descricao, CARACTERES);
    printf("\nDigite o valor unitário do produto: ");
    scanf("%lf", &p[i].v_unitario);
    printf("\nDigite a quantidade do estoque: ");
    scanf("%d", p[i].qtd_estoque);
}


int main(){
    struct Produto produto[TAM];
    int entrada = 1;
    int i = 0;
    do {
        printf("—————— MENU ——————\nSelecione:\n[1] — Cadastrar um novo produto\n[2] — Exibir dados dos produtos\n[0] — Encerrar programa\nInsira uma opção válida:");
        scanf("%d", &entrada);
        if (entrada == 1){
            preencherStruct(produto, i);
            i += 1;
        } else if (entrada == 2){

        } else if (entrada != 0){
            printf("\nERRO: Insira uma opção válida!\n");
        }
    } while (entrada != 0);


    return 0;
}