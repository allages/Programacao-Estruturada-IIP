#include <stdio.h>
#define qtd 10

void insertionSort(int v[],int n);
void preencherValores(int v[], int n);

int main(){
    int vetor[qtd];
    preencherValores(vetor, qtd);



}

void preencherValores(int v[], int n) {
    for (int i = 0; i < qtd; i += 1) {
        printf("\nDigite o %dº valor inteiro do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void insertionSort(int v[], int n) {

}
