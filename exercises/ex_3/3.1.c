#include <stdio.h>
#include <stdlib.h>
#define TAM 30

struct Aluno {
    double nota1, nota2, media;
};

void preencherAluno(struct Aluno *a){
    printf("Digite a nota 1: ");
    scanf("%lf", &a->nota1);
    printf("Digite a nota 2: ");
    scanf("%lf", &a->nota2);
    printf("\n");
}

void calcularMediaAluno(struct Aluno *a){
    a->media = ((a->nota1 * 2 + a->nota2 * 3) / 5);
}

double calcularMediaTurma(struct Aluno a[], int n){
    double soma = 0;
    for (int i = 0; i < n; i += 1){
        soma += a[i].media;
    }

    return soma / n;
}

void imprimirMaiorqueMedia(struct Aluno a[], int n, double mediaT){
    for (int i = 0; i < n; i += 1){
        if (a[i].media > mediaT){
            printf("A média do aluno %d é acima da média total da turma %.2lf\nNOTA1: %.2lf\nNOTA2: %.2lf\n", i + 1, a[i].media, a[i].nota1, a[i].nota2);
        }
    }
}


int main(){
    struct Aluno turma[TAM];

    for (int i = 0; i < TAM; i +=1){
        printf("Aluno nº %d\n", i + 1);
        preencherAluno(&turma[i]);
        calcularMediaAluno(&turma[i]);
    }

    double mediaTurma = calcularMediaTurma(turma, TAM);
    printf("A média da turma é: ", mediaTurma);
    imprimirMaiorqueMedia(turma, TAM, mediaTurma);
    return 0;
}

