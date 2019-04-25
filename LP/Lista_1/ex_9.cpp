#include <iostream>
#include <string>
int main(){
        int numero=0, bissexto =1904;

        std::cout << "Digite um número: ";
        std::cin >> numero;

        while (bissexto<numero) {
                std::cout << bissexto << '\n';
                bissexto+=4;
        }

        return 0;
}
