#include <iostream>
#include <array>
#include <iomanip>
#include <typeinfo>
//多次元配列

int main(){
    std::array<std::array<int ,4>,3>arr;



/* 
 *  ------------------------------------------->x
 *  | {int, int, int},
 *  | {int, int, int},
 *  |
 *  y
 */


for(std::size_t y=0; y<arr.size(); ++y){
    for(std::size_t x=0; x<arr[y].size(); ++x){
        arr[y][x]=10*y+x;
            // ↑この内側から先に回す。
            //外側の添え字を先に変化するととびとびになってプログラムとして遅くなる。 
    }
    
}
for(std::size_t y=0; y<arr.size(); ++y){
    std::cout << "arr["<< y << "]:";
    for(std::size_t x=0; x<arr[y].size(); ++x){
        std::cout <<' '<< std::setw(2) << arr[y][x] <<' ';
    }
    std::cout << std::endl;
    
}

std::cout << typeid(arr).name() << std::endl;
std::cout << typeid(arr[0]).name() << std::endl;
std::cout << typeid(arr[0][0]).name() << std::endl;

std::array<double, 2> darr;
std::cout << typeid(darr).name() <<std::endl;//あくまでもデバック用の機能らしい
std::cout << typeid(darr[0]).name() << std::endl;//型を返すこの場合d

double d[4];
std::cout << typeid(d).name() << std::endl;//A4_d 二個のdoubleを持つarray
std::cout << typeid(d[0]).name() << std::endl;

}