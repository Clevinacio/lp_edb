#include <iostream>
#include <cstdio>

void quickSort(int* numeros, int inicio, int fim);
int particiona(int* numeros, int inicio, int fim);

int main(){
    int qtd_numeros = 10000;
    int* numeros = new int[qtd_numeros];

    for(int i = 0; i < qtd_numeros; ++i){
        numeros[i] = rand();
    }

    quickSort(numeros, 0, qtd_numeros-1);
    

    return 0;
}

void quickSort(int* numeros, int inicio, int fim){
    if(inicio<fim){
        int posicao_pivo = particiona(numeros, inicio, fim);
        quickSort(numeros, inicio, posicao_pivo-1);
        quickSort(numeros, posicao_pivo+1, fim);
    }
}

int particiona(int* numeros, int inicio, int fim){
    return fim;
}