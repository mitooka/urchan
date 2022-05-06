#include <iostream>
#include <array>
#include <stdint.h>
//関数の何とか配列
//void reverse(int a[], int n)　もともとポインタとして実装されていて配列のように見せかけているだけ
void reverse(int* a,int n){
    //int n = sizeof[a]/sizeof(a[0]);これだとaはポインタだからどうやっても8になる
    for(int i =0; i< n/2; ++i){
        std::swap(a[i],a[n-i-1]);
    }
}
int main(){
    constexpr int N = 5;
    int c[N] = {3, 5, 7, 10, 2};
    reverse(c,N);
    for(int i = 0; i < N; ++i){
        std::cout << c[i] << std::endl;
    }
}