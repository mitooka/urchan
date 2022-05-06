#include <iostream>

int main(){
    int x;
    std::cout << "正の整数を逆から表示\n";
    do{
        std::cout << "正の整数:";
        std::cin >> x;
    }while( x <= 0);
    std::cout << "逆から読むと:";
    while (x > 0)
    {
        std::cout << (x % 10);
        x /= 10; //x = x /10; 切り捨て
    }
    std::cout << std::endl;
    
}








    //x = 42;
    //x +- 1;//x = x + 1;
    //x -= 1;//x = x - 1;