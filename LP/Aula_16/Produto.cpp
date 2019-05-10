#include <iostream>
#include <string>

#include "Produto.h"

//Construtores
Produto:: Produto(): nome_(), preco_(){}

Produto::Produto(std::string nome, float preco)
    : nome_(nome), preco_(0.0f)
{}

//Set
void Produto::setNome(std::string nome){
    nome_ = nome;
}

void Produto::setPreco(float preco){
    preco_ = preco;
}

//Get
std::string Produto::getNome(){
    return nome_;
}


float Produto::getPreco(){
    return preco_;
}