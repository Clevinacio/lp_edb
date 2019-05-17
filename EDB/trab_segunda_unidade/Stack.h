#ifndef STACK_H
#define STACK_H 1
#include <iostream>

#include "DoubleLinkedList.h"
template<typename T>
class Stack
{
    private:
    DoubleLinkedList<T> data;

    public:
    Stack();
    void clear();
    bool empty();
    void push(T element);
    T& pop();
    T& top();
    int size();
};

#endif // !STACK_H

template<typename T>
Stack<T>::Stack(): data(){}

template<typename T>
void Stack<T>::clear(){
    if (empty())
    {
        return;
    }

    data.clear();
    
}

template<typename T>
bool Stack<T>::empty(){
    return data.empty();
}

template<typename T>
void Stack<T>::push(T element){
    data.push_front(element);
}

template<typename T>
T& Stack<T>::pop(){
    data.pop_front();
    return data.front();
}

template<typename T>
T& Stack<T>::top(){
    if (empty())
    {
        throw std::runtime_error("Vazio");
    }
    
    return data.front();
}

template<typename T>
int Stack<T>::size(){
    return data.size();
}