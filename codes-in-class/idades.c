#include <stdio.h>
#define max_qtd 5

int main() {
    int idades[max_qtd];
    printf("Digite %d idades: \n", max_qtd);
    for(int i = 0; i < max_qtd; i += 1 ) {
        scanf ("%d", &idades[i]);
    }
    printf("%d\n", idades[4]);
    return 0;
} 