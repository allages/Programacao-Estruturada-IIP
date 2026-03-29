// O Insertion Sort ou Inserção Direta tem como objetivo ordenar um array percorrendo ele da esquerda para a direita
// A inserção direta se inicia pelo índice 1 e assim por diante
// A cada valor que verificamos, colocamos ele na posição correta do subvetor a direita.
// https://yongdanielliang.github.io/animation/web/InsertionSortNew.html

#include <stdio.h>

void inserirValores(int v[], int n);
void imprimirValores(int v[], int n);
void insertionSort(int v[], int n);

int main (){
    int numero_vetor;
    printf("Quantos valores serão inseridos no vetor: ");
    scanf("%d", &numero_vetor);
    int vetor[numero_vetor];
    inserirValores(vetor, numero_vetor);
    imprimirValores(vetor, numero_vetor);
    printf("\nO seu vetor ordenado utilizando o Inserction Sort é: \n");
    insertionSort(vetor, numero_vetor);
    imprimirValores(vetor, numero_vetor);
    printf("\n\n");
    return 0;
}

void inserirValores(int v[], int n){
    for (int i = 0; i < n; i += 1) {
        printf("\nInsira o %dº valor inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }
}
void imprimirValores(int v[], int n) {
    for (int i = 0; i < n; i+=1) {
        printf("%d", v[i]);
    }
}
void insertionSort(int v[], int n) {
    int key; // A chave (valor de vetor[i])
    int j; // O índice do elemento anterior ao i (inicialmente)
    for (int i = 1; i < n; i += 1){ // Percorrendo da esquerda pra direita a partir do índice 1
        key = v[i];
        j = i - 1 ;
        while(j >= 0 && v[j]> key){ // Se j não tiver percorrido até o último índice à esquerda e v[j] > v[i] o laço de repetição fará:
            v[j + 1] = v[j]; // Irá pegar o valor a sua direita (menor) e irá copiar ao índice j** NÃO EXISTE TROCA DE VALORES AQUI
            j -= 1; // Agora o decremento faz com que v[j] = menor e o laço se repete caso a condição seja verdadeira.
        }
        v[j+1] = key; 
        // Encerrado o laço, quando o j tiver percorrido o laço todo à esquerda ou v[j] <= key, o último elemento que foi anteriormente "puxado" para a direita será substituido pela chave
    }
}