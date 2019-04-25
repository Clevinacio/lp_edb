#include <iostream>

int main(){
    int qtd_numeros = 10, aux = 0;
    int* numeros = new int[qtd_numeros];
    for(int i = 0; i < qtd_numeros-1; ++i){
        numeros[i] = rand() %100;
        
    }
    
    for(int i = 0; i <= qtd_numeros-2; ++i){
        for(int j = i+1; j < qtd_numeros-i-1; ++j){
            if (numeros[i]>numeros[j]) {
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
            
        }
        std::cout << numeros[i]<< std::endl;    
    }
    

    delete[] numeros;
    return 0;

}