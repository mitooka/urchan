#include <iostream>
#include "head.hpp"
int max(int a,int b){
    return a > b? a:b;
}
int main(){
    std::cout << max(1,2) << std::endl;
}