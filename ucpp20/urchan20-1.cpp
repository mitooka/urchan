#include <iostream>
#include <new>
int f(){
    double* a = new double[90000000000];
}
int some_f(){
    return -1;
}
int main(){
    while (true)
    {
        try{
            f();//ここでnewの失敗
        }catch(std::bad_alloc){
            std::cout << "配列のnewに失敗しました。" << std::endl;
            return -1;
        }
    }
    
}