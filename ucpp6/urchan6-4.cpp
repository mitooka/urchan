#include <iostream>
#include <iomanip>

int main(){//break文
    int n;
    std::cout << "整数何個を加算しますか:";
    std::cin >> n;

    int sum = 0;
    for(int j = 0; j < n; ++j){
        for(int i = 0; i < n; ++i){
            int t;
            std::cout << "整数 (0で終了) :";
            std::cin >> t;
            if(t == 0) break;//条件break 再開できない、中止する breakを直接含んでいるfor文を抜けることができる
            sum += t; //合計
        }
        std::cout << "ここ" << std::endl;
    }
    std::cout << "total = " << sum << std::endl;
}