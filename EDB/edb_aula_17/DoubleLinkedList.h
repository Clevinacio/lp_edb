#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H
#include <iostream>

template<typename Item>
struct Node
{
    Node();
    Item info;
    
    Node<Item> *next;
    Node<Item> *prev;
};

template<typename Item>
class DoubleLinkedList
{
private:
    Node<Item>* head_;
    Node<Item>* last_;

public:
    DoubleLinkedList();
    void push_back(Item item);
    void push_front(Item item);
    void insert(Item item, size_t posititon);
    bool empty();

    Item pop_back();
    Item pop_front();
    Item remove(size_t posititon);

    Item& front();
    Item& back();
    size_t size();
    Node<Item>* search(Item i);
    void invert();
    void traverse(void(*callback)(Item&));
    void traverseReverse(void (*callback)(Item&));

}; 
#endif // !DOUBLE_LINKED_LIST_H


template<typename Item>
Node<Item>::Node(){}

template<typename Item>
void DoubleLinkedList<Item>::push_back(Item item){
    Node<Item> *new_node      = new Node<Item>();
    new_node->info = item;

    if (head_==nullptr&&last_==nullptr){
        head_ = new_node;
        last_ = new_node;
        return;
    }
    
    last_->next    = new_node;
    new_node->prev = last_;
    last_ = new_node;

}

template<typename Item>
void DoubleLinkedList<Item>::push_front(Item item){
    Node<Item> *new_node = new Node<Item>();
    new_node->info = item;
    
    if (head_==nullptr&&last_==nullptr){
        head_ = new_node;
        last_ = new_node;
        return;
    }

    head_->prev    = new_node;
    new_node->next = head_;
    head_          = new_node;
    

}

template<typename Item>
void DoubleLinkedList<Item>::insert(Item item, size_t posititon){

}

template<typename Item>
bool DoubleLinkedList<Item>::empty(){
    Node<Item>* current  = head_;
    Node<Item>* previous = last_;

    return current== nullptr&&previous== nullptr;
}

template<typename Item>
Item DoubleLinkedList<Item>::pop_back(){

}

template<typename Item>
Item DoubleLinkedList<Item>::pop_front(){

}

template<typename Item>
Item DoubleLinkedList<Item>::remove(size_t posititon){

}

template<typename Item>
Item& DoubleLinkedList<Item>::front(){

}

template<typename Item>
Item& DoubleLinkedList<Item>::back(){

}

template<typename Item>
size_t DoubleLinkedList<Item>::size(){

}

template<typename Item>
Node<Item>* DoubleLinkedList<Item>::search(Item i){

}

template<typename Item>
void DoubleLinkedList<Item>::invert(){

}

template<typename Item>
void DoubleLinkedList<Item>::traverse(void(*callback)(Item&)){

}

template<typename Item>
void DoubleLinkedList<Item>::traverseReverse(void (*callback)(Item&)){

}