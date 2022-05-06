#include <iostream>
#include<string>
int main(){
    std::string s;//これは動的に要素数を確保するため、要素数を指定する必要はない
    char name[2];

    std::cout << "お名前は: " << std::endl;
    std::cin.getline(name,sizeof(name),'\n');//第一引数: 配列名,第二引数: sizeof()でnameを指定して、null文字を含めて2文字。
    std::cout << "こんにちは" << name << "さん"<< std::endl;
}


/* 
std::getlineについて

 */