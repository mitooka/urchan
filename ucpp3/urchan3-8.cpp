#include <iostream>
int main(){ // sort並び変え
    int a , b;

    std::cout << " a, b";
    std::cin >> a >>b;
    
    // a<= b
    if (a > b){
        std::swap(a,b);
        
    }

    std::cout << " a<=bになるようにsortしました:"<< a << "," << b << std::endl;
}