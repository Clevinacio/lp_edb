#include <iostream>
#include "contaBancaria.h"

int main(int argc, char const *argv[])
{
    contaBancaria minhaConta;
    minhaConta.nome = "Cleverton Inácio";
    minhaConta.agencia = "0000-0";
    minhaConta.conta = "12124-2";
    minhaConta.saldo = 2000;
    
    imprimeSaldo(minhaConta);
    saque(minhaConta, 300);
    imprimeSaldo(minhaConta);
    
    return 0;


    
}

