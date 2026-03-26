#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

void preecherMatriz(m[][COL], int lin, int col);
void imprimirMatriz(m[][COL], int lin, int col);
void maiorValorMatriz(m[][COL], int lin, int col);
void igualAZeroSecundaria(m[][COL], int lin. int col);

int main(){
    int matriz[LIN][COL];
    srand(1);
    imprimirMatriz(matriz, LIN, COL);
    igualAZeroSecundaria(matriz, LIN, COL);
}

void preencherMatriz(m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            m[i][j] = rand() 31;
        }
    }
}

void imprimirMatriz(m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < lin; j += 1){
            printf("%d\t" &m[i][j]);
        }
        printf("\n");
    }
}

void igualAZeroSecundaria(m[][COL], int lin, int col){
    if (lin != col){
        printf("Essa matriz não é quadrada!")
        return;
    }
    for (int i = 1; i < lin; i += 1){
        for (int j = 0; j > i; j += 1){
            m[i][j] = 0;
            }
        }
    }
}