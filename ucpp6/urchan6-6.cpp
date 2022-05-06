#include <iostream>
int main(){//goto文
    int n;
    std::cout << "整数何個を加算しますか:";
    std::cin >> n;

    int sum = 0;
    for(int i = 0; i < n; ++i){
        int t;
        std::cout << "整数:";
        std::cin >> t;
        if(t < 0){
            std::cout << "負の値は足しません" << std::endl;
            goto fin_loop;//ラベルまでジャンプする 複数のループを一気に抜ける
        }
        sum += t;
    }
    fin_loop://identifier: ラベルを定義
    std::cout << "total = " << sum << std::endl;
}