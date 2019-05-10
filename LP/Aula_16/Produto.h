#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

class Produto{

    public:
        Produto();
        Produto(std::string nome, float preco);
        
        void setNome(std::string);
        std::string getNome();

        void setPreco(float);
        float getPreco();

    private:
        std::string nome_;
        float preco_;
};

#endif // !PRODUTO_H