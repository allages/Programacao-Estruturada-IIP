// Crie uma função que receba como parâmetro uma matriz quadrada e modifique a própria matriz
// para que ela seja a matriz transposta.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

void preencherMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void matrizTransposta(int m[][COL], int mT[][COL], int lin, int col);

int main(){
    int matrizInicial[LIN][COL], matrizTransp[LIN][COL];
    srand(time(NULL));
    preencherMatriz(matrizInicial, LIN, COL);
    printf("Sua matriz inicial é:\n");
    imprimirMatriz(matrizInicial, LIN, COL);
    matrizTransposta(matrizInicial, matrizTransp, LIN, COL);
    printf("\nSua matriz transposta é:\n");
    imprimirMatriz(matrizTransp, LIN, COL);
    return 0;
}

void preencherMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            m[i][j] = rand () % 41;
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

void matrizTransposta(int m[][COL], int mT[][COL], int lin, int col){
    for(int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            mT[i][j] = m[j][i];
        }
    }
}