#include <iostream>
#include <array>

int f(int x){
    x = x +1;
    return 0;
}
int main(){
    int a = 42;
    f(a);//変数の値がfにコピーされる。値渡し
    std::cout << a << std::endl;
}
