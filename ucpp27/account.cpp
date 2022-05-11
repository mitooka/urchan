
#include <iostream>
#include "account.hpp"
void Account::deposit(long amnt){
    if(amnt < 0){
        std::cerr << "amnt must not be minus" << std::endl;    
    }
    else {
        crnt_balance += amnt;
    }
    }
void Account::withdraw(long amnt){//Accountに属している
    if(amnt < 0){
        std::cerr << "amnt must not be minus" << std::endl;
    }
    else{
        crnt_balance -= amnt;
    }
    }
Account::Account(const std::string& name, const std::string& num, long amnt)
    : full_name(name), number(num),crnt_balance(amnt){

    }
