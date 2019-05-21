#include <iostream>
#include <string>

int main(){
    int* (*a)(int, int);
    int[] (*b[])(int, int);
    void (*c)(void (*)(float, std::string), int);
}
