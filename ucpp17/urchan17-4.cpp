#include <iostream>
/*void f(int a, int b){
    //a,bは値渡しとなる
    a = a+b;
}*/
void f(int* a, int b){
    *a = *a + b;
}
//aはポインタの値渡し・参照渡しではない
void f_ref(int& a, int b){
    //この場合aは参照渡し、bは値渡し
}
int main(){
    int a = 42, b = 5;
    f(&a,b);
    //f(42,5);
    std::cout << a <<  std::endl;
}