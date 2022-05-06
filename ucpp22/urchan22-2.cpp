#include <iostream>

int main(){
    const char* p = "ABC";//文字リテラルは書き換え不可能　pが指す先を変えている
    std::cout << "p = " << p << std::endl;
    p = "DEF";
    std::cout << "p = " << p << std::endl;
}
//ポインタによる文字列の場合は書き換え可能
//配列による文字列の場合は書き換え不可
