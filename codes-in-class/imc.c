#include <stdio.h>

int main() {
    double peso, altura, imc;
    printf("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("Digite a sua altura: ");
    scanf("%lf", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC é: %.2lf\n", imc);
    return 0;
}