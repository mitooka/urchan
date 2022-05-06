#include <iostream>
#include <new>
#include <cstdint>
void f(){
    double* a = new double[10];
    std::cout << "allocated: " << std::hex << reinterpret_cast<std::uintptr_t>(a) << std::endl;
    //危険な変換。ポインタ型をunsinged long型に変換する
    a = new double[10];
    std::uintptr_t addr = reinterpret_cast<std::uintptr_t>(a);
    std::cout << "allocated: " << std::hex << addr  << std::endl;
    double* b = reinterpret_cast<double*>(addr);

    std::cout << (a == b) << std::endl;
}
int main(){
    f();
}
