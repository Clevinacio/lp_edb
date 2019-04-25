#include <iostream>
#include <string>
int main(){
        std::string nome;

        std::cout << "Qual o seu nome?" << '\n';
        std::cin >> nome;

        std::cout << "Olá, " << nome << '!' << '\n';
        return 0;
}
