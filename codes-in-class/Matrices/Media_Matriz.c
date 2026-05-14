#include <stdio.h>
#include <stdlib.h>
#define COL 4
#define LIN 4

void preencherMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            printf("— ");
            scanf("%d", &m[i][j] );
        }
    }
}

void mediaColuna(int m[][COL], int lin, int col, int v[]){
    for (int j = 0; j < col; j += 1){
        int soma = 0;
        int media;
        for (int i = 0; i < lin; i += 1){
            soma += m[i][j];
        }
        media = soma / lin;
        v[j] = media;
    }
}

void imprimirVetor(int v[], int n){
    printf("{ ");
    for (int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf(" }");
}

int main(){
    int matriz[LIN][COL];
    int v[COL];
    preencherMatriz(matriz, LIN, COL);
    mediaColuna(matriz, LIN, COL, v);
    imprimirVetor(v, COL);
    return 0;
}