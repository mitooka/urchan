#include <iostream>
#include <string>
#include <initializer_list>
int main(){
    int array[10];
    int* p = &array[1];
    int* q = &array[5];

    std::cout << (p == q) << std::endl;
    std::cout << (p > q) << std::endl;
    std::cout << (uintptr_t)(p) << std::endl;
    std::cout << (uintptr_t)(q) << std::endl;
    std::cout << (p < q) << std::endl;

    const char s[] = "hello, world";
    

    std::cout << (+s == +"hello, world") << std::endl;//ポインタとポインタの比較は合法
    //+s :配列の先頭を指すポインタだからポインタ同士の比較は合法 
    //指す先の方が違うポインタどうしは比較できない
    // s: array of char
    // +s: pointer to char 
    // +3 :3

    std::basic_string sa = "Hello";
    std::cout << (sa == "Hello") << std::endl;
    //std::stringが文字列として等しいかどうか判別する。これだと文字列の比較が可能
    
}
