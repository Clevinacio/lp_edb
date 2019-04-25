#include <iostream>
#include <string>
int main(){
        std::string nome;

        std::cout << "Qual o seu nome?" << '\n';
        std::cin >> nome;

        if (nome=="Ana"||nome=="John") {
                std::cout << "Olá, " << nome << '!' << '\n';
        }


        return 0;
}
