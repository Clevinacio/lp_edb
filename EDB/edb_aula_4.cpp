#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int  main(){
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        int qtd_numeros = 14000;
        int soma_desejada = 40;
        int* numeros = new int[qtd_numeros];
        for (int i = 0; i < qtd_numeros; ++i) {
                numeros[i] = rand() % 10;
        }

        for (int i = 0; i < qtd_numeros-1; ++i) {
                for (int j = i+1; j < qtd_numeros; j++) {
                        int primeiro_numero = numeros[i];
                        int segundo_numero = numeros[j];
                        if (segundo_numero<primeiro_numero) {
                                numeros[i] = segundo_numero;
                                numeros[j] = primeiro_numero;
                        }
                }
        }

        for (int i = 0; i < qtd_numeros; ++i) {
                int primeiro_numero = numeros[i];
                int inicio = i+1;
                int fim = qtd_numeros-1;
                while (inicio<fim) {
                        int segundo_numero = numeros[inicio];
                        int terceiro_numero = numeros[fim];
                        int soma = primeiro_numero + segundo_numero + terceiro_numero;

                        if (soma == soma_desejada) {
                                std::cout << "1" << '\n';
                                delete[] numeros;
                                return 0;
                        } else if(soma<soma_desejada) {
                                inicio +=1;
                        }else{
                                fim -=1;
                        }

                }
        }
        std::cout << "0" << '\n';
        delete[] numeros;

        cout << endl;

        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        float duracao = duration_cast<milliseconds>(t2 - t1).count();

        cout.precision(5);
        cout << fixed << "Tempo: " << duracao << endl;

        return 0;
}
