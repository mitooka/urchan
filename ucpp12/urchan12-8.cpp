#include <iostream>
//なぜかできない
long collatz(long n){
    if(n == 1){
        return 1;
    }
    if(n%2){
        return collatz(3*n+1);
    }
    return collatz(n/2);
}

int main(){
    std::cout << collatz(41)<< std::endl;
}