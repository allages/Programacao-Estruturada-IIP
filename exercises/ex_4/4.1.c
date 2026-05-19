#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARACTERES 200
//Criacao das structs - Tema: Venda e controle de estoque

//MUDANÇA DO DIA 19 / 05 / 2026: criei as structs do estoque da "loja" e o struct da venda dos produtos
//criei o id (identificador) do controle de estoque e da venda, a da venda sao dois ids pois existe o id da venda em si
//e o id do produto que foi vendido. O estoque so precisa do produto pois nada foi retirado e qualquer mudança vai ser
//feita no proprio id.

//OBS: EVITAR USAR ACENTOS PRA N DA AQUELES SIMBOLOS ESTRANHOS!


struct ControleE{ //controle de estoque
    int id; //id do produto 
    char descricao[CARACTERES]; //descricao do produto 
    double preco; //preco do produto
    int qtdc; //quantidade  de produtos no estoque 
};

struct Venda{
    int idvenda; //id da venda em si
    int idproduto; //id do prduto q foi vendido
    int qtdv; //quantidade do produto vendido 
    double ValorT; //valor total 
};





int main() {
    //CRIAR STRUCTS E RELACIONAR COM ARQUIVOS





    
   
    //---------------------

    //*EM PRODUÇÃO - MENU*
    int entrada = 1;

    do{ 
        printf("\n______MENU______\n"); 







    }while(entrada != 0);







    return 0;
}


