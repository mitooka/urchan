#include <iostream>
#include <array>
#include <stdint.h>
/*
void reverse(int* a[], int n){
    for(int i = 0; i<n/2; ++i){
        std::swap(a[i], a[N-i-1]);
    }
}*/

template <size_t N>
void reverse2(std::array<int, N>& a){
    for(int i = 0; i<N/2; ++i){
        std::swap(a[i], a[N-i-1]);
    }
}

int main(){
    constexpr int N = 5;
    std::array<int, N> c = {3,5,7,10,2};
    reverse2(c);
    for(int i = 0; i<N; ++i){
        std::cout << c[i] << std::endl;
    }
}