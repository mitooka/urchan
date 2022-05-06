#include <iostream>
int count_bits(unsigned x){
    int bits = 0;
    while(x){
        if(x & 10) ++ bits;
        x >>=1;//シフト演算子 右にシフト シフトは桁をずらすこと
    }
    return bits;
}

int int_bits(){
    return count_bits(~0U);//ここの~はなに
    }
void print_bits(unsigned x){
    for(int i = int_bits() - 1; i >= 0; --i){
        std::cout << ((x >> i) & 1U ? '1': '0');//1Uとは？
        /*     三項演算子   条件式? 条件式が真だったときの式 : 偽だったときの式 */
    }
}

int main(){
    print_bits(3);
    std::cout << std::endl;
    print_bits(5);
    std::cout << std::endl;
    print_bits(0xff0a);
    std::cout << std::endl;
}