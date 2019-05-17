#ifndef STACK_H
#define STACK_H 1

#include "vector.h"
template<typename Item>
class stack
{
    private:
    vector<Item> data;

    public:
   
    void clear();
    bool empty();
    void push(Item element);
    int pop();
    int top();
    int size();
};

#endif // !STACK_H

