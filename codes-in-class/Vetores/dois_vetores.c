// Faça um programa para criar dois vetores de 10 números inteiros, A e B. O programa deve preencher o vetor A com
// valores digitados pelo usuário. O vetor B deve ser preenchido da seguinte forma: os elementos de índice par são os correspondentes
// de A divididos por 2 e os elementos de índice ímpar são os correspondentes de A multiplicados por 3. 
// Ao final, o programa deverá exibir os dois vetores (A e B).




#include <stdio.h>
#define qtd_valores 10

void inserirValores(int n, int v[]);
void imprimirVetor(int n, int v[]);
void construirVetor(int n, int v[], int x[]);

int main() {
    int vetor_a[qtd_valores], vetor_b[qtd_valores];
    inserirValores(qtd_valores, vetor_a);
    printf("\nVetor A: ");
    imprimirVetor(qtd_valores, vetor_a);
    construirVetor(qtd_valores, vetor_b, vetor_a);
    printf("\nVetor B: ");
    imprimirVetor(qtd_valores, vetor_b);
    return 0;
}

void inserirValores(int n, int v[]) {
    for (int i = 0; i < n; i += 1){
    printf("\nDigite o valor do índice %d/%d do vetor A: ", i, n - 1);
    scanf("%d", &v[i]);
}
}

void imprimirVetor(int n, int v[]){
    printf("[ ");
    for (int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("] ");
}

void construirVetor(int n, int v[], int x[]) {
    for (int i = 0; i < n; i += 1) {
        if (i % 2 == 0){
            v[i] =  x[i] / 2;
        } else {
            v[i] = x[i] *3;
        }
    }
}