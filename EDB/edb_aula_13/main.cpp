#include <iostream>
#include "LinkedList.h"
int main(){
    LinkedList list;
    list.insert_front(20);
    list.insert_front(30);
    list.insert_front(40);
    list.insert_front(50);

    std:: cout << list.length() << '\n';
    std:: cout << list.is_empty() << '\n';
    Node *result = list.search(50);
    if (result==nullptr)
    {
        std:: cout << "Sem resultado" << '\n';
    }
    //list.print();
    return 0;
}
