#include <iostream>
#include <string>
int main(){
        int numero=0, cont=0;

        std::cout << "Digite um número: ";
        std::cin >> numero;

        for (int i = 1; i <= numero; ++i) {
                for(int j = 1; j <= i; ++j){
                        if (i%j==0) {
                                cont++;
                        }
                }
                if (cont==2) {
                        std::cout << i << ' ';
                        
                }
                cont=0;

        }
        std::cout << '\n';

        return 0;
}
