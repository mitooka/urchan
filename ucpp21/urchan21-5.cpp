#include <iostream>

void put_str(const char s[]){//const char* はポインタの指す先が変更できなくなる
    for(int i = 0;s[i] != '\0';++i ){
        std::cout << s[i];
    }
}
int main(){
    char str[36];
    put_str("文字列");
    std::cin >> str;
    put_str(str);
    std::cout<< std::endl;
}