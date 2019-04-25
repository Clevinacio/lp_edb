#include <iostream>

int main(){
        int qtd_numeros=10, k=83;
        int* numeros = new int[qtd_numeros];

        for (int i = 0; i < qtd_numeros; ++i) {
                numeros[i] = rand()%100;
                std::cout << numeros[i] << '\n';
        }

        for (int i = 0; i < qtd_numeros; ++i) {
                if (numeros[i]==k) {
                        std::cout << '\n';
                        std::cout << i << '\n';

                        delete[] numeros;
                        return 0;
                }
        }

        std::cout << "-1" << '\n';

        return 0;
}
