#include <iostream>
#include <string>

struct Pessoa{
    std::string nome;
    int idade;
};


int main(){
    Pessoa* pessoa = new Pessoa;

    delete pessoa;
    int* numero = new int;
    delete numero;
    numero = nullptr;
    
    return 0;
}
