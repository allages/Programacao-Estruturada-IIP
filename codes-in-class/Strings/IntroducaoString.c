#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Uma string é um conjunto de caracteres (char)

void quantidadeCaractere(char texto[]){
    int i = 0;
    while (texto[i] != '\0'){ // literais caractereres devem ser utilizados com aspas simples
        i += 1;
    }
    
    printf("A quantidade de caracteres dessa string é: %d\n", i);
}

void inserirStringScanf(char str[]){ // se utilizarmos scanf("%s", str), o scanf irá ler até o primeiro espaço.
    printf("Agora sua vez de inserir uma string! Teste o seu nome: ");
    scanf("%200[^\n]", str); // %limite de caracteres + [^\n] inclui todos os caracteres até a quebra de linha.
    printf("\n%s\n", str); 

    // A leitura por scanf possui riscos caso leia mais caracteres que o limite de tamanho definido para a string
    // causando um estouro de memória.
    // O scanf também armazena o '\n' no buffer de entrada, afetando entradas subsequentes.
    getchar(); // Retirando o '\n' do buffer.
}

void inserirStringFgets(char str[]){
  // A funçao fgets é a mais segura para ler strings em C. Ela recebe três parâmentros.
  printf("\nInsira agora seu endereço: ");
  fgets(str, 200, stdin); // (1 - A variável que iremos armazenar a string, 2 - O tamanho máximo de entrada, 3 - stdin é utilizado para indicar que utilizaremos o teclado como entrada)
  str[strcspn(str, "\n")] = '\0'; // Função que retira o '\n' da string
  printf("%s\n", str);

  // A última posição do fgets armazena o delimitador de strings, ou seja, só é possível armazenar armazenar 199 caracteres nesse caso.
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
    printf("%s", frase2); // A string frase2 foi sobreescrita. 

    inserirStringFgets(frase2);

    return 0;
}