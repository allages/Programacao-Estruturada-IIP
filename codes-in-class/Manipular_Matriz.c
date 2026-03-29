// O programa tem como objetivo exercitar a manipulação de matrizes. Então foi feito um menu para utilizarmos as respectivas
// funções.

#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

void preencherMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void menu(int m[][COL], int lin, int col);

int main(){
    int matriz[LIN][COL];
    srand(1);
    preencherMatriz(matriz, LIN, COL);
    imprimirMatriz(matriz, LIN, COL);
    menu(matriz, LIN, COL);
}

void preencherMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            m[i][j] = rand() % 31;
        }
    }
}

void imprimirMatriz(int m[][COL], int lin, int col){
    for (int i = 0; i < lin; i += 1){
        printf("|");
        for (int j = 0; j < col; j += 1){
            printf("%2d ", m[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

void menu(int m [][COL], int lin, int col){
   int opcao = -1;
    do {
        printf("\n================MENU================\n[1]—Imprimir maior valor e posição.\n[2]—Imprimir menor valor e posiçao.\n[0]—Encerrar Aplicação.\n— ");
        scanf("%d", &opcao);
    } while (opcao != 0); 
}