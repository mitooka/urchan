#include <iostream>
#include <any> //voidポインタが使いたくなったらany使ってみて
int main(){
    int i = 42;
    int* pi = &i;
    void* pv = pi;
    uintptr_t addr = reinterpret_cast<uintptr_t>(pi);
    std::cout << "pi = " << pi<< std::endl;
    std::cout << "pv = " << pv << std::endl;

    //int* a = pv;
    int* a = reinterpret_cast<int*>(pv);//intポインタ型の変数をvoid型変数に初期化することはできませんよ
    //なんの型かわからないvoid型をint型にいれる場合intにキャストしてから入れる必要がある
    std::cout << "*a = " << *a << std::endl;
}/* void型の存在意義がわからない */