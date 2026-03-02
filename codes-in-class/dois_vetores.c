#include <stdio.h>
#define qtd_valores 10

int main() {
    int vetor_a[qtd_valores], vetor_b[qtd_valores];
    for (int i = 0; i < qtd_valores; i += 1) {
        printf("Insira o %dº inteiro: ", qtd_valores + 1);
        scanf("%d", &vetor_a);
    }
    for (int i = 0; i < qtd_valores; i += 1) { 
        prinf("%d ", vetor_a);
    }
    return 0;
}
