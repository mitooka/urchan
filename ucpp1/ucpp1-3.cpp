#include <iostream>

int main(){
    int x,y;
    std::cout << "x";
    std::cin >> x;/* 抽出子 extractor */
    std::cout << "y";
    std::cin >>y; /* 変数の型に応じて変換してくれる */
//2項演算子
    std::cout << "x= " << x <<std::endl;
    std::cout << "y= " << y << std::endl;
    std::cout << "x + y = " << (x+y) << std::endl;
    std::cout << "x-y =" <<(x-y)<<std::endl;
    std::cout << "x*y = " << (x+y)<<std::endl;
    std::cout << "x/y = " << (x/y)<< std::endl;
    std::cout << "x%y = " << (x%y) << std::endl;
    
    //単項演算子
    std::cout << "-x = " << (-x )<< std::endl;
    std::cout << "+y =" << (+y) << std::endl;
}