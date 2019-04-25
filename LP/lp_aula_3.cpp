#include <iostream>
#include <string>

int pedir_inteiro(std::string mensagem);
int quadrado_numero(int numero);
int soma_numeros(int numero,int numero2);
int multi_numeros(int numero,int numero2);
int div_numeros(int numero,int numero2);
int subtracao_numeros(int numero,int numero2);

int main() {

        int numero = pedir_inteiro("Digite um número: ");
        int numero2 = pedir_inteiro("Digite outro número: ");

        std::cout << "A soma é " << soma_numeros(numero, numero2) << '\n';
        std::cout << "A subtração é " << subtracao_numeros(numero, numero2) << '\n';
        std::cout << "A multiplicação é " << multi_numeros(numero, numero2) << '\n';
        std::cout << "A divisão é " << div_numeros(numero, numero2) << '\n';

        return 0;

}

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
