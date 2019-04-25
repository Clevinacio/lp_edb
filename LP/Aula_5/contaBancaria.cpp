#include "contaBancaria.h"
#include <iostream>
#include <string>

void saque(contaBancaria& conta, int valor){
    if (valor>conta.saldo) {
        return;
    }
    conta.saldo -= valor;
    
}

void deposito(contaBancaria& conta, int valor){
    conta.saldo += valor;
    
}

void transferencia(contaBancaria& origem, contaBancaria& destino, int valor){
    if (valor>origem.saldo) {
        return;
    } 
    saque(origem,valor);
    deposito(destino, valor);
}

void imprimeSaldo(contaBancaria& conta){
    std::cout << "#################" << std::endl;
    std::cout << "AG: " << conta.agencia << " CC: " << conta.conta << std::endl;
    std::cout << "Saldo: R$" << conta.saldo << std::endl;
    std::cout << "#################" << std::endl;
    

}