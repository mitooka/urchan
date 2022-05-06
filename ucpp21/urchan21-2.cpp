#include <iostream>
#include <cstring>
int main(){
    char s[2] = "a";

    std::strcpy(s, "intel core i7 inside");

    std::cout << "'" << s << "'" << std::endl;
    std::cout << sizeof(s) << std::endl;

    /* sは32byteの配列である。コンパイル時にsのバイト数が決まる */
    /* 
    taka@XPS13:~/myprograms/cpp/urchan/ucpp21$ clang++ -Wall -Wextra urchan21-2.cpp
    taka@XPS13:~/myprograms/cpp/urchan/ucpp21$ ./a.out
    'intel core i7 inside'
    2
    Segmentation fault (core dumped)
     */
}