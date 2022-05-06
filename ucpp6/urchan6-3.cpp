#include <iostream>

int main(){
    int arr[5]{1,3,6,9,3};

    //range based for 範囲for文
    for (int x : arr)//要素をint xに持ってくる
    {
        std::cout << x << std::endl;
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    
    
}