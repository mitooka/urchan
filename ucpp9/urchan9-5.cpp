//配列
#include <iostream>
#include <numeric>
#include <array>
int main(){
    //int tensu[5];//型があって要素数 int型が5つ集まった配列
    std::array<int ,5> tensu;//新しいタイプの配列宣言
    int sum = 0;

    std::cout << tensu.size() <<  "人の点数の合計点と平均値を求めます" << std::endl;//tensu.size()によって数値が連動する
    for(int i = 0; i< static_cast<int>(tensu.size()) ;++i){
        std::cout << (i + 1) <<"番目の点数";
        std::cin >> tensu[i];//添え字は変数でも変数でも式でもいい
        //sum += tensu[i];
    }
    sum = std::accumulate(tensu.begin(), tensu.end(),0);

    std::cout << "合計点は" << sum << std::endl;
    std::cout << "平均は" << sum /5.0 << std::endl;
}