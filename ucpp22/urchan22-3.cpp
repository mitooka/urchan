#include <iostream>
int main(){
    char a[][5] = {"LISP", "C", "Ada"};
    const char* p[]   = {"PALL","X","MAC"};
    for(int i = 0;i < 3;++i){
        std::cout << "a[" << i << "] = \""  << a[i] << std::endl;//配列の先頭addressになって
        //a[i] = "DEF";//これはエラー
    }
    for(int i = 0;i < 3;++i){
        std::cout << "p[" << i << "] = \"" << p[i] << std::endl;
        p[i] = "BEF";
        std::cout << "p[" << i << "] = \"" << p[i] << std::endl;
    }
}