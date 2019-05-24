#include <iostream>

#include "hashTable.h"
#include "Pessoa.h"

int main(){
    hashTable table(20);

    Pessoa* p = new Pessoa();
    p->nome = "Fulano";
    p->cpf = "13123123315";

    Pessoa* p2 = new Pessoa();
    p2->nome = "Cicrano";
    p2->cpf = "13123112314";

    Pessoa* p3 = new Pessoa();
    p3->nome = "Beltrano";
    p3->cpf = "13123223317";

    table.insert(p);
    table.insert(p2);
    table.insert(p3);

    Pessoa* pessoaptr = table.getByCpf("1312322331");

    if (pessoaptr){
        std::cout << pessoaptr->nome << std::endl;
    }

    return 0;
}