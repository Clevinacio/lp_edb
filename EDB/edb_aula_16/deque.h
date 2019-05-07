#ifndef DEQUE_H
#define DEQUE_H

#include <vector>
#include <iostream>

template<typename Element>
class Deque{
    public: 
        Deque();
        void insertFront(Element element);
        void insertBack(Element element);
        void popBack();
        void popFront();
        Element& front();
        Element& back();
        std:: size_t size();
        bool empty();

    private: 
        size_t qtty;
        std:: vector<Element> elements;

};

template<typename Element>
Deque<Element>:: Deque(): qtty(0), elements(){}

template<typename Element>
void Deque<Element>::insertFront(Element element){
    qtty++;
    elements.insert(elements.begin(), element);
}

template<typename Element>
void Deque<Element>::insertBack(Element element){
    qtty++;
    elements.push_back(element);
}

template<typename Element>
void Deque<Element>::popBack(){
    if (empty()){
        return;
    }

    elements.pop_back();
    qtty--;
}

template<typename Element>
void Deque<Element>::popFront(){
    if (empty()){
        return;
    }
    
    elements.erase(0);
    qtty--;
}

template<typename Element>
Element& Deque<Element>::front(){
    elements.front();
}

template<typename Element>
Element& Deque<Element>::back(){
    elements.back();
}

template<typename Element>
std::size_t Deque<Element>::size(){
    return qtty;
}

template<typename Element>
bool Deque<Element>::empty(){
    return size() == 0;
}
#endif // !DEQUE_H