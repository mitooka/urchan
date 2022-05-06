#include <iostream>
#include <limits>
#include <cctype>

int main(){
    for(char c=0 ; ; ++c){
        switch (c)
        {
        case '\a':std::cout << "\\a";
            break;
        case '\b':std::cout << "\\b";
            break;
        case '\f':std::cout << "\\f";
            break;
        case '\n':std::cout << "\\n";
            break;
        case '\r':std::cout << "\\r";
            break;
        case '\t':std::cout << "\\t";
            break;
        case '\v':std::cout << "\\v";
            break;
        default: std::cout << " " << (std::isprint(c) ? c : ' ');
        //isprint() 空白類文字の判定関数
        }

        std::cout << " " << std::hex << int(c) << std::endl; 
        if(c == std::numeric_limits<char>::max()){
            break;
        }
    }
}