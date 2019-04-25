#include <iostream>

#include "vector.h"

// RAII
vector::vector(int initial_quantity){
    values      = new int[initial_quantity];
    array_size  = initial_quantity;
    quantity    = 0;
}

vector::~vector(){
    delete[] values;
}

int vector::at(int index){
    return values[index];
}

void vector::set(int index, int value){
    values[index] = value;
}

void vector::insert(int index, int value){
    if (array_size==quantity) {
        int * new_array = new int[array_size+(array_size/2)];
        for(int i = 0; i < array_size; i++){
            new_array[i] = values[i];
        }

        delete[] values;
        values = new_array;
        array_size += array_size/2;

        for(int i = quantity; i >= index; i--){
            values[i+1] = values[i];
        }
    }
    for (int i = quantity; i > index; i--){
        values[i] = values[i-1];
    }
    
    values[index] = value;
    quantity += 1;
    
}

int vector::erase(int index){
    int deleted_element = values[index];

    for(int i = index; i < array_size-1; i++){
        values[i] = values[i+1];
        values[i+1] = 0;
    }
    quantity -=1;

    return deleted_element;
}

int vector::size(){
    return quantity;
}

bool vector::empty(){
    return quantity == 0;
}