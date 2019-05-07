#include <iostream>
#include <string>

#include "deque.h"
int main(){

    Deque<int> d;

    d.insertBack(10);
    d.insertFront(20);
    
    d.front() = 30;
    d.back() = 40;

    std:: cout << d.front() << '\n';
    std:: cout << d.back() << '\n';
    
    Deque<std::string> d2;

    d2.insertBack("Aluno 1");
    d2.insertFront("Aluno 2");

    std:: cout << d2.front() << '\n';
    std:: cout << d2.back() << '\n';

    
    return 0;
}
