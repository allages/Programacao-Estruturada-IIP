#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_NOME 50

struct Pessoa {
    char nome[TAM_NOME];
    int idade;
    double peso, altura;
};

void insercaoDiretaPorIdadeDecrescNomeCresc(struct Pessoa v[], int n) {
    int i, j;
    struct Pessoa chave;
    for (i = 1; i <= n - 1; i += 1) {
        chave = v[i];
        j = i - 1;
        while (j >= 0 && (v[j].idade< chave.idade ||
        v[j].idade == chave.idade && strcmp(v[j].nome, chave.nome)> 0)) {
            v[j+1] = v[j];
            j -= 1;
        }
        v[j+1] = chave;
    }
}

int buscaBinaria (struct Pessoa v[], int n, char chave[]) {
    int inicio = 0, meio, fim = n - 1;

    do {
        meio = (inicio + fim) / 2;
        if (strcmp(v[meio].nome, chave) > 0) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    } while (chave != v[meio] && inicio <= fim);
    
    if (chave == v[meio]) {
        return meio; // retorna a posição
    } else {
        return -1; // não achou
    }
}