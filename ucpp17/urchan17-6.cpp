#include <iostream>
int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* p = &arr[5];
    std::cout << *p << std::endl;
    std::cout << *(p + 2) << std::endl;//ポインタが指す先を手動で動かす。
    std::cout << *(p - 2) <<std::endl;
    std::cout << std::endl;
    
    std::cout << arr[5] << std::endl;
    std::cout << arr[5 +2] << std::endl;
    std::cout << arr[5 - 2] << std::endl;

    std::cout << p[0] << std::endl;
    std::cout << p[2] << std::endl;
    std::cout << p[-2] << std::endl;
    std::cout << std::endl;

    int i = 3;
    std::cout << *(p + i)<< std::endl;
    std::cout << p[i] << std::endl;


    for(int i = 0; i<10; ++i){
        *p++ = 3*i;
    }
    for(int i = 0; i<10; ++i){
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl; 
    }
}