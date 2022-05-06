#include <iostream>
int main(){
    std::size_t s = 42;
    std::cout << "size_t型の大きさ:" << sizeof(size_t) <<std::endl; 
    std::cout << "size_tの名前" << typeid(size_t).name() << std::endl;

    std::cout << "sizeof(size_t)型の大きさ" << sizeof(sizeof(size_t)) << std::endl;
    std::cout << "sizeof(size_t)型の名前" << typeid(sizeof(size_t)).name() << std::endl;//コンパイラの中で使われている名前
}