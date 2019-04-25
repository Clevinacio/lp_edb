#ifndef STACK_H
#define STACK_H 1

#include "vector.h"

struct stack
{
    vector data;
    void clear();
    bool empty();
    void push(int element);
    int pop();
    int top();
    int size();

};


#endif // !STACK_H