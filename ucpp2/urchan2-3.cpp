#include <iostream> //getline関数を用いる
//#include <string> これなくてもいけるんだけど
int main(){
    std::string s;
    std::cout << "お名前は？:";
    //std::cin >> s;
    std::getline(std::cin, s);
    
    std::cout << "こんにちは" << s << "さん！"<< std::endl;
}