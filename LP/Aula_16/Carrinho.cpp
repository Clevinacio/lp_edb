#include "Carrinho.h"

void Carrinho::limpar(){
    itens_.clear();
}

void Carrinho::adicionarItem(Produto p, unsigned int quantidade){
    Item item(p, quantidade);
    adicionarItem(item);
}

void Carrinho::adicionarItem(Item item){
    itens_.push_back(item);
}

void Carrinho::removerItem(Item item){

}

float Carrinho::getTotalCarrinho(){
    float total = 0.0f;
    for (size_t i = 0; i < itens_.size(); ++i)
    {
        total += itens_[i].
    }
    
}
//Get
std::vector<Item>& Carrinho::getItens(){
    return itens_;
}