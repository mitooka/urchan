#include <iostream>
/* 挿入演算子の一括 */
int main(){
    int x,y;
    std::cout << "x,y";
    std::cin >> x >> y;

    std::cout << "x= " << x <<std::endl;
    std::cout << "y= " << y << std::endl;
    std::cout << "x + y = " << (x+y) << std::endl;
    std::cout << "x-y =" <<(x-y)<<std::endl;
    std::cout << "x*y = " << (x+y)<<std::endl;
    std::cout << "x/y = " << (x/y)<< std::endl;
    std::cout << "x%y = " << (x%y) << std::endl;
    
    std::cout << "-x = " << (-x )<< std::endl;
    std::cout << "+y =" << (+y) << std::endl;
}