#include <iostream>

//templateの話 いろんな実装があるときに型を抽象化して実装をまとめる機能

/*int add1(int i){
    return i + 1;
}

double add1_double(double d){
    return d + 1;
}//このような感じで似たような処理をまとめたい*/

template <class T>
T add1(T v){//Tにint、double,aが来る可能性があると判断し3つのadd1っていう関数ｗ作り出した,Tは型に相当
    return v+1;
}//13~16にかけて関数テンプレート 関数テンプレートからテンプレート関数を作り出す行為->具現化
//generic
//template

struct A//なぜここに列挙体もってくる必要があるのか
{
    int val;

    A(int i):val{i} {}//これなに
};

A operator +(const A& lhs, const A& rhs){//これなに
    return {lhs.val + rhs.val};//これなに
}


int main(){
    std::cout << add1(10) << std::endl;
    std::cout << add1(11.2) << std::endl;

    A a{4};
    A b{7};
    std::cout << (a + b).val << std::endl;
    std::cout << add1(a).val  << std::endl;
}


