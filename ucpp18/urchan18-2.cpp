#include <iostream>
#include <stdint.h>
int main(){
    int array[10] = {1,2,3,4,5,6};
    int* p = &array[0];

    std::cout << (uintptr_t)(p - 2)<< std::endl;//アドレスとしては8移動鶴。int型なので
    std::cout << (uintptr_t)(p + 2) << std::endl;
    std::cout << (uintptr_t)(p + 1) << std::endl;
    for(int i = 0; i < 10;++i){
        std::cout << *(p + i) << std::endl;
    }
}   