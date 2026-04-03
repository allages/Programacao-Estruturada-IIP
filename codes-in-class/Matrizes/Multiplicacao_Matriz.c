// Crie uma função que receba 3 matrizes como parâmetro matA, matB, matMult que
// realiza a multiplicação das matrizes matA e matB e salve o resultado em matMult.
// Verifique inicialmente se as 3 matrizes são compatíveis.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAMa 3
#define COLUNAMa 2
#define LINHAMb 2
#define COLUNAMb 2
#define LINHAMr 3
#define COLUNAMr 2

void preencherMatrizes(int m[][COLUNAMa], int linA, int colA,
     int y[][COLUNAMb], int linB, int colB);
void imprimirMatrizes(int m[][COLUNAMa], int linA, int colA,
     int y[][COLUNAMb], int linB, int colB);
int verificarCompat(int m[][COLUNAMa], int y[][COLUNAMb], int z[][COLUNAMr],
     int linA, int colA, int linB, int colB, int linR, int colR);
void zerarMatrizR(int m[][COLUNAMr], int lin, int col);
void multiMatriz(int m[][COLUNAMa],
     int y[][COLUNAMb],
     int z[][COLUNAMr], int linR, int colR, int k_max);
void imprimirMatrizR(int m[][COLUNAMr], int lin, int col);

int main(){
    int matA[LINHAMa][COLUNAMa], matB[LINHAMb][COLUNAMb], matMult[LINHAMr][COLUNAMr];
    srand(1);
    preencherMatrizes(matA, LINHAMa, COLUNAMa, matB, LINHAMb, COLUNAMb);
    printf("Matrizes utilizadas na multiplicação:\n");
    imprimirMatrizes(matA, LINHAMa, COLUNAMb, matB, LINHAMb, COLUNAMb);
    if (verificarCompat(matA, matB, matMult, LINHAMa, COLUNAMa, LINHAMb, COLUNAMb, LINHAMr, COLUNAMr)){
        zerarMatrizR(matMult, LINHAMr, COLUNAMr);
        multiMatriz(matA, matB, matMult, LINHAMr, COLUNAMr, COLUNAMa);
        printf("\n\nResultado da multiplicação entre as matrizes:\n");
        imprimirMatrizR(matMult, LINHAMr, COLUNAMr);
    } else {
        printf("Matrizes não compatíveis");
    }
    return 0;
}

void preencherMatrizes(int m[][COLUNAMa], int linA, int colA, 
    int y[][COLUNAMb], int linB, int colB){
    // Preenchendo matriz A
    for (int i = 0; i < linA; i += 1){
        for (int j = 0; j < colA; j += 1){
            m[i][j] = rand() % 11;
        }
    }
    // Preenchendo matriz B
    for (int i = 0; i < linB; i += 1){
        for (int j = 0; j < colB; j += 1){
            y[i][j] = rand() % 11;
        }
    }
}

void imprimirMatrizes(int m[][COLUNAMa], int linA, int colA, 
    int y[][COLUNAMb], int linB, int colB){
    int maior; // Me desafiei a imprimir as duas matrizes na mesma linha
    if (linA > linB){ // Vamos buscar qual matriz possui mais linhas para definir quantas vezes vamos fazer a primeira iteração.
        maior = linA;
    } else {
        maior = linB;
    }
    for (int i = 0; i < maior; i += 1){
        if (linA > i){ // Se a matriz possui mais linhas ou a mesma quantidade de linhas que (maior - 1)
            printf("|");
            for (int j = 0; j < colA; j += 1){ // Imprimimos as colunas da matriz
                printf("%3d ", m[i][j]);
            }
                printf("|");
        } else {
            for(int j = 0; j < colA; j += 1){ // Imprimimos um espaço em branco caso a matriz já tenha sido impressa
                printf("   ");
            }
        }
        printf("\t"); // Agora vamos imprimir na mesma linha a outra matriz. Aqui demos um tab na impressão
        if (linB > i){
            printf("|");
            for (int j = 0; j < colB; j += 1){
                printf("%3d ", y[i][j]);
            }
            printf("|");
        } else {
            for(int j = 0; j < colB; j += 1){
                printf("   ");
            }
        }
        printf("\n");
    }

}

int verificarCompat(int m[][COLUNAMa], int y[][COLUNAMb], int z[][COLUNAMr],
    int linA, int colA, int linB, int colB, int linR, int colR){
    if (colA != linB || linR != linA || colR != colB){
        return 0;
    }
    return 1;
}

void zerarMatrizR(int m[][COLUNAMr], int lin, int col){
        for (int i = 0; i < lin; i +=1){
            for (int j = 0; j < col; j +=1){
                m[i][j]= 0;
        }
    }
}

void multiMatriz(int m[][COLUNAMa],
    int y[][COLUNAMb],
    int z[][COLUNAMr], int linR, int colR, int k_max){
        for (int i = 0; i < linR; i += 1){
            for(int j = 0; j < colR; j += 1){
                for(int k = 0; k < k_max; k +=1){
                    z[i][j] += m[i][k] * y[k][j];
                }
            }
        }
}

void imprimirMatrizR(int m[][COLUNAMr], int lin, int col){
    for (int i = 0; i < lin; i +=1){
        printf("|");
        for (int j = 0; j < col; j +=1){
            printf("%3d ", m[i][j]);
        }
        printf("|\n");
    }
}
