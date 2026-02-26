#include <stdio.h>

int main() {
int idade, qtd_pessoa, soma;
double media;
printf("Digite a sua idade: ");
scanf("%d", &idade);
qtd_pessoa = 0;
soma = 0;
while (idade >= 0) {
    qtd_pessoa += 1;
    soma += idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
}
if (qtd_pessoa != 0) {
    media = (double) soma / (double) qtd_pessoa;
    printf("A média da idade dos participantes é de %.2lf anos\n", media);
} else {
    printf ("Nenhuma idade válida foi digitada\n");
    return 1;
}
return 0;
}

