#include <iostream>
#include <cctype>//これはC言語のライブラリのchartypeをinclude

void put_str(const char* s){
    for(int i = 0; s[i] != '\0'; ++i){
        std::cout << s[i];
    }
}

void put_upper(const char* s){
    for(int i = 0; s[i] != '\0';++i){
        //std::cout << toupper(s[i]);//coutはここはinStだなーと数値を返す、そのためcastする必要がある
        std::cout << static_cast<char>(std::toupper(s[i]));
    }
}

int main(){
    char str[36];
    put_str("文字列");
    std::cin >> str;
    put_upper(str);
}
/* 実行結果は数値になる
    toupperはintを返す */