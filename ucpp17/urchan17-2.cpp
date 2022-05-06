#include <iostream>
int main(){
    int x = 123, y = 567,sw;
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	std::cout << "値を変更する変数する x=0, y=1" << std::endl;
    std::cin >> sw;

    int* ptr = &y;
    if(sw == 0){
        ptr = &x;//ここでポインタの指し示す先を変更する。defaultではyである
    }
    *ptr = 999;
    //x = 999

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    
}