#include <iostream>
#include <array>
//ポインタ -> 指し示す オブジェクトや関数や変数はメモリ上にある。ポインタはメモリにアクセスするため

int main(){
    int n;
    double x;

    std::cout << "n's address: " << &n << std::endl;
    std::cout << "n's size: " << sizeof(n) << std::endl;
    std::cout << "&n's size: " <<  sizeof(&n) << std::endl;

    std::cout << "x's address: " << &x << std::endl; 
    std::cout << "x's size: " << sizeof(x) << std::endl;
    std::cout << "&x's size: " << sizeof(&x) << std::endl;

    std::array<int,16> a;
    std::cout << "a's size: " << sizeof(a) << std::endl;
    std::cout << "&a's size: " << sizeof(&a) << std::endl;

    std::array<int,16>* ap = &a;
    std::cout << "&ap's size: " << sizeof(ap) << std::endl;//4
    std::cout << "&ap's size: " << sizeof(&a) << std::endl;

    //メモリの住所がアドレスが表示される
}
/*
n's address:0x7fffc712732c
x's address:0x7fffc7127320
*/
/* アドレスは型に限らず常に8バイト
ポインタ変数のサイズは常に8バイト 
ポインタを指し示す先の変数の大きさは型による*/