#include <iostream>
#include <array>
int f(int& x){
    x = x +1;
    return 0;
}

int main(){
    int a = 42;
    f(a);//参照渡し 変数の箱自体を渡している これは結局ポインタでしょ
    std::cout << a << std::endl;
}