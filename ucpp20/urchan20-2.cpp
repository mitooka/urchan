#include <iostream>
#include <new>
void f(){
    double* a = new double[10];
    std::cout << "allocated: " << std::hex << reinterpret_cast<unsigned long>(a) << std::endl;
    //危険な変換。ポインタ型をunsinged long型に変換する
    a = new double[10];
    std::cout << "allocated: " << std::hex << reinterpret_cast<unsigned long>(a) << std::endl;
}
int main(){
    f();
}