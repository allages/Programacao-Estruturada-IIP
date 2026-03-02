#include <stdio.h>
#define max_qtd 5
#define idade_min 0
#define idade_max 130

int main() {
    int idades[max_qtd];
    double soma = 0.0;
    double media = 0.0;
    for (int i = 0; i < 5; i += 1) {
       do { 
            printf("Digite a idade do participante %d (%d-%d): ", i + 1, idade_min, idade_max);
            scanf("%d", &idades);
       } while (idades[i] < idade_min || idades[i] > idade_max);
        soma += idades[i];
    }
    if (max_qtd != 0) {
        media = soma / (double) max_qtd;
        printf("A média da idade dos participantes é de %.2lf anos\n", media);

        printf("As idades maiores ou iguais as médias são: \n");
        for (int i = 0; i < max_qtd; i += 1) {
            if (idades[i] >= media) {
                printf("A idade do participante %d: %d\n", i + 1, idades[i]);
            }
        }
    }
}