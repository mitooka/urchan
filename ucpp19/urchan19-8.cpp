#include <iostream>
#include <vector>
int main(){
    int* x = new int[5]{3, 5, 7, 9, 10};//動的記憶域期間 これは配列の先頭を指すポインタ
    // std::vector<int> x[2, 4, 6, 8, 10]

    std::cout << *x << std::endl;
    std::cout << x[1] << std::endl;
    std::cout << x[2] << std::endl;
    //std::cout << x[0] << std::endl;
    //std::cout << x[1] << std::endl;
    //std::cout << x[2] << std::endl;
    delete[] x;//配列用のdelete
    }