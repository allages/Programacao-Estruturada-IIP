#include <stdio.h>
#define tam_min 3
#define tam_max 50

int escolherTamanho();
void inserirValores(int v[], int n);
void insertionSort(int v[], int n);
void imprimirVetor(int v[], int n);
int binarySearch(int v[], int n, int x);
int eliminarElemento(int v[], int vTam, int x[], int xTam, int eli);
void imprimirVetorEli(int v[], int n);
int adicionarElemento(int v[], int vTam, int x[], int xTam, int adi);
void imprimirVetorAdi(int v[], int n);

int main() {
    int tamanhoVetor = escolherTamanho();
    int vetor[tamanhoVetor];
    inserirValores(vetor, tamanhoVetor);
    insertionSort(vetor, tamanhoVetor);
<<<<<<< HEAD
    int opcao = 1;
    do{
        printf("\n—————————— MENU ——————————\nDigite o número para as opções seguintes:\n[1] — Imprimir\n[2] — Consultar elemento\n[3] — Remover elemento\n[4] — Inserir Elemento\n[0] — Encerrar Programa\n— ");
        scanf("%d", &opcao);
        if (opcao == 1){
            imprimirVetor(vetor, tamanhoVetor);
        } else if (opcao == 2){
            int num;
            printf("Insira um valor a ser consultado no vetor: ");
            scanf("%d", &num);
            if(binarySearch(vetor, tamanhoVetor, num) != -1){
                printf("O índice em que o valor %d se encontra é: %d\n\n", num, binarySearch(vetor, tamanhoVetor, num));
            } else {
                printf("Elemento não encontrado no vetor\n");
            }
        } else if (opcao == 3){
            int numeroEli;
            printf("Qual o valor que você deseja eliminar do vetor? ");
            scanf("%d", &numeroEli);
            int indiceEli = binarySearch(vetor, tamanhoVetor, numeroEli);
            int tamVetorEli = tamanhoVetor - 1, vetorEli[tamVetorEli];
            if (eliminarElemento(vetor, tamanhoVetor, vetorEli, tamVetorEli, indiceEli)) {
                imprimirVetorEli(vetorEli, tamVetorEli);
            } else if (tamVetorEli < 3) {
                printf("\n(ERRO) Tamanho mínimo de vetor (%d) não atingido\n", tam_min);
            } else {
                printf("\n(ERRO) Elemento não encontrado");
            }
        } else if (opcao == 4){
            int numeroAdi, tamVetorAdi = tamanhoVetor + 1, vetorAdi[tamVetorAdi];
            printf("\nQual o valor inteiro que deseja adicionar ao vetor? ");
            scanf("%d", &numeroAdi);
            if(adicionarElemento(vetor, tamanhoVetor, vetorAdi, tamVetorAdi, numeroAdi)) {
                imprimirVetorAdi(vetorAdi, tamVetorAdi);
            } else {
                printf("\nLimite do vetor (%d) atingido", tam_max);
            }
        } else if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao !=0) {
            printf("(ERRO) Opção inválida!\n");
        }
    } while (opcao != 0);
    printf("Programa encerrado!\n\n");
=======
    imprimirVetor(vetor, tamanhoVetor);
    int num;
    printf("Insira um valor a ser consultado no vetor: ");
    scanf("%d", &num);
    if(binarySearch(vetor, tamanhoVetor, num) != -1){
        printf("O índice em que o valor %d se encontra é: %d\n\n", num, binarySearch(vetor, tamanhoVetor, num));
        } else {
            printf("(ERRO) Elemento não encontrado no vetor\n");
        }
    int numeroEli;
    printf("Qual o valor que você deseja eliminar do vetor? ");
    scanf("%d", &numeroEli);
    int indiceEli = binarySearch(vetor, tamanhoVetor, numeroEli);
    int tamVetorEli = tamanhoVetor - 1, vetorEli[tamVetorEli];
    if (eliminarElemento(vetor, tamanhoVetor, vetorEli, tamVetorEli, indiceEli)) {
        imprimirVetorEli(vetorEli, tamVetorEli);
    } else if (tamVetorEli < 3) {
        printf("\n(ERRO) Tamanho mínimo de vetor (%d) não atingido\n", tam_min);
    } else {
        printf("\n(ERRO) Elemento não encontrado");
    }
    int numeroAdi, tamVetorAdi = tamanhoVetor + 1, vetorAdi[tamVetorAdi];
    printf("\nQual o valor inteiro que deseja adicionar ao vetor? ");
    scanf("%d", &numeroAdi);
    if(adicionarElemento(vetor, tamanhoVetor, vetorAdi, tamVetorAdi, numeroAdi)) {
        imprimirVetorAdi(vetorAdi, tamVetorAdi);
    } else {
        printf("\n(ERRO) Limite do vetor (%d) atingido", tam_max);
    }
    printf("\n\n");
>>>>>>> c24469c9d3940367ab0f5832b6479006cabfe5c8
    return 0;
}

int escolherTamanho() {
    int n;
    do {
        printf("\nInsira o tamanho do vetor (%d/%d): ", tam_min, tam_max);
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    return n;
}

void inserirValores(int v[], int n) {
    for (int i = 0; i < n; i += 1){
        printf("\nInsira o elemento inteiro de índice número %d: ", i);
        scanf("%d", &v[i]);
    }
}

void imprimirVetor (int v[], int n) {
    printf("Vetor Ordenado: \n[");
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

int eliminarElemento(int v[], int vTam, int x[], int xTam, int ind){
    if (xTam < 3 || ind == -1){
        return 0;
    }
    for (int i = 0; i < ind; i += 1){
        x[i] = v[i];
    }
    for (int j = ind + 1; j < vTam; j +=1){
        x[j - 1] = v[j];
    }
    return 1;
}

void imprimirVetorEli(int v[], int n){
    printf("Novo Vetor após eliminação do elemento:\n[");
    for (int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("]\n");
}

int adicionarElemento(int v[], int vTam, int x[], int xTam, int adi){
    if (xTam > 50) return 0;
    for (int i = 0; i < vTam; i += 1){
        x[i] = v[i];
    } 
    x[vTam] = adi;
    insertionSort(x, xTam);
    return 1;
}

void imprimirVetorAdi(int v[], int n){
    printf("Novo Vetor ordenado após a adição do elemento:\n[");
    for (int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("]\n");
}
