#include <iostream>
int main(){
    int base = -1;

    int a = ++base;
    int b = base++;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}