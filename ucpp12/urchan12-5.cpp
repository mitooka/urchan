#include <iostream>
void g(int a);

void f_void(int a, int b){
    g(a);
    g(b);
}

int f_int(int a, int b, int c){
    return a+b+c;
}

long f_long(int a, double b){
    return a*static_cast<long>(b);
}