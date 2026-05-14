// Crie uma função que recebe 3 matrizes como parâmetro: matA, matB e matSoma, onde cada elemento da
// matSoma é a soma dos elementos correspondentes das matrizes matA e matB.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 2
#define COL 3

void preencherMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void somaMatriz(int m1[][COL], int m2[][COL], int mSom[][COL], int lin, int col);

int main(){
    int matA[LIN][COL], matB[LIN][COL], matSoma[LIN][COL];
    srand(time(NULL));
    preencherMatriz(matA, LIN, COL);
    printf("Matriz A:\n");
    imprimirMatriz(matA, LIN, COL);
    preencherMatriz(matB, LIN, COL);
    printf("\n\nMatriz B:\n");
    imprimirMatriz(matB, LIN, COL);
    somaMatriz(matA, matB, matSoma, LIN, COL);
    printf("\n\nMatriz soma de A + B:\n");
    imprimirMatriz(matSoma, LIN, COL);
    return 0;
}

void preencherMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j +=1){
            m[i][j] = rand() % 41;
        }
    }
}

void imprimirMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        printf("|");
        for (int j = 0; j < col; j += 1){
            printf("%3d ", m[i][j]);
        }
        printf("|\n");
    }
}

void somaMatriz(int m1[][COL], int m2[][COL], int mSom[][COL], int lin, int col){
    int soma;
    for (int i = 0; i < lin; i +=1){
        for (int j = 0; j < col; j += 1){
            soma = m1[i][j] + m2[i][j];
            mSom[i][j] = soma;
        }
    }
}