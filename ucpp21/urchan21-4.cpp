#include <iostream>
#include<string>
int main(){
    std::string s;//これは動的に要素数を確保するため、要素数を指定する必要はない

    std::cout << "お名前は: " << std::endl;
    std::getline(std::cin,s);//ストリームから改行文字列が現れるまで入力を受け付ける
    std::cout << "こんにちは" << s << "さん"<< std::endl;
}

