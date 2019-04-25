#include <iostream>
#include <string>

#include "item.h"
#include "pessoa.h"

int display_menu();
void clear();
void display_message(std::string mensagem);
void run(Item* itens, int& qtd_itens, const int QTD_MAXIMA);
void adc_item(Item* itens, int& qtd_itens, const int QTD_MAXIMA);
void listar_itens(Item* itens, int& qtd_itens);
void adc_pessoa(Pessoa* pessoas, int& qtd_pessoas, const int QTD_MAXIMA);
int main(){
    const int QTD_MAXIMA = 100;

    Item* itens =  new Item[QTD_MAXIMA];
    int qtd_itens = 0;

    Pessoa* pessoas = new Pessoa[QTD_MAXIMA];
    int qtd_pessoas = 0;

    run(itens, qtd_itens, QTD_MAXIMA);
    return 0;
}



void adc_item(Item* itens, int& qtd_itens, const int QTD_MAXIMA){
    std::string nome;
    std::cout << "Informa o item a ser emprestado: ";
    std::cin >> nome;

    Item item;
    item.nome = nome;
    
    itens[qtd_itens] = item;
    qtd_itens++;
    display_message("Item adicionado com sucesso!");

    run(itens, qtd_itens, QTD_MAXIMA);
}

void listar_itens(Item* itens, int& qtd_itens){
    std::cout << "Itens emprestados: " << std::endl;

    for(int i = 0; i < qtd_itens; i++){
        std::cout << "Item " << (i+1) << ": " << itens[i].nome << std::endl;
    }
    
}

int display_menu(){
    std::cout << "____________________________" << std::endl;
    std::cout << "Empréstimo Já" << std::endl
              << "____________________________" << std::endl
              << "1. Cadastrar Itens" << std::endl
              << "2. Cadastrar Pessoas" << std::endl
              << "3. Realizar Empréstimo" << std::endl
              << "4. Realizar Devolução" << std::endl
              << "5. Listar Todos os Itens" << std::endl
              << "6. Listar Itens emprestados" << std::endl
              << "7. Listar todas pessoas" << std::endl
              << "8. Sair" << std::endl
              << "____________________________" << std::endl;
    int  opcao = 1;
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;


    if (opcao<1 || opcao>8) {
        display_message("Opção Inválida. Tente novamente");
        return display_menu();
    }
    
    return opcao;
}

void clear(){
    system("clear");
}

void display_message(std::string mensagem){
    clear();
    std::cout << mensagem << std::endl;
    system("sleep 2s");
    clear();
}

void run(Item *itens, int &qtd_itens, const int QTD_MAXIMA){
    clear();
    int opcao = display_menu();

    switch (opcao)
    {
    case 1:
        clear();
        adc_item(itens, qtd_itens, QTD_MAXIMA);
        break;
    case 2:
        
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        clear();
        listar_itens(itens, qtd_itens);
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */

        break;
    case 8:
        display_message("Volte sempre!");
        break;
    }
}