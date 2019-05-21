#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>

#include "DoubleLinkedList.h"

template<typename Element>
class Deque{
    public: 
        Deque();
        void push_front(Element element);
        void push_back(Element element);
        void pop_back();
        void pop_front();
        void clear();
        Element& front();
        Element& back();
        std:: size_t size();
        bool empty();

    private: 
        DoubleLinkedList<Element> elements;

};

#endif // !DEQUE_H

template<typename Element>
Deque<Element>:: Deque(): elements(){}

template<typename Element>
void Deque<Element>::push_front(Element element){
    elements.push_front(element);
}

template<typename Element>
void Deque<Element>::push_back(Element element){
    elements.push_back(element);
}

template<typename Element>
void Deque<Element>::pop_back(){

    elements.pop_back();
}

template<typename Element>
void Deque<Element>::pop_front(){

    elements.pop_front();
}

template<typename Element>
void Deque<Element>::clear(){

    elements.clear();
}

template<typename Element>
Element& Deque<Element>::front(){
    return elements.front();
}

template<typename Element>
Element& Deque<Element>::back(){
    return elements.back();
}

template<typename Element>
std::size_t Deque<Element>::size(){
    return elements.size();
}

template<typename Element>
bool Deque<Element>::empty(){
    return elements.empty();
}