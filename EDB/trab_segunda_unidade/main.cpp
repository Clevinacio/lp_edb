#include <iostream>
#include <string>

#include "Deque.h"
#include "Stack.h"
#include "Queue.h"

int main(){
    DoubleLinkedList<int> *d1 = new DoubleLinkedList<int>();

    d1->push_back(1);
    d1->push_back(2);
    d1->push_back(3);
    d1->push_back(4);
    d1->invert();
    size_t t =  d1->size();
    for (size_t i = 0; i < t; i++)
    {
        if (d1->empty())
        {
            return 0;
        }
        int *front = d1->front();
        std::cout << *front << std::endl;    
        d1->pop_front();
    }
    
    
    
}

