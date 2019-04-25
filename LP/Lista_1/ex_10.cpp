#include <iostream>
#include <string>
int main(){
        int numero=rand()%100, valor_digitado=0;
        std::cout << "NUMERO SECRETO!" << '\n';
        std::cout << "Adivinhe o número: ";
        std::cin >> valor_digitado;
        while (valor_digitado!=numero) {
                if (valor_digitado<numero) {
                        std::cout << "Valor menor que o número secreto! Digite novamente! ";
                        std::cin >> valor_digitado;
                }else if (valor_digitado>numero) {
                        std::cout << "Valor maior que o número secreto! Digite novamente! ";
                        std::cin >> valor_digitado;
                }
        }
        std::cout << "Acertou!" << '\n';


        return 0;
}
