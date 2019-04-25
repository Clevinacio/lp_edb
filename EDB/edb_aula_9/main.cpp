#include <iostream>
#include <cstdio>

void mergeSort(int *numeros, int inicio, int fim);
void merge(int* numeros, int inicio, int meio, int fim);
int main(){
    int qtd_numeros = 10;
    int *numeros = new int[qtd_numeros];
    
    for (int i = 0; i < qtd_numeros; ++i){
        numeros[i] = rand() % 100;
    }

    mergeSort(numeros, 0, qtd_numeros-1);

    for(int i = 0; i < qtd_numeros; ++i){
        std::cout << numeros[i] << std::endl;
    }
    

    delete[] numeros;
    return 0;
}

void mergeSort(int* numeros, int inicio, int fim){
    if (inicio < fim) {
        int meio = inicio + (fim-inicio)/2;
        mergeSort(numeros, inicio, meio);
        mergeSort(numeros, meio+1,fim);
        merge(numeros, inicio, meio, fim);
    
    }

}

void merge(int *numeros, int inicio, int meio, int fim){
    int tamanho_esquerda = (meio - inicio) +1;
    int tamanho_direita = fim - meio;

    int* esquerda = new int[tamanho_esquerda];
    int* direita = new int [tamanho_direita];

    for(int i = 0; i < tamanho_esquerda; ++i){
        esquerda[i] = numeros[inicio+i]; 
    }

    for(int i = 0; i < tamanho_direita; ++i){
        direita[i] = numeros[meio+1+i];
    }

    int e = 0,
        d = 0,
        i = inicio;

    while(e< tamanho_esquerda && d < tamanho_direita){
        if(esquerda[e] <= direita[d]){
            numeros[i] = esquerda[e];
            e++;
        } else{
            numeros[i] = direita[d];
            d++;
        }
        i++;
    }

    while(e<tamanho_esquerda){
        numeros[i] = esquerda[e];
        e++;
        i++;
    }
    
    while(d < tamanho_direita){
        numeros[i] = direita[d];
        d++;
        i++;
    }
    

    delete[]esquerda;
    delete[]direita;    
    

}