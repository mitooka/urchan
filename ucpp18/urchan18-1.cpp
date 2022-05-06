#include <iostream>
#include <stdint.h>
int main(){
    int array[10]  = {1,2,3,4,5,6,7,8};//該当する要素がない場合は0を
    int* p = &array[0];

    for(int i = 0; i< 10; ++i){
        std::cout << *(p+i) << ",";
    
    }
    std::cout << std::endl;
    for(int i = 0; i< 10; ++i){
        std::cout << p[i] << ",";
    }
    std::cout << std::endl;
    for(int i = 0; i< 10; ++i){
        std::cout << array[i] << ',';
    }
    std::cout << std::endl;
    
    std::cout << "アドレス" << (uintptr_t)(p -2) << std::endl;
    std::cout << "アドレス" << (uintptr_t)(p+2) << std::endl;
    }
/* 　*(p + i) はarray[0 + i]のエイリアス(別名)間接演算子は値を取るわけでわけではなく、値を指す
    *(p + i) = 42;間接演算子は値を指すから代入ができる。

    また、ポインタでできる演算は足し算か引き算。ポインタ+-整数はできる。ポインタが基準になる。
    ポインタ+ポインタももちろん不可能。ポインタからポインタ分後ろてのはできない。
1
2
3
4
5
6
7
8
0
0
 */

