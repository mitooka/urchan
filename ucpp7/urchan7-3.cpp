#include <iostream>
int main(){
    //int i;
    //long li; //long と書いてもintと書いてもshortと書いても同じ
    //short si;

    unsigned int i = 0b10011100;//
    unsigned int d = 0x9c;
    /// 0b1001 == 0b1000 + 0b1
    ///        == 2^3 +1 == 9

    /// 0b10011100 == 1001 1100
                    == 9   c
                    == 0x9c//どういうこと？文字で表すと？
    std::cout << i << std::endl;
    std::cout << d << std::endl;


    /* リテラルについて
    8進数リテラル 0 2進数リテラル0b 16進数リテラル 0x */


}