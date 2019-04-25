#include <iostream>
#include <string>
struct contaBancaria
{
    std::string nome;
    std::string agencia;
    std::string conta;
    int saldo;
};

void saque(contaBancaria& conta, int valor);
void deposito(contaBancaria& conta, int valor);
void transferencia(contaBancaria& origem, contaBancaria& destino, int valor);
void imprimeSaldo(contaBancaria& conta);

