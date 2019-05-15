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
    std:: cout << l1->back() << '\n';
    std:: cout << l1->size() << '\n' << '\n';

    l1->insert(20, 5);

    std::cout << l1->size() << '\n';
    std::cout << l1->back() << '\n';
    std::cout << l1->search(17) << '\n' << '\n';

    l1->remove(2);

    std:: cout << l1->size() << '\n';
    std:: cout << l1->search(20) << '\n' << '\n';

    l1->pop_back();
    l1->pop_front();

    std:: cout << l1->front() << '\n';
    std::cout << l1->back() << '\n' << '\n';

    l1->invert();

    std:: cout << l1->front() << '\n';
    std::cout << l1->back() << '\n' << '\n';
    return 0;
}
