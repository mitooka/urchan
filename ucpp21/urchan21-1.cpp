#include <iostream>
#include <cstring>
int main(){
    char s[4];
    //char s[] = "aBc";とすると最適な要素数になる 要素数は文字数+null文字数。この場合は要素数4
    //char s[4] = "abc"; これも書ける
    s[0] = 'A';
    s[1] = 'B';
    s[2] = 'C';
    s[3] = '\0';/* null文字は表示されない */
    std::cout << s << std::endl;
    
    std::strcpy(s,"def");//これで代入 第一引数に配列名,第二引数に文字列
    
    
    std::cout << s << std::endl;

    //---------------| ここ全体は文字列ではない
    // W X \0 Y Z \0
    // |----| |-----|
}    