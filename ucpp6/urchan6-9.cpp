#include <iostream>//型の話
#include <limits>
#include <cstdint>
int main(){
    std::cout << "int8_t:"<< 
    //C++には符号なし整数型と符号付き整数型がある
    unsigned int z;//0,1,2,.... 符号なし整数型
    signed int y ; //.... -2,-1, 0, 1, 2,3 ... 符号あり整数型
    int x; //符号あり整数型
    //int; -32768,32767 規格では最低この数値が表現できることを保証されている
    //int; -21474836,2147483647 clang++の場合

    std::cout << "int:"<<std::numeric_limits<int>::min() < ',' << std::numeric_limits<int>::max() << std::endl;
}
//C++ではcharは特別視されている。