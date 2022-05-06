#include <iostream>

int main(){
    double x,y; //倍精度浮動小数点数
    std::cout << "x";
    std::cin >>x;
    std::cout << "y";
    std::cin >> y;

    std::cout << "x= " << x <<std::endl;
    std::cout << "y= " << y << std::endl;
    std::cout << "x + y = " << (x+y) << std::endl;
    std::cout << "x-y =" <<(x-y)<<std::endl;
    std::cout << "x*y = " << (x+y)<<std::endl;
    std::cout << "x/y = " << (x/y)<< std::endl;
    //std::cout << "x%y = " << (x%y) << std::endl; %演算子は整数型のみ
    
    std::cout << "-x = " << (-x )<< std::endl;
    std::cout << "+y =" << (+y) << std::endl;
}