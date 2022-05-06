#include <iostream>

#define NULL (void*)0//voidポイント型への0の値
#define NULL 0 //

int main(){
    int i = 42;
    int* pi = &i;
    void* pv = pi;

    if(pi == nullptr){//NULLではなくnullptrを使おう！

    }
}