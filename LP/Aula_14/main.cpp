#include <iostream>
#include <string>

template<typename Tipo>
void sort(Tipo* array, int n){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            Tipo primeiro_numero = array[i];
            Tipo segundo_numero  = array[j];

            if(primeiro_numero > segundo_numero){
                array[i] = segundo_numero;
                array[j] = primeiro_numero;
            }
        }
        
    }
    
}

struct Pessoa{};


int main(int argc, char const *argv[]){
    int    qtd_itens = 10000;

    
    return 0;
}
