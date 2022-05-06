#include <iostream>
#include <limits>
#include <cstdint>

int main(){
    char c;
    std::cin >> c;
    std::cout << int(c) << " " << std::hex << int(c) << " " << c << std::endl;   
    //内部的にint型で管理されている。
}