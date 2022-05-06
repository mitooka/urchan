#include <iostream>

constexpr int a_size = 5;
int& r(int idx){
    static int a[a_size];
    return a[idx];
}

int main(){

    for (int i = 0; i < a_size; ++i)
    {
        r(i) = i *2;
    }
    
    for(int i = 0; i<a_size; ++i) {
        std::cout << "r(" << i << ") = " << r(i) << std::endl;
    }
}