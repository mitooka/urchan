#include <iostream>//文字列について 生文字列
#include <typeinfo>
int main(){
    //const char* p ="abc";//const charの配列
    /* null門司も入るのでpは4バイト */

    std::cout << "\"ABC\"" << std::endl;
    std::cout << "type: " << typeid("ABC").name()
                << ", size: " << sizeof("ABC") << std::endl;

    std::cout << "\"\"" << std::endl;
    std::cout << "type: " << typeid("").name()
                << ", size: " << sizeof("") << std::endl;
    
    std::cout << R"(\"ABC\nDEF\")" << std::endl;//raw string エスケープシーエンスも出る
    std::cout << R"hoge(\"ABC\nD)EF\")hoge" << std::endl;
    std::cout << "type: " << typeid("ABC\0DEF").name()
                << ", size: " << sizeof("ABC\0DEF") << std::endl;
    
    std::cout << "ABC\0DEF"<< std::endl;//\0はnull文字である、coutは先頭のポインタからみるので4番目でnull文字があるためそれ以降は表示されない
}