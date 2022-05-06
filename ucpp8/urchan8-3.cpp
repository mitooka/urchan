#include <iostream>
int main(){
    float sum = 0;
    for(int  i= 0; i<=1000; ++i){
        float x = static_cast<float>(i) / 1000;
        std::cout << x << std::endl;
        sum += x;
        
    }
    std::cout << sum << std::endl;

}