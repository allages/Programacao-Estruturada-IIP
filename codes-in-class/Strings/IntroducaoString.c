#include <stdio.h>
#include <stdlib.h>

// Uma string é um conjunto de caracteres (char)

void quantidadeCaractere(char texto[]){
    int i = 0;
    while (texto[i] != '\0'){ // literais caractereres devem ser utilizados com aspas simples
        i += 1;
    }
    
    printf("A quantidade de caracteres dessa string é: %d\n", i);
}

void inserirStringScanf(char str[]){ // se utilizarmos scanf("%s", str), o scanf irá ler até o primeiro espaço.
    printf("Agora sua vez de inserir uma string!: ");
    scanf("%200[^\n]", str); // %limite de caracteres + [^\n] inclui todos os caracteres até a quebra de linha.
    printf("\n%s\n", str); 
}


int main(){

    char frase1[] = {"Bom dia alunos!"}; // Sem tamanho do vetor informado [14]
    printf("%s", frase1); // Imprimir string ('s')
    printf("\n%c\n", frase1[0]); // Imprimir caractere (informando índice)
    quantidadeCaractere(frase1);
    char frase2[200] = {"São Paulo, Rio de Janeiro, Espírito Santo, Minas Gerais"};
    quantidadeCaractere(frase2); // Imprime a quantidade de caracteres que estão inseridos na string char.
    // São Paulo, Rio de Janeiro, Espírito Santo, Minas Gerais\0.....[200]

    inserirStringScanf(frase2);
    printf("%s", frase2); // A string frase2 foi sobrescrita. 

    return 0;
}