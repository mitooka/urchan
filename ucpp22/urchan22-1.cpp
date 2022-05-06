#include <iostream>
#include <cstring>
int main(){
    char s[] = "ABC";
    std::cout << "s = \"" << s <<"\"" << std::endl;
    //s = "BEF";//これはエラー 配列はそのまま代入はできない
    std::strcpy(s, "BEF");
    std::cout << "s = \"" << s <<"\"" << std::endl;
}
