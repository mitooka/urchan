#include <iostream>
#include <iomanip>
int main(){
    int no1,no2;
    std::cout << "高さ:";
    std::cin >> no1;

    for (int i = 1; i <= no1 ;++i)
    {   for (int j = 1; j <= no1- i ; ++j){
        std::cout << " ";
        }
    
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}