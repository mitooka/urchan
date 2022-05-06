#include <iostream>

int& ref(){//参照型
    static int x = 2;
    //ローカル変数は無理
    return x;
}

int main(){
    std::cout << ref() << std::endl;
    ref()/*lvalue*/ = 5;
    std::cout << ref() << std::endl; 
}
//キモイコード