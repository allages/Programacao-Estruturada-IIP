#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMNome 20

void lerStr(char str[], int tamMax) {
    fgets(str, tamMax, stdin);
    int tam = strlen(str);
    if (tam > 0 && str[tam - 1] == '\n') {
        str[tam - 1] = '\0';
    }
}

struct PessoaIMC{
    char nome[TAMNome];
    int idade;
    double peso, altura;
};

int main(){
    struct PessoaIMC pIMC;


    return 0;
}