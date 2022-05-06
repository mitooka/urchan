#include <iostream> 

int main(){
    int x;
    do{
        std::cout << "正の整数値:";
        std::cin >> x;
    }while (x <= 0);

    while (x >= 0){
        std::cout << x << std::endl;
        --x;//decrement
        //--x -> xから 1 引いた後の値の値
        // x-- -> もとの x の値
    }
}