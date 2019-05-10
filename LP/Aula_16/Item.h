#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

#include "Produto.h"

class Item{

    public:
        Item(Produto produto, unsigned int quantidade);
        //Set
        void setProduto(Produto p);
        void setQuantidade(unsigned int quantidade);
        
        //Get
        Produto getProduto();
        unsigned int getQuantidade();
        
        //Métodos
        float  getTotal();
        void aumentarQuantidade();
        void diminuirQuantidade();
    private:
        Produto produto_;
        unsigned int quantidade_;    
};

#endif // !ITEM_H