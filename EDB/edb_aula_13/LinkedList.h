#ifndef LINKED_LIST
#define LINKED_LIST

    struct Node{
    Node();

    float info;
    Node *next;
};

struct LinkedList{
    LinkedList();
    ~LinkedList();

    Node *head;
    Node* insert_back(int info);
    void insert_front(int info);
    int is_empty();
    int length();
    Node* search(int value);
    void remove(int value);
    void print();
};

#endif  // !LINKED_LIS  