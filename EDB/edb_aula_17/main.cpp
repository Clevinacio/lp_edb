#include <iostream>
#include <string>

#include "DoubleLinkedList.h"

int main(){
    DoubleLinkedList<int> *l1 = new DoubleLinkedList<int>();

    std::cout << l1->empty() << '\n' << '\n';
    
    l1->push_front(5);
    l1->push_front(15);
    l1->push_back(3);
    l1->push_back(17);
    l1->push_back(14);

    std:: cout << l1->front() << '\n';
    
    std::cout << l1->size() << '\n';

    std::cout << l1->remove(15) << '\n';
    std:: cout << l1->back() << '\n';
    std::cout << l1->size() << '\n';
    return 0;
}
