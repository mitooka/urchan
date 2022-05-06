//配列のコピー
#include <iostream>
#include <random>
#include <array>
#include <algorithm>
int main(){
    std::random_device seed_gen;
    std::mt19937 engine{seed_gen()};
    std::uniform_int_distribution<> dist{0,99};

    std::array<int ,7> a1,a2;//配列ふたつ宣言
    for(int i=0;i <static_cast<int>(a1.size());++i){
        a1[i] = dist(engine);
        std::cout << "a1["<< i << "]=" << a1[i] << std::endl;
    }
    std::copy(a1.begin(),a1.end(),a2.begin());//指定された範囲の要素をコピーする。 copy(InputIterator first,InputIterator last, OutputIterator result);
    
    /*for(int i=0; i<static_cast<int>(a1.size());++i){
        a2[i] = a1[i];//ここでコピーする
    }*/
    for(int i=0; i<static_cast<int>(a1.size());++i){
        std::cout << "a2[" << i << "] = " <<a2[i] << std::endl;
    }
}
/* shallow copy メモリのアドレスがcopyされてもとの値を変えるとそれに連動してコピーした値も変化する */
/*  deep copy 新しいメモリのアドレスに値をコピーしていれるのでコピーされた値は変化しない */