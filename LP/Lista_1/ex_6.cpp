#include <iostream>
#include <string>
int main(){
        int numero=0, op=0, soma_produto=0;

        std::cout << "Digite um número: ";
        std::cin >> numero;
        std::cout << "Agora, selecione a opção:"<< '\n' <<
                "1- Soma de 1 até " << numero << '\n' <<
                "2- Produto de 1 até " << numero << '\n';
        std::cin >> op;
        if (op==1) {
                for (int i = 1; i <= numero; ++i) {
                        soma_produto +=i;
                }

                std::cout << "A soma é " << soma_produto << '\n';
        }else if(op==2) {
                soma_produto = 1;
                for (int i = 1; i <= numero; ++i) {
                        soma_produto *=i;
                }

                std::cout << "O produto é " << soma_produto << '\n';
        }


        return 0;
}
