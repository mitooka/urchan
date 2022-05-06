#include <iostream>
const double kpi = 3.1415; /*定数を表現するときにつかう 途中で値は書き換えられない  */
int main(){
    double r; //倍精度浮動小数点数
    std::cout << "r";
    std::cin >>r;

    std::cout << "円周 =" << (2*kpi*r) <<std::endl;
    std::cout << "円の面積" << (r*r*kpi) << std::endl;
}