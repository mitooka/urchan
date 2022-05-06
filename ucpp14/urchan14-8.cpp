#include <iostream>

int* ref(){
    static int x = 2;
    return &x;
}

int main(){
    std::cout << *ref() << std::endl;
    *ref() = 5;
    std::cout << *ref() << std::endl;
}