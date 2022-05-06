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
        std::cout << ((x >> i) & 1U ? '1': '0');//1Uとは？ xをiビットずらしていく
        /*     三項演算子   条件式? 条件式が真だったときの式 : 偽だったときの式 */
    }       
}

int main(){
    unsigned a, b;
    std::cin >> a >> b;

    std::cout << "a     =";
    print_bits(a);
    std::cout << std::endl;
    std::cout << "b     =";
    print_bits(b);
    std::cout << std::endl;

    std::cout << "a & b =";
    print_bits(a & b);
    std::cout << std::endl;

    std::cout << "a | b =";
    print_bits(a | b);
    std::cout << std::endl;

    std::cout << "a ^ b = ";
    print_bits(~a);
    std::cout << std::endl;

    std::cout << "~a    =";//xor
    print_bits(~a);
    std::cout << std::endl;

    std::cout << "b     =";
    print_bits(~b);
    std::cout << std::endl;

    std::cout << "a >> b=";
    print_bits(a >> b);
    std::cout << std::endl;

    std::cout << "a << b= ";
    print_bits(a << b);
    std::cout << std::endl;

}