#include <iostream>
int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    void* p  = &arr[5];
    //std::cout << *p << std::endl;//ここでは指し示す先がvoidだから何型かわからないからエラー
    std::cout << *((int*)p + 2) << std::endl;//指し示す先をcastする
    std::cout << *((int*)p + 2) << std::endl;
    std::cout << *((int*)p - 2) << std::endl;


}