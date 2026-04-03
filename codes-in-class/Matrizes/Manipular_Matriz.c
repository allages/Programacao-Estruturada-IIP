// O programa tem como objetivo exercitar a manipulação de matrizes. Então foi feito um menu para utilizarmos as respectivas
// funções: Uma que imprima a posição e o valor do maior elemento, e outro que faça a mesma coisa com o menor elemento.
// 

#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

void preencherMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void menu(int m[][COL], int lin, int col);
void maiorElementoMatriz(int m[][COL], int lin, int col);
void menorElementoMatriz(int m[][COL], int lin, int col);
void zerarDiagonalPrinc(int m[][COL], int lin, int col);
void zerarDiagonalSec(int m[][COL], int lin, int col);

int main(){
    int matriz[LIN][COL];
    srand(1);
    preencherMatriz(matriz, LIN, COL);
    printf("Essa é a matriz aleatória %dx%d a ser manipulada: \n", LIN, COL);
    imprimirMatriz(matriz, LIN, COL);
    menu(matriz, LIN, COL);
    return 0;
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

void menu(int m[][COL], int lin, int col){
   int opcao = -1;
    do {
        printf("\n================MENU================\n[1]—Imprimir maior valor e posição.\n[2]—Imprimir menor valor e posiçao.\n[3]—Imprimir valores abaixo da Matriz Diagonal Principal = 0.\n[4]—Imprimir valores abaixo da Matriz Diagonal Secundária = 0.\n[0]—Encerrar Aplicação.\n— ");
        scanf("%d", &opcao);
        if (opcao == 1){
            maiorElementoMatriz(m, lin, col);
        } else if (opcao == 2){
            menorElementoMatriz(m, lin, col);
        } else if (opcao == 3){
            zerarDiagonalPrinc(m, lin, col);
            imprimirMatriz(m, lin, col);
        } else if (opcao == 4){
            zerarDiagonalSec(m, lin, col);
            imprimirMatriz(m, lin, col);
        } else if (opcao != 0){
            printf("\n[ERRO] Opção inválida, insira alguns dos valores acima!\n\n");
        }
    } while (opcao != 0); 
    printf("\n\n\n[PROGRAMA ENCERRADO]");
}

void maiorElementoMatriz(int m[][COL], int lin, int col){
    int iMaior = 0, jMaior = 0; // vai reservar os índices do maior elemento
    for (int i = 0; i < lin; i += 1){
        for (int j = 0; j < col; j += 1){
            if (m[i][j] >= m[iMaior][jMaior]){
                iMaior = i;
                jMaior = j;
            }
        }
    }
    printf("— O maior elemento é (%d) e está na posição (%d, %d) da matriz\n\n", m[iMaior][jMaior], iMaior + 1, jMaior + 1);
}

void menorElementoMatriz(int m[][COL], int lin, int col){
    int iMenor, jMenor;
    for (int i = 0; i < lin; i +=1){
        for (int j = 0; j < col; j += 1){
            if(m[i][j] <= m[iMenor][jMenor]){
                iMenor = i;
                jMenor = j;
            }
        }
    }
    printf("— O menor elemento é (%d) e está na posição (%d, %d) da matriz\n\n", m[iMenor][jMenor], iMenor + 1, iMenor + 1);
}

void zerarDiagonalPrinc(int m[][COL], int lin, int col){
    if (lin != col){
        printf("\n[ERRO] A matriz não é quadrada!");
        return;
    }
    for (int i = 1; i < lin; i += 1){
        for(int j = 0; j < col; j += 1){
            if(i > j){
                m[i][j] = 0;
            }
        }
    }
}

void zerarDiagonalSec(int m[][COL], int lin, int col){
    if(lin != col){
        printf("\n[ERRO] A matriz não é quadrada!");
        return;
    }
    for (int i =1; i < lin; i += 1){
        for(int j = 0; j < col; j += 1){
            if(i + j > lin - 1){
                m[i][j] = 0;
            }
        }
    }
}