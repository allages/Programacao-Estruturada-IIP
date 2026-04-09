// Nosso objetivo inclui em criar em criar um vetor de tamanho 10 não ordenado e em seguida o programa irá imprimir a
// quantidade de vezes que os valores aparecerem no vetor.

#include <stdio.h>
#include <stdbool.h>
#define qtd 10

void preencherValores(int v[], int n);
bool verificarContido(int v, int x[], int n);
void contagemVetor(int v[], int n);

int main(){
    int vetor[qtd];
    preencherValores(vetor, qtd);
    printf("Valor —— Repetições\n");
    contagemVetor(vetor, qtd);
    return 0;
}

void preencherValores(int v[], int n) {
    for (int i = 0; i < qtd; i += 1) {
        printf("Digite o %dº valor inteiro do vetor: ", i + 1);
        scanf("%d", &v[i]);
        printf("\n");
    }
}

bool verificarContido(int v, int x[], int n){
    for (int i = 0; i < n; i+= 1) {
        if (v == x[i]) {
            return true;
        }
    }
    return false;
}

void contagemVetor(int v[], int n){
    int contado[n], n_contidos = 0;
    int key, quantidade;
    for (int i = 0; i < n; i += 1){
        quantidade = 1;
        key = v[i];
        if (verificarContido(key, contado, n) == false) {
            contado[n_contidos] = key;
            n_contidos += 1;
            for (int j = i + 1; j < n; j += 1){
                if (v[j] == key){
                    quantidade += 1;
                }
            }
        } else {
            continue;
        }
        printf("%d ————— %dx\n",key, quantidade);
    }
}



