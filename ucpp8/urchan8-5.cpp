#include <iostream>//型変換の話
int main(){
    int x,y;
    std::cout << "2つの整数の平均値を求めます:";
    std::cin >> x >> y;

    double ave = /*static_cast<double>*/(x+y)/2;//明示的型変換
    std::cout << "average = " << ave << std::endl;
}//int /int = int となる 
// double/int  = int
// dynamic_cast<type>(expr) クラスの継承  親クラスのポインタを子クラスのポインタに変換するとき
// static_cast<type>(expr) 整数、数値などの当たり前な型変換
// reinterpret_cast<type>(expr)危ない変換
// const_cast<type>(expr)変更不能なものを変換する