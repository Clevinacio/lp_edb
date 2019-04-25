#include <iostream>

int main(){
        int qtd_numeros=10, cont=1, posicao_maior=1, quant_posicao_maior = 0;
        int* numeros = new int[qtd_numeros];

        for (int i = 0; i < qtd_numeros; ++i) {
                numeros[i] = rand()%100;
        }

        for (int i = 0; i < qtd_numeros; ++i) {
                for (int j = i+1; j < qtd_numeros; ++j) {
                        if (numeros[i]==numeros[j]) {
                                cont++;
                        }

                        if (cont>posicao_maior) {
                                posicao_maior = numeros[i];
                                quant_posicao_maior = cont;
                        }

                }

        }

        std::cout << posicao_maior << " teve " << quant_posicao_maior << " repetições" << '\n';
        delete[] numeros;
        return 0;
}
