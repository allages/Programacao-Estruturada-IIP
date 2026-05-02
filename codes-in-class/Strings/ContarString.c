#include <stdio.h>
#include <stdlib.h>
#define TMAX 100

void verificarASCII(char str[], int tam){
    for (int i = 0; i < tam; i += 1){
        printf("%d", str[i]);
    }
    printf("\n%s", str);
}

int quantidadeString(char str[]){
    int tamStr = 0;
    while (str[tamStr] != '\0'){
        tamStr += 1;
    }
    return tamStr;
}

int main(){
    char nome[TMAX] = {"Universidade Católica de Pernambuco"};
    verificarASCII(nome, TMAX); // Na impressão utilizando %d, são obtidos resultados decimais da tabela ASCII. Os dígitos '0' são '\0' que indicam o fim da string


    int tamanhoStr = quantidadeString(nome);
    printf("\nO tamanho da string ('%s') é %d (TAM MÁX = %d)", nome, tamanhoStr, TMAX);
}