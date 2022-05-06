#include <iostream>
#include <cstring>//c言語由来のstringライブラリ

int main(){
    char s[10];
    const char*x = "ABC";

    std::strcpy(s, "QME");
    std::cout << s << std::endl;
    std::strcat(s,"RTY");//concatinate
    std::cout << s << std::endl;

    std::strcpy(s,x); std::strncat(s, "123",1);//ABC1  第三引数の数でcatされる文字数が変化する
    std::cout << s << std::endl;//strncatは必ずnull文字もコピーされる。上では1byte確保される

    std::strcpy(s,x); std::strncat(s, "123",3);//ABC123
    std::cout << s << std::endl;

    std::strcpy(s,x); std::strncat(s, "123",5);//ABC123
    std::cout << s << std::endl;

    std::strcpy(s,x); std::strncat(s, "12345",5);//ABC12345
    std::cout << s << std::endl;

    std::strcpy(s,x); std::strncat(s, "123456789",5);//ABC12345
    std::cout << s << std::endl;

}