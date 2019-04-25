#include <iostream>
#include <string>
int main(){
        int numero=0, prod=0;

        std::cout << "Digite um número: ";
        std::cin >> numero;

        for (int i = 1; i <= 10; ++i) {
                prod = numero*i;
                std::cout << numero << " X " << i << " = " << prod << '\n';

        }

        return 0;
}
