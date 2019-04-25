#include <iostream>
#include <cstdio>

void insertionSort(int* numeros, int n);

int main(){
        int qtd_numeros = 20;
        int* numeros = new int[qtd_numeros];
        for(int i = 0; i < qtd_numeros; ++i){
            numeros[i] = rand() % 10;

        }
        
        insertionSort(numeros,qtd_numeros);

        for(int i = 0; i < qtd_numeros; ++i){
            std::cout << numeros[i] << std::endl;
        
        }

    delete[] numeros;
    return 0;
}

void insertionSort(int* numeros, int n){
    for(int i = 1; i < n; i++){
        int j = i-1;
        int valor = numeros[i];

        while (j >= 0 && valor < numeros[i]){
            numeros[j+1] = numeros[i];
            j -= 1;
        
        }
        numeros[j+1] = valor;
    }

    
    
    
}