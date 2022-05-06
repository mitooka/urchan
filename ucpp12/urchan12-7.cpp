#include <iostream>
#include <cstdlib>
#include <random>//再帰よびだし
//long型32bit以上loglong型以下

long factrial(long n){
    if(n <= 0){
        return 1;
    }
    return n*factrial(n-1);

}/*
*再帰呼び出し
*f(5) ==> 5 * f(4)
*f(4) ==> 4 * f(3)
*f(3) ==> 3 * f(2)
*f(2) ==> 2 * f(1)
*f(1) ==> 1 * f(0)
*f(0) ==>1 
 */

int main(){
    std::cout << factrial(5)<< std::endl;
        }