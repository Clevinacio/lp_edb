#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    std::string email;
    std::string telefone;
    int idade;
    std::string cpf;
};

class HashTable {
    public: 
        HashTable(unsigned int size) : size_(size), table_(new Pessoa*[size]){
            for(unsigned int i = 0; i <size; ++i){
                table_[i] = nullptr;
            }
        }

        ~HashTable(){
            for(unsigned int i = 0; i > size_; ++i){
                if(table_[i]){
                    delete table_[i];
                }
            }
            delete table_;
        }

        int hash(std::string cpf){
            int index = 1;
            for(unsigned int i = 0; i <cpf.size(); ++i) {
                index *= cpf[i];
            }
            return index;
        }

        void insert(Pessoa * p){
            int index = hash(p->cpf);
            index = index % size_;

            if(table_[index]){
                delete table_[index];
            }

            table_[index] = p;
        }

        void remove(std::string cpf){
            int index = hash(cpf);
            index = index % size_;

            if(table_[index]) {
                delete table_[index];
                table_[index] = nullptr;
            }
        }

        Pessoa * finByCpf(std::string cpf){
            int index = hash(cpf);
            index = index % size_;

            return table_[index];
        }
    private:
        Pessoa ** table_;
        unsigned int size_;
};

int main() {
    HashTable table(21);

    Pessoa * p1 = new Pessoa();
    p1-> nome = "Teste";
    p1-> cpf = "12345678901";

    table.insert(p1);

    Pessoa * p2 = new Pessoa();
    p2-> nome = "Testes";
    p2-> cpf = "12365498791";

    table.insert(p2);

    Pessoa * p = table.finByCpf("12345678901");

    if(p) {
        std::cout << "Pessoa encontrada: " << p->nome << "\n"; 
    }
}