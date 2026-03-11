#include <stdio.h>
#define qtd_alunos 30
#define nota_min 0.0
#define nota_max 10.0

void inserir_notas(double v[], int n);
void calculomedia(double v[], double a[], double b[], int n);
double sum_media(double v[], int n);

int main () {
    double nota1[qtd_alunos], nota2[qtd_alunos], media[qtd_alunos], soma_media, media_turma;
    soma_media = 0;
    inserir_notas(nota1, qtd_alunos);
    inserir_notas(nota2, qtd_alunos);
    calculomedia(media, nota1, nota2, qtd_alunos);


}

void inserir_notas(double v[], int n) {
    for (int i = 0; i < n; i + 1) {
        do {
            printf("Digite a idade do aluno %d: ",i + 1);
            scanf("%d", &v[i]);
        } while (v[i] < nota_min || v[i] > nota_max);
    }
}
void calculomedia(double v[], double a[], double b[], int n) {
    for (int i = 0; i < n; i + 1) {
        v[i] = ((a[i] * 2.0) + (b[i] * 3.0)) / 5.0;
    }
}
