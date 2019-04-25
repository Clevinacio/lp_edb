#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
        int qtd_numeros = 200000;
        int* numeros = new int[qtd_numeros];

        for (size_t i = 0; i < qtd_numeros; ++i) {
                numeros[i] = rand();

        }//3+3*n

        for (size_t i = 0; i < qtd_numeros-1; ++i) {
                for (size_t j = 0; j < qtd_numeros; ++j) {
                        int primeiro_numero = numeros[i]; //salva novamente para que o valor não se perca
                        int segundo_numero=numeros[j]; //salva os próximos valores lidos no segundo for para comparar

                        if (segundo_numero>primeiro_numero) { //compara o valor lido em j com i, no caso de j>i,
                                                              //então os valores são trocados
                                numeros[i] = segundo_numero;
                                numeros[j] = primeiro_numero;
                        }
                }
        }//1 + 3(n-1) + 1 + 7n

        for (int i = 0; i < qtd_numeros; ++i) {
                std::cout << numeros[i] << '\n'; //imprime o array ordenado
        }
        delete[] numeros;

        return 0;
        //1+3n+1
}
