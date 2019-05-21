#ifndef DEBUG_H
#define DEBUG_H
#include <iostream>
#include <string>

#include "DoubleLinkedList.h"

template<typename T>
class Queue{
private:
    DoubleLinkedList<T> data;
public:
    Queue();
    void clear();
    bool empty();
    void push_back(T element);
    void pop_front();
    T peek();
    int size();
};
#endif // DEBUG

template<typename T>
Queue<T>::Queue(): data(){}

template<typename T>
void Queue<T>::clear(){

    data.clear();

}

template<typename T>
bool Queue<T>::empty(){
    return data.empty();
}

template<typename T>
void Queue<T>::push_back(T element){
    data.push_front(element);
}

template<typename T>
void Queue<T>::pop_front(){
    data.pop_back();
}

template<typename T>
T Queue<T>::peek(){
    return data.back();
}

template<typename T>
int Queue<T>::size(){
    return data.size();
}
