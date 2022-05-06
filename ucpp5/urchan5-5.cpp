#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    //whileの式が成立する間実行される
    {
        sum += i;//等差数列の和の公式使ってください
        ++i;
    }
    std::cout << sum<< std::endl;
    
}