#include <iostream>
#include <string> 
int main(){
    std::string s;
    std::cout << "お名前は？:";
    std::cin >> s;
    
    std::cout << "こんにちは" << s << "さん！"<< std::endl;
}