#include <iostream>
#include <string>
class Cidade{
    public:
    std::string nome;
    float distancia;

};

class Veiculo{
    private:
        std::string nome;
    public:
        float autonomia(){
            return 12;
        }
        float gasolinaPara(const Cidade& cidade){
            return cidade.distancia/ autonomia();
        }
        float valorPara(const Cidade& cidade, float valorDoLitro){
            return valorDoLitro * gasolinaPara(cidade);
        }
};

class Carro: public Veiculo{
     public:
        float autonomia(){
            return 12;
        }
};

class Moto: public Veiculo{
     public:
        float autonomia(){
            return 35;
        }
};

class Caminhao: public Veiculo{
     public:
        float autonomia(){
            return 4;
        }
};

void printInfo( Veiculo& veiculo,  Cidade& cidade){
    float quantidadeNecessaria = veiculo.gasolinaPara(cidade);

    float valorNecessario = veiculo.valorPara(cidade, 4.99);

    std::cout << "A quantidade de combustível para ir de Natal até " << cidade.nome << 
    " é " << quantidadeNecessaria << " Litros" << '\n';
    std:: cout << "O valor para ir de Natal até " << cidade.nome << " é " << valorNecessario << '\n';
}

int main(){
    Cidade joaoPessoa;
    Cidade recife;

    joaoPessoa.nome = "João Pessoa";
    joaoPessoa.distancia = 200;

    recife.nome = "Recife";
    recife.distancia = 290;

    Carro carro;

    printInfo(carro, joaoPessoa);
    printInfo(carro, recife);
    return 0;
}
