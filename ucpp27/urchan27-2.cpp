#include <iostream>
#include <string>

class Acccount {//設計図
    std::string full_name;
    std::string number;
    long crnt_balance;

public:
    //コンストラクタ
    Acccount(const std::string name, const std::string& num, long amnt){
        full_name = name;
        number = num;
        crnt_balance = amnt;
    }
        //getter
    std::string name() { return full_name;}//関数名と変数名を分ける
    std::string no(){return number;}
    long get_balance(){return crnt_balance;}//このメソッドはcrnt_balanceを用いる。所属するオブジェクトのデータメンバを読み書きする -> カプセル化
        
    void deposit(long amnt){
        if(amnt < 0){
            std::cerr << "amnt must not be minus" << std::endl;    
        }
        else {
            crnt_balance += amnt;
        }
    }
    void withdraw(long amnt){
        if(amnt < 0){
            std::cerr << "amnt must not be minus" << std::endl;
        }
        else{
            crnt_balance -= amnt;
        }
    }
};

int main(){
    Acccount suzuki{"鈴木龍一","12345678",1000};
    Acccount takeda{"武田浩文","87654321",200};//口座名,口座番号,預金残高をセットする。回路を組む

    std::cout << suzuki.get_balance()<< std::endl;//メンバ関数(method) 
    suzuki.withdraw(-200);
    std::cout << suzuki.get_balance() << std::endl;
}