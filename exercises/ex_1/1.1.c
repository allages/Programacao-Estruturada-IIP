#include <stdio.h>
#define qtd_alunos 5
#define nota_min 0.0
#define nota_max 10.0

void inserir_notas(double v[], int n);
void calculomedia(double v[], double a[], double b[], int n);
double media_todos(double v[], int n);
void maiorq_media(double v[],double k[], double p[], int n, double a);

int main () {
    double nota1[qtd_alunos], nota2[qtd_alunos], media[qtd_alunos], media_turma;
    printf("Insira a primeira nota dos estudantes:\n");
    inserir_notas(nota1, qtd_alunos);
    printf("\n Insira a segunda nota dos estudantes:\n");
    inserir_notas(nota2, qtd_alunos);
    calculomedia(media, nota1, nota2, qtd_alunos);
    media_turma = media_todos(media, qtd_alunos);
    printf("\nA média da turma é: %.2f\n", media_turma);
    maiorq_media(media, nota1, nota2, qtd_alunos, media_turma);
}

void inserir_notas(double v[], int n) {
    for (int i = 0; i < n; i += 1) {
        do {
            printf("Digite a nota do aluno %d: ",i + 1);
            scanf("%lf", &v[i]);
        } while (v[i] < nota_min || v[i] > nota_max);
    }
}

void calculomedia(double v[], double a[], double b[], int n) {
    for (int i = 0; i < n; i += 1) {
        v[i] = ((a[i] * 2.0) + (b[i] * 3.0)) / 5.0;
    }
}

double media_todos(double v[], int n) {
    double val_soma = 0.0;
    for (int i = 0; i < n; i += 1) {
        val_soma += v[i];
    }
    return val_soma / (double) n;
}

void maiorq_media(double v[],double k[], double p[], int n, double a) {
    for (int i = 0; i < n; i += 1) {
        if (v[i] > a){
            printf("A nota do estudante número %d é maior que a média total da turma: %.2f\n Nota 1: %.2f Nota 2: %.2f\n", i + 1, v[i], k[i], p[i]);
        }
    }
}