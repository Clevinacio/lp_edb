#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main(){
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        int qtd_numeros = 14000, valor_soma = 40;
        int* numeros = new int[qtd_numeros];
        for (int i = 0; i < qtd_numeros; ++i) {
                numeros[i]= rand() % 10;
        }
        for (int i = 0; i < qtd_numeros-2; i++) {
                for (int j =i+1; j < qtd_numeros-1; j++) {
                        for (int k = j+1; k < qtd_numeros; k++) {
                                int soma = numeros[i] +numeros[j] + numeros[k];
                                if (soma==valor_soma) {
                                        std::cout << "1" << '\n';
                                        delete[] numeros;
                                        return 0;
                                }
                        }
                }
        }
        std::cout << "0" << '\n';
        delete[] numeros;

        cout << endl;

        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        float duracao = duration_cast<seconds>(t2 - t1).count();

        cout.precision(5);
        cout << fixed << "Tempo: " << duracao << endl;

        return 0;

}
