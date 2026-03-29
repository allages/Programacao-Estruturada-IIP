#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int v[], int n);
void imprimirVetor(int v[], int n);
void bubbleSort(int v[], int n);

int main(){
    int tamanhoVetor;
    printf("Quantos valores serão inseridos no vetor(2-10)? ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    preencherVetor(vetor, tamanhoVetor);
    printf("Seu vetor não ordenado: ");
    imprimirVetor(vetor, tamanhoVetor);
    bubbleSort(vetor, tamanhoVetor);
    printf("\nSeu vetor ordenado utilizando Bubble Sort: ");
    imprimirVetor(vetor, tamanhoVetor);
}

void preencherVetor(int v[], int n){
    srand(1);
    int j = n;
    for (int i = 0; i < n; i+= 1){
        v[i] = rand() % 51;
    }
}

void imprimirVetor(int v[], int n){
    printf("[");
    for(int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("]");
}

void bubbleSort(int v[], int n){
    int tmp;
    for (int i = 0; i < n - 1; i += 1){ // Serão feitas n - 1 varreduras (Exemplo: se o vetor for tamanho 10, 9 varreduras)
        for (int j = 0; j < n - i - 1; j += 1){
            if (v[j] > v[j + 1]){
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
}