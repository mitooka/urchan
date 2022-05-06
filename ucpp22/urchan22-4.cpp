#include <iostream>
#include <string>
#include <vector>
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

    std::vector<std::string> v = {"DECAFE","BEAD","BEEF"};//stringで動的に確保される arryが固定長でstring可変長
    for(unsigned int i = 0; i < v.size(); ++i){//符号付き整数型と符号なし整数型の比較は危険
        std::cout << "v[" << i << "]=" << v[i] << std::endl;
        v[i][1] = 'x';
        std::cout << "v[" << i << "]=" << v[i] << std::endl;
    }
}    
