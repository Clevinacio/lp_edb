#include <iostream>
#include <string>

#include "Stack.h"

int main(){
    Stack<int> *new_stack = new Stack<int>();
    /*
    DoubleLinkedList<int> *new_list = new DoubleLinkedList<int>();
    
    std::cout << new_list->empty() << std::endl;
    
    new_list->push_front(1);
    new_list->push_back(2);
    new_list->push_back(3);

    std::cout << new_list->empty() << '\n' << std::endl;
    
    new_list->clear();

    std::cout << new_list->empty() << std::endl;
    */
    
    std::cout << new_stack->empty() << std::endl << '\n';

    new_stack->push(12);
    new_stack->push(10);
    new_stack->push(11);

    std:: cout << new_stack->empty() << std:: endl;
    std:: cout << new_stack->size() << std:: endl;
    std:: cout << new_stack->top() << std:: endl << '\n';

    new_stack->pop();

    std:: cout << new_stack->size() << std:: endl;
    std:: cout << new_stack->top() << std:: endl << '\n';
    
    new_stack->clear();

    std:: cout << new_stack->empty() << std:: endl;
    std:: cout << new_stack->size() << std:: endl;
    
    return 0;
}

