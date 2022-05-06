#include <iostream>
#include <cstddef>

int main(){
    int i;
    char j;
    long v;
    short f;
    std::cout <<"int型の大きさ:"<< sizeof(int) << std::endl;//C++の仕様では intはshort以上のバイト数
    std::cout << "変数iの大きさ:" << sizeof(i) << std::endl;
    
    std::cout <<"char型の大きさ:"<< sizeof(char) << std::endl;
    std::cout << "変数jの大きさ:" << sizeof(j) << std::endl;

    std::cout <<"long型の大きさ:"<< sizeof(long) << std::endl;
    std::cout << "変数vの大きさ:" << sizeof(v) << std::endl;

    std::cout <<"short型の大きさ:"<< sizeof(short) << std::endl;
    std::cout << "変数fの大きさ:" << sizeof(f) << std::endl;
    //1byte == 8bitsの環境では8bytes == 64bitsになる

    size_t s =42;
    std::cout << "size_tの大きさ" << sizeof(sizeof(size_t)) << std::endl;//logと一緒
    //sizeofが返してくる数値の型 sizeofは8bytesで値を返してくる

}