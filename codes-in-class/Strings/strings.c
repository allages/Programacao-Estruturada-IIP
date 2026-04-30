#include <stdio.h>
#include <string.h>
#define TAM_MSG 50

void lerStr(char str[], int tam_str);

int main() {
    char mensagem [TAM_MSG] = "Mensagem aos alunos";
    printf("Essa é amensagem: %s\n\n", mensagem);
    printf("Digite uma mensagem: ");
    lerStr(mensagem, TAM_MSG);
    printf("A mensagem inserida é: ", mensagem);
}

void lerStr(char str[], int tam_str){ // entrada utilizando fgets
    fgets(str, tam_str, stdin); // input seguro
    int tam_str = strlen(str);
    if(tam_str > 0 && str[tam_str - 1] == '\n') {
        str[tam_str - 1] = '\0';
    }
}

