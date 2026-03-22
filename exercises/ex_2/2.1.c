#include <stdio.h>
#define tam_min 3
#define tam_max 50

int escolherTamanho();
void inserirValores(int v[], int n);
void insertionSort(int v[], int n);
void imprimirVetor(int v[], int n);
int binarySearch(int v[], int n, int x);

int main() {
    int tamanhoVetor = escolherTamanho();
    int vetor[tamanhoVetor];
    inserirValores(vetor, tamanhoVetor);
    insertionSort(vetor, tamanhoVetor);
    imprimirVetor(vetor, tamanhoVetor);
    int num;
    printf("Insira um valor a ser consultado no vetor: ");
    scanf("%d", &num);
    printf("O índice em que o valor %d se encontra é: %d\n\n", num, binarySearch(vetor, tamanhoVetor, num));



}

int escolherTamanho() {
    int n;
    do {
        printf("\nInsira o tamanho do vetor (%d/%d): ", tam_min, tam_max);
        scanf("%d", &n);
    } while (n < 3 || n > 50);
}

void inserirValores(int v[], int n) {
    for (int i = 0; i < n; i += 1){
        printf("\nInsira o elemento inteiro de índice número %d: ", i);
        scanf("%d", &v[i]);
    }
}

void imprimirVetor (int v[], int n) {
    printf("\nVetor Ordenado: \n[");
    for (int i = 0; i < n; i += 1) {
        printf(" %d ", v[i]);
    }
    printf("]\n");
}

void insertionSort(int v[], int n){
    int key;
    for (int i = 1; i < n; i += 1){
        key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j -= 1;
        }
        v[j + 1] = key;
    }
}

int binarySearch(int v[], int n, int x){
    int high = n - 1 , mid, low = 0; // n - 1 é o último índice válido
    while (low <= high){
        mid = (low + high) / 2;
        int search = v[mid];
        if (search == x) {
            return mid;
        } else if (x < search) {
            high = mid - 1;
        } else if (x > search) {
            low = mid + 1;
        }
    }
    return -1;
}