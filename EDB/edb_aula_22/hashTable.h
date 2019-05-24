#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include <string>

#include "Pessoa.h"

class hashTable
{
private:
    unsigned int size_;
    Pessoa** pessoas_;
public:
    hashTable(unsigned int size);
    ~hashTable();
    unsigned int hash(std::string cpf);
    void insert(Pessoa* p);
    void remove(std::string cpf);
    Pessoa* getByCpf(std::string cpf);
};



#endif // !HASH_TABLE_H