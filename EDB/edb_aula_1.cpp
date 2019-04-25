#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main(){
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        int qtd_numeros = 1000;
        int* numeros= new int[qtd_numeros];

        for (size_t i = 0; i < qtd_numeros; ++i){
                numeros[i] = rand();
        }
        
        for (int i = 0; i < qtd_numeros-1; ++i) {
                int primeiro_numero = numeros[i]; // salva o valor lido na primeira variável para comparação

                for (int j = i; j < qtd_numeros; ++j) {
                        primeiro_numero = numeros[i]; //salva novamente para que o valor não se perca
                        int segundo_numero=numeros[j]; //salva os próximos valores lidos no segundo for para comparar

                        if (segundo_numero<primeiro_numero) { //compara o valor lido em j com i, no caso de j>i,
                                                              //então os valores são trocados
                                numeros[i] = segundo_numero;
                                numeros[j] = primeiro_numero;
                        }
                }
        }
        for (int i = 0; i < qtd_numeros; ++i) {
                std::cout << numeros[i] << '\n'; //imprime o array ordenado
        }
        cout << endl;

        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        float duracao = duration_cast<milliseconds>(t2-t1).count();

        cout.precision(100);
        cout << fixed << "Tempo: " << duracao << endl;
}
