#include <iostream>

#include "vector.h"

int main(){
    vector v(10);

    for(int i = 0; i < 13; i++){
        v.insert(i,i);
    }

    v.insert(2,7);
    for (int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << '\n';
    }

    int apagado = v.erase(2);
    std::cout << '\n';
    
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << '\n';
    }
    std::cout << apagado << '\n';
    
    v.~vector();

    return 0;
}
