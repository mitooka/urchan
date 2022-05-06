#include <iostream>
int fx = 0;

void func(int v){
    static int sx = v;
    int ax = v;

    fx++;
    sx++;
    ax++;//自動記憶域機関有効範囲と記憶域が関数内

    std::cout << fx << " "<< sx << " " << ax << std::endl;
} 
int main(){
    std::cout << "fx sx ax" << std::endl;
    for(int i =0; i <8; ++i){
        func(0);
    }
}