#include <iostream>
#include <cstdint>
#include <new>

int main(){
    while(true){
        //double* a = new double[0xffffffffffff];
        double* a = new(std::nothrow) double[0xffffffffffff];
        std::cout << "allocate = " << a << std::endl;//表示されない。
    }
}