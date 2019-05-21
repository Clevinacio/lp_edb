#include <iostream>
#include <string>

#include "Deque.h"

int main(){
    Deque<int> *new_deque = new Deque<int>();
    
    std:: cout << new_deque->empty() << std:: endl << std:: endl;
    
    new_deque->push_front(1);
    new_deque->push_back(2);
    new_deque->push_back(3);

    std::cout << new_deque->empty() << '\n';
    std:: cout << new_deque->size() << std:: endl;
    std:: cout << new_deque->front() << std:: endl;
    std:: cout << new_deque->back() << std:: endl << '\n';

    new_deque->pop_front();

    std:: cout << new_deque->size() << std:: endl;
    std:: cout << new_deque->back() << std:: endl;
    std:: cout << new_deque->front() << std:: endl << '\n';
    
    new_deque->push_front(1);
    
    new_deque->pop_back();

    std:: cout << new_deque->size() << std:: endl;
    std:: cout << new_deque->back() << std:: endl;
    std:: cout << new_deque->front() << std:: endl << '\n';

    new_deque->clear();

    std::cout << new_deque->empty() << std:: endl;
    std:: cout << new_deque->size() << std:: endl;

    //Queue<int> *new_queue = new Queue<int>();
    /*
    std:: cout << new_queue->empty() << std:: endl << std:: endl;
    
    new_queue->push_back(1);
    new_queue->push_back(2);
    new_queue->push_back(3);

    std::cout << new_queue->empty() << '\n';
    std:: cout << new_queue->size() << std:: endl;
    std:: cout << new_queue->peek() << std:: endl << '\n';

    new_queue->pop_front();

    std:: cout << new_queue->size() << std:: endl;
    std:: cout << new_queue->peek() << std:: endl << '\n';
    
    new_queue->clear();

    std::cout << new_queue->empty() << std:: endl;
    std:: cout << new_queue->size() << std:: endl;
    
    Stack<int> *new_stack = new Stack<int>();
    std:: cout << new_stack->empty() << std:: endl << '\n';

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
    */
    return 0;
}

