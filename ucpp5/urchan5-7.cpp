#include <iostream>

int main(){//文字にいろをつけましょう
    for (int color = 0; color <= 7; ++color)
    {
        std::cout << "\x1b[" << (30 + color) << "mABCDせFG" << std::endl;
    }
    
    std::cout << "\x1b[31mHOGE" << std::endl;
    std::cout << "\x1b[0mf00" << std::endl;
    std::cout << "\x1b[32mA0" << std::endl;//アンシエスケープコード
}