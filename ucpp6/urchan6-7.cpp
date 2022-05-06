#include <iostream>
int main(){//面積関係
    int n;
    std::cout << "面積";
    std::cin >> n;

    for(int i=1; i<n; ++i){
        if(i*i>n){
            break;
        }
        if (n%i != 0){
            continue;
        }
        std::cout << i << "x" << n/i << std::endl;
    }
}
/* エスケープシーエンス
"\n "改行 ,"\a", "\t,水平タブ"
"\"",文字として表示する,'\'' */
// 