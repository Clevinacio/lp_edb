#include "LinkedList.h"
#include <iostream>

Node:: Node(): next(nullptr){
}

LinkedList:: LinkedList(): head(nullptr){
}

LinkedList:: ~LinkedList(){
    Node *current = head;

    while (current != nullptr){
        Node *tmp = current->next;
        delete current;
        current = tmp;
    }
}

Node* LinkedList:: insert_back(int info){
    Node *new_node      = new Node();
         new_node->info = info;

    if (head==nullptr){
        head = new_node;

        return new_node;
    }
    
    Node* current = head;

    while (current->next!=nullptr)
    {
        current = current->next;
    }

    current->next = new_node;

    return new_node;

}

int LinkedList:: is_empty(){
    Node *current = head;
    if (current==nullptr){
        return 1;
    }
    
    return 0;
}

int LinkedList:: length(){
    int  qtty     = 0;
    Node *current = head;

    while(current!=nullptr){
        Node *tmp    = current->next;
             current = tmp;
        qtty++;
    }

    return qtty;
}

Node *LinkedList:: search(int value){
    Node* current = head;
    while (current!=nullptr&&current->info!=value)
    {
        if (current==nullptr)
        {
            return nullptr;
        }
        
        Node *tmp    = current->next;
             current = tmp;
    }
    return current;
}

void LinkedList:: remove(int value){
    if (is_empty()){
        return;
    }


    if (head->info == value)
    {
        Node *tmp = head;
             head = head->next;
        delete tmp;
        return;
    }
    
    Node *previous = head;
    Node *current  = head->next;
    
    while (current!=nullptr&&current->info!=value)
    {
        previous = current;
        current  = current->next;
    }
    
    if (current!=nullptr)
    {
        previous->next = current->next;
        delete current;
    }
    
    
}

void LinkedList:: insert_front(int info){
    Node *new_node      = new Node();
         new_node->info = info;

    new_node->next = head;
    head           = new_node;

}

void LinkedList:: print(){
    LinkedList();
    for (Node *node = head; node != nullptr; node = node->next){
        std:: cout << node->info << '\n';
    }
}