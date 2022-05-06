#include <iostream>
#include <cctype>
int main(){
    char str[] = "ABC";
    const char* ptr = "123";//指すさきの値がconstなので書き換えない
    std::cout << str;
    std::cout << ptr;
}

//
