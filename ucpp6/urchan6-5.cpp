#include <iostream>
#include <iomanip>

int main(){
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
            continue;
        }
        sum += t;
    }
    std::cout << "total = " << sum << std::endl;    
}

/* int i = 0;
while (i<n){
    //処理
    int t;
    std::cout << "整数:";
    std::cin >> t;
    if(t < 0){
        std::cout << "負の値は足しません" << std::endl;
        ++i;上と同じ処理にしたいならここに書く必要がある
        continue;
    } 
    sum += t;
    ++i;<-ここに++iを書いてもすっ飛ばされて実行されない
} */