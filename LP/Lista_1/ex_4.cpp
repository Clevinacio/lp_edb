#include <iostream>
#include <string>
int main(){
        int numero=0, soma=0;

        std::cout << "Digite um número: ";
        std::cin >> numero;

        for (int i = 1; i <= numero; ++i) {
                soma +=i;
        }
        std::cout << "a soma é " << soma << '\n';

        return 0;
}
