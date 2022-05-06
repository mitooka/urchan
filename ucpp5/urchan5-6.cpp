#include <iostream>

int main(){
    int n;
    std::cin >> n;
    if(n > 0){
        for(int i = 0; i < n; ++i){ //前処理;条件式;後処理 n回繰り返すなら0から始めてnのいっこ手前で終了させてn回繰り返す
            std::cout << "*";
        }
        std::cout << "\n";
        //std::cout << i; //ここでiを表示させてスコープが働き見えない
    }
}