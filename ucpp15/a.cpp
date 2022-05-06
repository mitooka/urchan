#include <iostream>
int main(){
    int n = 0;
    int* np = &n;
    *np = 1333;
    std::cout << n << std::endl;
}/* ポンタについてのやつ */