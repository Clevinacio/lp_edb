#include <iostream>
#include <cmath>
#include <string>

int pedir_inteiro(std::string mensagem){
        int numero = 0;
        std::cout << mensagem;
        std::cin >> numero;
        return numero;
}

int soma_numeros(int numero,int numero2){
        return numero+numero2;
}
int subtracao_numeros(int numero,int numero2){
        return numero-numero2;
}
int multi_numeros(int numero,int numero2){
        return numero*numero2;
}
int div_numeros(int numero,int numero2){
        return numero/numero2;
}
int quadrado_numero(int numero){
        return numero*numero;
}
