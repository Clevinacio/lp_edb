#include <iostream>

int main(){
        int num=0,resto=0;
        std::cout << "Digite um número: ";
        std::cin >> num;
        while(num>0) {
                resto=num%10;
                std::cout << resto;
                num = num/10;
        }
        std::cout << '\n';

        return 0;
}
