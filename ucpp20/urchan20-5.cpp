#include <iostream>
#include <cstdint>
#include <new>

int main(){
    while(true){
        double* a = new double[0xfffffffff];
        std::cout << "allocated = " << a << std::endl;

        if(a == nullptr){
            std::cout << "failed to allocate" << std::endl;
            return -1;
        }
    }
}