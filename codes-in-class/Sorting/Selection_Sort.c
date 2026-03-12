// O Inserction Sort ou Inserção Direta tem como objetivo ordenar um array percorrendo ele da esquerda para a direita
// A inserção direta se inicia pelo índice 1 e assim por diante
// A cada valor que verificamos, colocamos ele na posição correta do subvetor a direita.
// https://yongdanielliang.github.io/animation/web/InsertionSortNew.html

#include <stdio.h>

void inserirValores(int v[], int n);

int main (){
    int numero_vetor, vetor[numero_vetor];
    printf("Quantos valores serão inseridos no vetor: ");
    scanf("%d", &numero_vetor);
    inserirValores(vetor, numero_vetor);

}

void inserirValores(int v[], int n){
    for (int i = 0; i < n; i += 1) {
        printf("\nInsira o %dº valor inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }
}