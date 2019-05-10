#ifndef CARRINHO_H
#define CARRINHO_H

#include <iostream>
#include <vector>

#include "Item.h"
class Carrinho{

    public:
        //Métodos
        void limpar();
        void adicionarItem(Produto p, unsigned int quantidade);
        void adicionarItem(Item item);
        void removerItem(Item item);
        float getTotalCarrinho();
        //Get
        std::vector<Item>& getItens();
    private:
        std::vector<Item> itens_;

};

#endif // !CARRINHO_H