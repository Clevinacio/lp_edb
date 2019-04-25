struct vector{
    
    vector(int initial_quantity);
    ~vector();

    int* values;
    int quantity, array_size;

    int at(int index);
    void set(int index, int value);
    void insert(int index, int value);
    int erase(int index);
    int size();
    bool empty();

};
