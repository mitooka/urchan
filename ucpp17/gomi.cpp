#include <iostream>
int main(){
    int a = 23, *pn = &a;
    std::cout << a << std::endl;
    std::cout << pn << std::endl;
    std::cout << *pn << std::endl;
    *pn = 200000;
    std::cout << *pn << std::endl;
}