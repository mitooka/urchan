#include <iostream>
int main(){
    int i = 0;
    for(float x =0; x<=1; x +=0.1,++i){
        std::cout << i << " " << x << std::endl;
    }
}//floatは正確に小数を表そうとするとできない