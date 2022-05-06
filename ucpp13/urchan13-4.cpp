#include <iostream>
//参照渡し
void swap(int x, int y){
    int t = x;
    x = y;
    y = t;
    
}

int main(){
    int a = 3 ,b = 5;
    swap(a , b);
    std::cout << "swap(a , b: ): a = " << a << " ,b =" << b << std::endl;
    


}