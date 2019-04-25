#include <iostream>

int main(){
        int qtd_numeros=3;
        int* numeros = new int[qtd_numeros];
        for (int i = 0; i < qtd_numeros; ++i) {
                std::cout << "Digite um valor: ";
                std::cin >> numeros[i];

        }
        for (int i = 0; i < qtd_numeros; ++i) {
                for (int j = 0; j < qtd_numeros; ++j) {
                        int primeiro_numero = numeros[i];
                        int segundo_numero=numeros[j];
                        if (primeiro_numero<segundo_numero) {
                                numeros[i] = segundo_numero;
                                numeros[j] = primeiro_numero;
                        }
                }
        }

        for (int i = 0; i < qtd_numeros; i++) {
                std::cout << numeros[i] << '\n';
        }

        delete[] numeros;

        return 0;
}
