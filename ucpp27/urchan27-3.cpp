#include <iostream>
#include <string>
class Account {
    std::string full_name;
    std::string number;
    long crnt_balance;

public:
    Account(const std::string& name, const std::string& num, long amnt);
        //getter
    std::string name() { return full_name;}
    std::string no(){return number;}
    long get_balance(){return crnt_balance;}

    void deposit(long amnt);//ここで宣言
    void withdraw(long amnt);//ここで宣言
};
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


int main(){
    Account suzuki{"鈴木龍一","12345678",1000};
    Account takeda{"武田浩文","87654321",200};

    std::cout << suzuki.get_balance()<< std::endl; 
    suzuki.withdraw(-200);
    std::cout << suzuki.get_balance() << std::endl;
}

