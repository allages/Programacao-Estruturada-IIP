#include <stdio.h>
#include <stdlib.h>
#define TAMax 100


int qtdStr(char str[]){
    int tam = 0;
    while (str[tam] != '\0'){
        tam += 1;
    }
    return tam;
}

void lerStr(char str[], int max){
    fgets(str, max, stdin);
    int tam = qtdStr(str);
    if (tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}

int main(){
    char nome[TAMax];
    printf("Imprima seu nome: ");
    lerStr(nome, TAMax);
    int tamFinal = qtdStr(nome);
    printf("\nO tamanho da string 'nome' é : %d\n", tamFinal);
    printf("%s", nome);

    return 0;
}