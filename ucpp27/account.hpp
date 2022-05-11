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