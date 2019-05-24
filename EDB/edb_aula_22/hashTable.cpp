#include <iostream>
#include <string>

#include "hashTable.h"
    
hashTable::hashTable(unsigned int size)
    : size_(size){
    pessoas_ = new Pessoa*[size_];
    for (unsigned int i = 0; i < size_; ++i)
    {
        pessoas_[i] = nullptr;
    }
    
}

hashTable::~hashTable(){
    for (unsigned int i = 0; i < size_; ++i)
    {
        delete pessoas_[i];
    }
}

unsigned int hashTable::hash(std::string cpf){
    return cpf[10]; 
}

void hashTable::insert(Pessoa* p){
    unsigned int index = hash(p->cpf);
    index = index % size_;

    unsigned int tmp = index;

    while (pessoas_[index] != nullptr)
    {
        index = (index+1) % size_;

    }
    

    if (index+1 == tmp){
        return;
    }
    
    pessoas_[index] = p;

}

void hashTable::remove(std::string cpf){
    unsigned int index = hash(cpf);
        index = index % size_;
    unsigned int tmp = index;

    while (pessoas_[index] != nullptr && index+1 !=tmp && cpf != pessoas_[index]->cpf){
        index = (index+1) % size_;
    }

    if (index+1==tmp){
        return;
    }
    
    delete pessoas_[index];
    pessoas_[index] = nullptr;

}

Pessoa* hashTable::getByCpf(std::string cpf){
    unsigned int index = hash(cpf);
        index = index % size_;
    unsigned int tmp = index;

    while (pessoas_[index] != nullptr && index+1 !=tmp && cpf != pessoas_[index]->cpf){
        index = (index+1) % size_;
    }

    if (index+1==tmp){
        return nullptr;
    }
    
    return pessoas_[index];
    
}