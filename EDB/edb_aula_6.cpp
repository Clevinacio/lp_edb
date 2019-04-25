#include <iostream>

void preencher_ordenado(int* array, int qtd);
int busca_binaria(int* array, int valor_desejado, int inicio, int fim);
int main(){
    int valor_desejado = 9999;
    int qtd_numeros = 100000;
    int* numeros = new int[qtd_numeros];
    preencher_ordenado(numeros, qtd_numeros);

    int resultado = busca_binaria(numeros, valor_desejado, 0, qtd_numeros-1);

    if (resultado ==0) {
        std::cout << "valor encontrado na posição" << resultado << std::endl;
    }


    

    delete[] numeros;
    return 0;
}

void preencher_ordenado(int* array, int qtd){
    for(int i = 0; i < qtd; ++i)
    {
        array[i] = i;
    }
    
}

int busca_binaria(int *array, int valor_desejado, int inicio, int fim){
    if (fim < inicio) {
        return -1;
    }
    int meio = inicio + (fim-inicio) / 2;

    if (array[meio] == valor_desejado) {
        return meio;
    }else if (array[meio] > valor_desejado) {
        fim = meio-1;
        return busca_binaria(array, valor_desejado, inicio, fim);
    }else{
        inicio = meio+1;
        return busca_binaria(array, valor_desejado, inicio, fim);
    }
    
    
    
    return 0;
}