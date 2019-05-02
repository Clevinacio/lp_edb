#include <iostream>
#include <cstdlib>
#include <time.h>
#include <queue>
#include <string>

#include "Cliente.h"
#include "Atendente.h"

int main(int argc, char const *argv[]){
    if (argc<3){
        std:: cout << "Uso:" << '\n';
        std:: cout << argv[0] << " <quantidade atendentes> <duração>" << '\n';
        return 0;
    }
    
    srand(time(nullptr));
    std:: queue<Cliente> fila;

    int qtd_atendentes = std::stoi(argv[1]);
    int duracao        = std::stoi(argv[2]);

    Atendente* atendentes = new Atendente[qtd_atendentes];
    
    int quantidade_clientes = 0,
        duracao_ociosidade  = 0,
        duracao_atendimento = 0,
        duracao_espera      = 0;

    for (int minuto = 0; minuto < duracao; minuto++){
        int probabilidade = 1 + (rand()%10);
        if (probabilidade <= 7){
            Cliente c;
            c.hora_chegada        = minuto;
            c.duracao_atendimento = 2 + (rand()%7);
            fila.push(c);
            quantidade_clientes++;
        }
        
        for (int i = 0; i < qtd_atendentes; ++i){
            if (atendentes[i].estaLivre()){
                if (fila.empty()){
                    duracao_ociosidade++;
                }else {
                    Cliente c = fila.front();
                    atendentes[i].setCliente(c);
                    fila.pop();
                    duracao_atendimento += c.duracao_atendimento;
                    duracao_espera      += minuto - c.hora_chegada;
                }   
            }   
        }
    }

    int quantidade_nao_atendidos = fila.size();
    int quantidade_atendidos     = quantidade_clientes-quantidade_nao_atendidos;

    while(!fila.empty()){
        Cliente c               = fila.front();
                duracao_espera += duracao - c.hora_chegada;
        fila.pop();
    }

    std:: cout << "=======================================" << '\n';
    std:: cout << "Clientes atendidos: " << quantidade_atendidos << '\n';
    std:: cout << "Clientes não antedidos: " << quantidade_nao_atendidos << '\n';
    std:: cout << "Tempo médio de espera: " << (duracao_espera/quantidade_clientes) << '\n';
    std:: cout << "Tempo médio de ociosidade: " << (duracao_ociosidade/qtd_atendentes) << '\n';
    std:: cout << "Tempo médio de duração de atendimento: " << (duracao_atendimento/quantidade_atendidos) << '\n';
    std:: cout << "=======================================" << '\n';

    return 0;
}
