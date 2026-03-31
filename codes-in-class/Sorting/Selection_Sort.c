// A Selection Sort é um pouco parecida com a Bubble Sort. Nosso objetivo aqui é buscar o menor elemento do vetor
// enquanto "guardamos" o v[i]. Com o menor elemento, levamos ele (v[menor]) para v[i], e o v[i] irá para v[menor].

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int v[], int n);
void imprimirVetor(int v[], int n);
void selectionSort(int v[], int n);

int main(){
    srand(time(NULL));
    int nVetor;
    printf("Quantos elementos terá no vetor? ");
    scanf("%d", &nVetor);
    int vetor[nVetor];
    preencherVetor(vetor, nVetor);
    imprimirVetor(vetor, nVetor);
    selectionSort(vetor, nVetor);
    imprimirVetor(vetor, nVetor);
}

void preencherVetor(int v[], int n){
    for (int i = 0; i < n; i +=1){
        v[i] = rand() % 21;
    }
}

void imprimirVetor(int v[], int n){
    printf("\n[");
    for (int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("]");
}

void selectionSort(int v[], int n){
    int temp;
    for (int i = 0; i < n; i += 1){
        int menor = i; // indice de menor começa como i
        for (int j = i + 1; j < n; j += 1){
            if (v[j] < v[menor]){ // verifica cada elemento após o i, atualizando o índice de menor.
                menor = j;
            }
        }
        temp = v[menor]; // valor do elemento menor é guardado numa variável temporária
        v[menor] = v[i]; // o v[i] vai para a posição do menor
        v[i] = temp; // o menor é "puxado" para v[i]
    }
}