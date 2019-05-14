#include <iostream>
#include <string>

#include "DoubleLinkedList.h"

int main(){
    DoubleLinkedList<int> *l1 = new DoubleLinkedList<int>();

    std::cout << l1->empty() << '\n' << '\n';
    
    l1->push_back(1);
    l1->push_front(5);
    l1->push_back(3);

    std:: cout << l1->front() << '\n';
    std:: cout << l1->back() << '\n';
    std::cout << l1->size() << '\n' << '\n';

    std:: cout << l1->empty() << '\n' << '\n';

    Node<int> *result = l1->search(10);

    std::cout << result->info << '\n' << '\n';

    std::cout << l1->pop_front() << '\n' << '\n';

    std:: cout << l1->front() << '\n';
    std:: cout << l1->back() << '\n';
    std::cout << l1->size() << '\n' << '\n';
    
    std::cout << l1->pop_back() << '\n' << '\n';
    
    std:: cout << l1->front() << '\n';
    std:: cout << l1->back() << '\n';
    std::cout << l1->size() << '\n';
    return 0;
}
