#include <iostream>
#include <string>
#include "funcoes_aula4.h"
//h = header

int main() {

        int numero = pedir_inteiro("Digite um número: ");
        int numero2 = pedir_inteiro("Digite outro número: ");

        std::cout << "A soma é " << soma_numeros(numero, numero2) << '\n';
        std::cout << "A subtração é " << subtracao_numeros(numero, numero2) << '\n';
        std::cout << "A multiplicação é " << multi_numeros(numero, numero2) << '\n';
        std::cout << "A divisão é " << div_numeros(numero, numero2) << '\n';

        return 0;

}
