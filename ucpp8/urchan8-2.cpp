#include <iostream>
#include <vector>
int main(){
    if(20){
        //非0 == 真
    }
    bool b{true};
    bool b2{false};
    bool b3 = 43;
    int i3 = b3;//boolの値が非0でそれをint型に直すと1になる
    //非0の値を代入するとTrueになる
    if(b3){
        std::cout << "b3は真" << std::endl;
        std::cout << i3 << std::endl;
        std::cout << std::boolalpha << b3 << std::endl;//std::boolalphaを用いるとTかFで出てくる
    }
    std::vector<int> array_of_int; //int型の動的配列
    std::vector<char> array_of_char;
    &array_of_char[0]; //配列の先頭のポインタがとれる
    std::vector<bool> array_of_bool;
    //&array_of_bool[0];//1ビットずつパッキングされてるからできない
    std::cout << sizeof(bool)<< std::endl;
    
}
