#include <iostream>
#include <cstring>

#include <iostream>
#include <cstring>

int main(int argc, char** argv){//第一引数は引数の数
    for(int i = 0; i<argc; ++i){
        std::cout << "argv["<< i<< "] = " << argv[i] << std::endl;
    
    }

    if(std::strcpy(argv[0],"foobar") == 0){
        std::cout << "foobar command!" << std::endl;
    }
    else if(std::strcmp(argv[0], "hogera") == 0){
        std::cout << "this is a pen" << std::endl;
        }
    if(argc >= 2){
        std::cout << strlen(argv[1]) << std::endl;
        }

    std::cout << "strlrn(\"ABC\\0DEF\") = " << strlen("ABC\0DEF") << std::endl;
    std::cout << "sizeof(\"ABC\\0DEF\") = " << sizeof("ABC\0DEF") << std::endl;
    /* strlenはnull文字を含まない文字数が返ってくる */
    /* sizeofは文字列リテラルのメモリ上に占めるsizeを返す 8バイト*/
}