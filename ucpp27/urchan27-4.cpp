#include <iostream>
#include <string>

#include "account.hpp"

int main(){
    Account suzuki{"鈴木龍一","12345678",1000};
    Account takeda{"武田浩文","87654321",200};

    std::cout << suzuki.get_balance()<< std::endl; 
    suzuki.withdraw(-200);
    std::cout << suzuki.get_balance() << std::endl;
}