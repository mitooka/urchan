#include <iostream>
//意味のある戻り値はポインタで渡されることが多い
//配列とポインタ
//原則として配列名はその配列の先頭要素へのポインタとして解釈される

int main(){
    int arr[3];
    std::cout << "arr: " << arr << std::endl;
    std::cout << "&arr[0]: "<< &arr[0] << std::endl;
    std::cout << std::endl;
    std::cout << "typeid(arr): " << typeid(arr).name() << std::endl;
    std::cout << "typeid(&srr[0])" << typeid(&arr[0]).name() << std::endl;
}