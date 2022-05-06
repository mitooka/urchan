#include <iostream>
struct A//なぜここに列挙体もってくる必要があるのか
{
    int val;

    A(int i):val{i} {}//これなに
};

A operator +(const A& lhs, const A& rhs){//これなに
    return {lhs.val + rhs.val};//これなに
}

template <class T>
T maxof(T a, T b){
    return a>b ? a:b;
}
template<>
int maxof<int>(int a, int b){
    return a<b ? a:b;//intの場合これが実行される②
}
/*int maxof<int>(int a, int b){
    return a<b?a:b;//通常の関数
}*/

int main(){
    int a,b;
    double x;

    std::cout << "a: " ;std::cin >> a;
    std::cout << "b: ";std::cin >> b;
    std::cout << "x: ";std::cin >> x;

    //std::cout <<maxof(a,b) << std::endl;
    //std::cout << maxof<double>(a,x)<< std::endl;//a:int x:doubleなので型変数Tがどちらに統一すればいいかわからない
    //だからmaxof<double> と指定する必要がある
    //std::cout << maxof<int>(a,b) << std::endl;

    std::cout <<maxof(a,b) << std::endl;//通常の関数が呼ばれる
    std::cout << maxof<int>(a,b)<< std::endl;//テンプレート関数を呼ばれる②
    std::cout << maxof<double>(a,b)<< std::endl;//template関数がよばれる
}