#include <iostream>

inline int max(int a, int b){//inlineはコンパイラに任せた方がよい
    return a > b ? a: b;
}
int main(){
    std::cout << max(1,2) << std::endl;
}